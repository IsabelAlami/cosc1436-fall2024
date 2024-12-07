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

/// @brief Creation of Linked List
struct LinkedList
{
    Node* Head = nullptr;
};

void InitializeList(LinkedList& List)
{
    List.Head = nullptr;
}

void AddNodeToList(LinkedList& List)
{
    int value;
    cout << "Add a new Value: ";
    cin >> value;

    Node* newValue = new Node;
    newValue->Value = value;
    newValue->Next = nullptr;

    if (!List.Head)
    {
        List.Head = newValue;
    } else
    {
        Node* placeholder = List.Head;
        while (placeholder->Next)
        {
            placeholder = placeholder->Next;
        }
        placeholder->Next = newValue;
    }
}

void DeleteNodeFromList(LinkedList& List)
{
    int number;
    cout << "Delete a Value: ";
    cin >> number;

    Node* previous = nullptr;
    Node* current = List.Head;

    while (current && current->Value != number)
    {
            previous = current;
            current = current->Next;
    };

    if (current)
    {
        if (previous)
        {
            previous->Next = current->Next; 
        } 
        else
        {
            List.Head = current->Next;
        }
        delete current;
    }
    else
    {
        cout << "ERROR: Value not found in list" << endl;
    }
}

void ClearList(LinkedList& List)
{  
    cout << "Clear your List?";
    char response;
    cout << "Are you sure you want to delete everything? Select the Character 'Y' or 'y' for Confirmation: " << endl;
    cin >> response;

    if (response == 'y' || response == 'Y')
    {
        Node* current = List.Head;

        while (current != nullptr)
        {
            Node* next = current->Next;

            current = next;
        };
        List.Head = nullptr;
    }
}

void PrintList(const LinkedList& List)
{
    cout << "Printed List Values: " << endl;
    Node* current = List.Head;
    while (current)
    {
        cout << current->Value << " " << endl;
        current = current->Next;
    }
}

/// @brief Requests an integer value
/// @return Integer value entered
int GetMenuCommand()
{
    int value;
    while (true)
    {
        cout << "Enter a Command: ";
        cin >> value;

        if (value == 1 || value == 2 || value == 3 || value == 4 || value == 5)
            return value;
        else
            cout << "ERROR: Please enter a valid command Input" << endl;
    }
    return value;
}

/// @brief Displays Student and Lab Information
void Display()
{
    cout << "Lab 5: Linked List" << endl;
    cout << "Isabel Alamillo" << endl;
    cout << "COSC 1436 Fall Semester 2024" << endl;
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

    int value = GetMenuCommand();
    
    return value;
}

int main()
{
    LinkedList List;
    InitializeList(List);
    Display();
    while (true)
    {
        int command = DisplayMenu();

        if (command == 1)
        {
            PrintList(List);
        }
        else if (command == 2)
        {
            AddNodeToList(List);
        }
        else if (command == 3)
        {
            DeleteNodeFromList(List);
        }
        else if (command == 4)
        {
            ClearList(List);
        }
        else if (command == 5)
        {
            break;
        }
    }
}



