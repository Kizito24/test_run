from flask import Blueprint, render_template, request, redirect, flash, url_for
from flask_login import login_required, current_user
from app.models import Question

quiz_bp = Blueprint('quiz', __name__)

@quiz_bp.route('/')
@login_required
def quiz_home():
    return render_template('home.html', is_admin=current_user.is_admin)

@quiz_bp.route('/quiz', methods=['GET', 'POST'])
@login_required
def take_quiz():
    if request.method == 'POST':
        answers = request.form
        score = 0
        total = 0
        for question_id, user_answer in answers.items():
            question = Question.query.get(int(question_id))
            if question.correct_option == int(user_answer):
                score += 1
            total += 1
        return render_template('result.html', score=score, total=total)
    questions = Question.query.all()
    return render_template('quiz.html', questions=questions)
