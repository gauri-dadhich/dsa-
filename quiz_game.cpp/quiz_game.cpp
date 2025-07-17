#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Question {
public:
    string questionText;
    vector<string> options;
    int correctOption; // 1-based index

    Question(string q, vector<string> opts, int correct) {
        questionText = q;
        options = opts;
        correctOption = correct;
    }

    void displayQuestion(int qNo) {
        cout << "\nQ" << qNo << ": " << questionText << "\n";
        for (int i = 0; i < options.size(); i++) {
            cout << i + 1 << ". " << options[i] << "\n";
        }
    }

    bool isCorrect(int userAnswer) {
        return userAnswer == correctOption;
    }
};

class Quiz {
private:
    vector<Question> questions;
    int score;

public:
    Quiz() {
        score = 0;
        loadQuestions();
    }

    void loadQuestions() {
        // Hardcoded questions. You can later replace this with file input.
        questions.push_back(Question("What is the capital of India?", {"Delhi", "Mumbai", "Kolkata", "Chennai"}, 1));
        questions.push_back(Question("Which data structure uses FIFO?", {"Stack", "Queue", "Graph", "Tree"}, 2));
        questions.push_back(Question("C++ is a ___ language?", {"Procedural", "Functional", "Object-Oriented", "Assembly"}, 3));
        questions.push_back(Question("Which planet is known as the Red Planet?", {"Earth", "Venus", "Mars", "Jupiter"}, 3));
    }

    void start() {
        cout << "===== Welcome to the Quiz Game =====\n";
        for (int i = 0; i < questions.size(); i++) {
            questions[i].displayQuestion(i + 1);
            int userAnswer;
            cout << "Your answer (1-4): ";
            cin >> userAnswer;

            if (questions[i].isCorrect(userAnswer)) {
                cout << "✅ Correct!\n";
                score++;
            } else {
                cout << "❌ Wrong! Correct Answer: " << questions[i].correctOption << ". " << questions[i].options[questions[i].correctOption - 1] << "\n";
            }
        }

        displayScore();
    }

    void displayScore() {
        cout << "\n===== Quiz Over! =====\n";
        cout << "Your Score: " << score << "/" << questions.size() << "\n";

        if (score == questions.size()) {
            cout << "🎉 Excellent! You're a pro!\n";
        } else if (score >= questions.size() / 2) {
            cout << "👍 Good job!\n";
        } else {
            cout << "😐 Better luck next time.\n";
        }
    }
};

int main() {
    Quiz q;
    q.start();

    return 0;
}
