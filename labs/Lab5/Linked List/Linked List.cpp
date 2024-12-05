// Lab 5
// Isabel Alamillo 2401402
// COSC 1436 Fall Semester 2024

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

/// @brief Creation of the head node
struct Node
{
    int Value = 0;

    Node* Next = nullptr;
};

struct LinkedList
{
    Node* Head = nullptr;
};

/// @brief Requests an integer value
/// @return Integer value entered
int GetMenuCommand()
{
    int value;
    while (true)
    {
        cout << "Enter a Command: ";
        cin >> value;

        if (value == 1 || value == 2 || value == 3 || value == 4)
            return value;
        else if (value == 5)
            break;
        else
            cout << "ERROR: Please enter a valid command Input" << endl;
    }
    return value;
}

/// @brief Displays a menu for the user
/// @return Returns an integer value
int DisplayMenu()
{
    cout << "Main Menu" << endl;
    cout << endl;
    cout << "(1) List" << endl;
    cout << "(2) Add" << endl;
    cout << "(3) Delete" << endl;
    cout << "(4) Clear" << endl;
    cout << "(5) Quit" << endl;

    int command = GetMenuCommand();

    return command;
}

int main()
{
    DisplayMenu();
}



