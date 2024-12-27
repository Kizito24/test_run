from flask import Blueprint, render_template, request, redirect, flash, url_for
from flask_login import login_required, current_user
from app.models import Question
from app import db

admin_bp = Blueprint('admin', __name__)

@admin_bp.route('/add', methods=['GET', 'POST'])
@login_required
def add_question():
    if not current_user.is_admin:
        flash('Unauthorized access!', 'danger')
        return redirect(url_for('quiz.quiz_home'))

    if request.method == 'POST':
        question = request.form['question']
        option1 = request.form['option1']
        option2 = request.form['option2']
        option3 = request.form['option3']
        option4 = request.form['option4']
        correct_option = request.form['correct_option']
        new_question = Question(
            question=question, option1=option1, option2=option2,
            option3=option3, option4=option4, correct_option=int(correct_option)
        )
        db.session.add(new_question)
        db.session.commit()
        flash('Question added successfully!', 'success')
        return redirect(url_for('admin.add_question'))

    return render_template('add_question.html')
