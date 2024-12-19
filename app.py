#!usr/bin/python3

from flask import Flask, render_template, request, redirect, url_for, session, jsonify
from flask_sqlalchemy import SQLAlchemy
from werkzeug.security import generate_password_hash, check_password_hash

app = Flask(__name__)
app.secret_key = 'your_secret_key'
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///quiz.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False

db = SQLAlchemy(app)

# Database Models
class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(80), unique=True, nullable=False)
    password_hash = db.Column(db.String(120), nullable=False)
    scores = db.relationship('Score', backref='user', lazy=True)

class Question(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    text = db.Column(db.String(255), nullable=False)
    options = db.Column(db.JSON, nullable=False)  # Store options as a JSON object
    correct_option = db.Column(db.String(255), nullable=False)

class Score(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    user_id = db.Column(db.Integer, db.ForeignKey('user.id'), nullable=False)
    score = db.Column(db.Integer, nullable=False)

# Routes
@app.route('/')
def home():
    return render_template('home.html')

@app.route('/register', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        password_hash = generate_password_hash(password)

        if User.query.filter_by(username=username).first():
            return 'User already exists!'

        new_user = User(username=username, password_hash=password_hash)
        db.session.add(new_user)
        db.session.commit()
        return redirect(url_for('login'))

    return render_template('register.html')

@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        user = User.query.filter_by(username=username).first()

        if user and check_password_hash(user.password_hash, password):
            session['user_id'] = user.id
            return redirect(url_for('quiz'))

        return 'Invalid credentials!'

    return render_template('login.html')

@app.route('/logout')
def logout():
    session.pop('user_id', None)
    return redirect(url_for('home'))

@app.route('/quiz', methods=['GET', 'POST'])
def quiz():
    if 'user_id' not in session:
        return redirect(url_for('login'))

    questions = Question.query.all()
    if request.method == 'POST':
        score = 0
        for question in questions:
            user_answer = request.form.get(str(question.id))
            if user_answer == question.correct_option:
                score += 1

        new_score = Score(user_id=session['user_id'], score=score)
        db.session.add(new_score)
        db.session.commit()

        return redirect(url_for('result', score=score))

    return render_template('quiz.html', questions=questions)

@app.route('/result/<int:score>')
def result(score):
    return render_template('result.html', score=score)

# Bonus: Expose quiz questions as REST API
@app.route('/api/questions', methods=['GET'])
def api_questions():
    questions = Question.query.all()
    return jsonify([{
        'id': q.id,
        'text': q.text,
        'options': q.options
    } for q in questions])

def create_tables():
    db.create_all()

if __name__ == '__main__':
    with app.app_context():  # Ensures the application context is active
        db.create_all()      # Initializes the database tables
    app.run(debug=True)

