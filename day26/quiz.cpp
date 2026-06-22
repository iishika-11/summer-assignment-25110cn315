#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int ans;

    cout << "===== QUIZ APPLICATION =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai  2. Delhi  3. Kolkata  4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Delhi.\n";
    }

    // Question 2
    cout << "\n2. Which language is used for system programming?\n";
    cout << "1. Python  2. Java  3. C++  4. HTML\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C++.\n";
    }

    // Question 3
    cout << "\n3. 5 * 6 = ?\n";
    cout << "1. 30  2. 25  3. 35  4. 40\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 30.\n";
    }

    // Question 4
    cout << "\n4. Which is an input device?\n";
    cout << "1. Monitor  2. Printer  3. Keyboard  4. Speaker\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Keyboard.\n";
    }

    // Final Score
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/4\n";

    // Performance message
    if (score == 4)
        cout << "Excellent!\n";
    else if (score >= 2)
        cout << "Good job!\n";
    else
        cout << "Keep practicing!\n";

    return 0;
}