//
// Created by T10115885 on 1/31/2019.
//
#include <iostream>
using namespace std;

int main() {
    const double HOMEWORK_MAX = 80.0;
    const double MIDTERM_MAX = 40.0;
    const double FINAL_MAX = 70.0;
    const double QUIZ_MAX = 20.0;

    const double HOMEWORK_WEIGHT = 0.10;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.45;
    const double QUIZ_WEIGHT = 0.15;

    double homeworkScore;
    double midtermScore;
    double finalScore;
    double quizScore;

    double homeworkPart;
    double midtermPart;
    double finalPart;
    double quizPart;

    double coursePercentage;

    cout << "Enter homework score:" << endl;
    cin  >> homeworkScore;

    cout << "Enter quiz score:"<<endl;
    cin >> quizScore;

    cout << "Enter midterm exam score:" << endl;
    cin  >> midtermScore;

    cout << "Enter final exam score: " << endl;
    cin  >> finalScore;

    homeworkPart = ((homeworkScore / HOMEWORK_MAX) * HOMEWORK_WEIGHT);
    midtermPart = ((midtermScore / MIDTERM_MAX) * MIDTERM_WEIGHT);
    finalPart = ((finalScore/FINAL_MAX) * FINAL_WEIGHT);
    quizPart = ((quizScore/QUIZ_MAX) * QUIZ_WEIGHT);

    coursePercentage = homeworkPart + midtermPart + finalPart + quizPart;

    coursePercentage = coursePercentage * 100; // Convert fraction to %

    cout << endl << "Your course percentage: ";
    cout << coursePercentage << endl;

    return 0;
}
