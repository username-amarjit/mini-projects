let currentQuestion = 0
let currentAnswer;
let givenAnswer;
let score = 0;


// console.log(localStorage['questions']);

const questionList = JSON.parse(localStorage.questions).map((question) => {
    question["all_answers"] = [...question.incorrect_answers, question.correct_answer]
    question["all_answers"].sort((a, b) => 0.5 - Math.random())
    return question
})


loadNextQuestion()

function checkQuizState() {
    if (currentQuestion == questionList.length ) {
        console.log("quiz has ended");

        return false
    }
    console.log("quiz state true");

    return true
}

function loadNextQuestion() {
    if (checkQuizState()) {
        console.log('Loading Next Question');
        console.log(questionList[currentQuestion].question);
        console.log(questionList[currentQuestion].all_answers);

        let allAnswers = questionList[currentQuestion].all_answers

        document.querySelector('#questionLegend').textContent = `Question ${currentQuestion + 1}`
        document.querySelector('#questionText').innerHTML = questionList[currentQuestion].question

        document.querySelectorAll('#answer').forEach((answerOption) => (answerOption.innerHTML = questionList[currentQuestion].all_answers.pop()))
        currentAnswer = questionList[currentQuestion].correct_answer
    }
}

document.querySelector('#submitButton').addEventListener('click', submitAnswer)

function submitAnswer() {
    if (checkQuizState()) {
        const answerElements = document.querySelector("#answerList").children
        for (let answerElement of answerElements) {
            if (answerElement.children[0].checked) {
                givenAnswer = answerElement.children[1].innerText
                answerElement.children[0].checked = false
            }
        }

        if (currentAnswer == givenAnswer) {
            score++
            console.log(score)
        }
        console.log(`given answer ${givenAnswer} and correct answer ${currentAnswer}`);
        currentQuestion++
        loadNextQuestion()
    }
}


function quizOver() {
    document.querySelector("#resultScreen").classList.remove("hidden")
    document.querySelector("#questionScreen").classList.add("hidden")
    document.querySelector("#finalScore").classList.add("hidden")

}