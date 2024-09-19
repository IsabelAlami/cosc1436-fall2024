// GradeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lab 1
// Isabel Alamillo 2401402
// COSC 1436 Fall Semester 2024

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Lab 1" << endl;
    cout << "Isabel Alamillo 2401402" << endl;
    cout << "COSC 1436 Fall Semester" << endl;

    //Ask for name, lab grades, and exam grades

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    double labgrOne;
    cout << "Enter a lab grade: ";
    cin >> labgrOne;

    double labgrTwo;
    cout << "Enter a lab grade: ";
    cin >> labgrTwo;

    double labgrThree;
    cout << "Enter a lab grade: ";
    cin >> labgrThree;

    double labgrFour;
    cout << "Enter a lab grade: ";
    cin >> labgrFour;


    double examgrOne;
    cout << "Enter an exam grade: ";
    cin >> examgrOne;

    double examgrTwo;
    cout << "Enter an exam grade: ";
    cin >> examgrTwo;

    double examgrThree;
    cout << "Enter an exam grade: ";
    cin >> examgrThree;

    double participationOne;
    cout << "Enter participation grade: ";
    cin >> participationOne;

    double finalExam;
    cout << "Enter final exam grade: ";
    cin >> finalExam;

    //Display Username and Grades/Labs

    //lab grades
    cout << "Student: " << name << endl;
    cout << "Lab Grades: " << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout << labgrOne << endl;
    cout << labgrTwo << endl;
    cout << labgrThree << endl;
    cout << labgrFour << endl;
    double labAvg = (labgrOne + labgrTwo + labgrThree + labgrFour)/ 4;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Average Lab Grade: " << labAvg << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;

    //exam grades
    cout << "Student: " << name << endl;
    cout << "Exam Grades: " << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout << examgrOne << endl;
    cout << examgrTwo << endl;
    cout << examgrThree << endl;
    double examAvg = (examgrOne + examgrTwo + examgrThree)/ 3;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Average Exam Grade: " << examAvg << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;

    //Story 5
    double classAvg = (labAvg * 0.65) + (examAvg * 0.20) + (participationOne * 0.05) + (finalExam * 0.10);
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Student Name: " << name << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Lab Average (65%)
        : " << labAvg << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Exam Average (20%): " << examAvg << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Participation Average (5%): " << participationOne << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Final Exam Grade (10%): " << finalExam << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Class Average: " << classAvg << endl;
    cout << setw(25) << setfill('-') << "" << setfill(' ') << endl;
    
    




}


    





}