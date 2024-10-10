// MonthlyInterest.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab 2
// Isabel Alamillo 2401402
// COSC 1436 Fall Semester 2024

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    cout << "Lab 2" << endl;
    cout << "Isabel Alamillo 2401402" << endl;
    cout << "COSC 1436 Fall Semester 2024" << endl;

    int loanAmount;
    
    do
    {
        cout << "Please enter the initial loan amount (1 to 1000): ";
        cin >> loanAmount;

        if (loanAmount <= 0 || loanAmount > 1000)
            cout << "Error: Values must be valid input" << endl;
    } while (loanAmount <= 0 || loanAmount > 1000);

    float interestRate;
    
    do
    {
        cout << "Please enter the interest rate percentage (1.0 to 100.0): ";
        cin >> interestRate;

        if (interestRate < 1.0 || interestRate > 100.0)
            cout << "Error: Values must be valid input" << endl;
    } while (interestRate < 1.0 || interestRate > 100.0);

    interestRate = (interestRate) / 100;

    float payment;

    do
    {
        cout << "Please enter the amount you would like to pay monthly (0 to balance amount): ";
        cin >> payment;

        if (payment > loanAmount)
            cout << "Error: Values must be valid input" << endl;
    } while (payment > loanAmount);

    double totalPaymentValue = 0.00;
    double totalInterestValue = 0.00;

    cout << setw(40) << setfill(' ') << "" << setfill(' ') << endl;
    cout << "First Year Loan Information: " << endl;
    cout << setw(40) << setfill('-') << "" << setfill(' ') << endl;
    cout << left << setw(20) << "Month Number " << setw(20) << "Loan Balance " << setw(15) << "Payment " << setw(29) << "Interest for the month " << setw(24) << "New loan balance " << endl;
    cout << setw(40) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(20) << 1 << setw(20) << loanAmount << setw(15) << 0.00 << setw(29) << 0.00 << setw(24) << loanAmount << endl;

    for (int month = 2; month <= 12; ++month)
    {
        if (loanAmount <= 0)
            cout << left << fixed << setprecision(2) << setw(20) << month << setw(20) << 0.00 << setw(25) << 0.00 << setw(29) << 0.00 << setw(24) << 0.00 << endl;
        
        
        double interest = (loanAmount) * (interestRate);
        
        double newLoanAmount = (loanAmount)+(interest);
        newLoanAmount = (newLoanAmount)-(payment);

        totalPaymentValue += payment;
        totalInterestValue += interest;
        
        cout << left << fixed << setprecision(2) << setw(20) << month << setw(20) << loanAmount << setw(15) << payment << setw(29) << interest << setw(24) << newLoanAmount << endl;

        loanAmount = newLoanAmount;

        if (loanAmount < 0)
            loanAmount = 0;
    }
    cout << left << fixed << setprecision(2) << setw(35) << "Total Payments: " << totalPaymentValue << setw(35) << "Total Interest: " << totalInterestValue << endl;
} 
