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
    cin >> name;
    getline(cin, name);

    int labgrOne;
    cout << "Enter a lab grade: ";
    cin >> labgrOne;

    int labgrTwo;
    cout << "Enter a lab grade: ";
    cin >> labgrTwo;

    int labgrThree;
    cout << "Enter a lab grade: ";
    cin >> labgrThree;

    int labgrFour;
    cout << "Enter a lab grade: ";
    cin >> labgrFour;

    int examgrOne;
    cout << "Enter an exam grade: ";
    cin >> examgrOne;

    int examgrTwo;
    cout << "Enter an exam grade: ";
    cin >> examgrTwo;

    int examgrThree;
    cout << "Enter an exam grade: ";
    cin >> examgrThree;

    //Display Username and Grades/Labs

    cout << name << endl;
    cout << "Lab Grades" << endl;
    cout << labgrOne << endl;
    cout << labgrTwo << endl;
    cout << labgrThree << endl;
    cout << labgrFour << endl;

    double labAvg;

}