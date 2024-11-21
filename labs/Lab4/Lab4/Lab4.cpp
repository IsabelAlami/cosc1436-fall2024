// Lab 2
// Isabel Alamillo 2401402
// COSC 1436 Fall Semester 2024

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

/// @brief Displays Program Information
void Display()
{
    cout << "Lab 4: Falling Distance" << endl;
    cout << "Isabel Alamillo" << endl;
    cout << "COSC 1436 Fall Semester 2024" << endl;
}

/// @brief Reads an integer
/// @param message Accepts a message to be printed for the user
/// @return returns the requested integer
int ReadInt(string message)
{
    cout << message;
    int value;
    cin >> value;

    return value;
}

/// @brief Creates an array that accepts Integers
/// @param max the maximum value of the array (can be modified)
/// @return returns an array pointer
int* IntegralValuesArray(int& max)
{
    int* values = new int[max];

    int count = 0;

    for (int index = 0; index < max; ++index)
    {
        cout << "Enter an integral number: ";
        cin >> values[index];

        if (values[index] == 0)
        {
            break;
        }

        if (values[index] <= 0)
        {
            cout << "Error: Invalid input";
            break;
        }
        ++count;
    }

    return values;
}

/// @brief Requests the enter of a command
/// @return returns the value of the command
int GetMenuCommand()
{
    int value;
    while (true)
    {
        cout << "Enter a Command: ";
        cin >> value;

        if (value == 1 || value == 2 || value == 3 || value == 4 || value == 5 || value == 6)
            return value;
        else
            cout << "ERROR: Please enter a valid command Input" << endl;
    }
    return value;
}

/// @brief Finds the largest value in an array
/// @param array Accepts an array pointer
/// @param size Size of the array
/// @return Returns the largest value in the array
int LargestValueOfArray(int* array, int size)
{
    int value = array[0];

    for (int index = 1; index < size; index++)
    {
        if (array[index] > value)
        {
            value = array[index];
        }
    }
    
    return value;
}

/// @brief Finds the smallest value in an array
/// @param array Accepts an array pointer
/// @param size Size of the array
/// @return Returns the smallest value in an array
int SmallestValueOfArray(int* array, int size)
{
    int value = array[0];
    
    for (int index = 1; index < size; index++)
    {
        if (array[index] < value)
            value = array[index];
    }
    
    return value;
}

/// @brief Finds the sum of all the values in an Array
/// @param array Accepts an array pointer
/// @param size Size of the array
/// @return Returns the sum of all of the elements in the array
int SumOfArrayValues(int* array, int size)
{
    int sum = 0;

    for (int index = 1; index < size; index++)
    {
        sum += array[index];
    }
    return sum;
}

/// @brief Finds the mean of all of the values in an array
/// @param array Accepts an array pointer
/// @param size Size of the array
/// @return Returns the mean of all of the elements in the array
double MeanOfArrayValues(int* array, int size)
{
    int average = 0;

    for (int index = 1; index < size; index++)
    {
        average += array[index];
        average = average / size;
    }
    return average;
}

/// @brief Dispays the elements in an array
/// @param array Accepts an array pointer
/// @param size Size of the array
void DisplayArray(int* array, int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << ",  ";
    }
    cout << endl;
}

/// @brief Displays a menu for the user
/// @return Returns an integer value
int DisplayMenu()
{
    cout << "Main Menu"<< endl;
    cout << endl;
    cout << "(1) Quit Program" << endl;
    cout << "(2) Get the Largest Entered Number" << endl;
    cout << "(3) Get the Smallest Entered Number" << endl;
    cout << "(4) Get the Sum of the Entered Numbers" << endl;
    cout << "(5) Get the Mean of the Entered Numbers" << endl;
    cout << "(6) Display the Values of the Entered Numbers" << endl;
    cout << "(7) Add more Numbers" << endl;

    int command = GetMenuCommand();
    
    return command;
}

int main()
{
    Display();
    int sizeLimitOfArray = 100; 
    int* array = IntegralValuesArray(sizeLimitOfArray);
    int largest = LargestValueOfArray(array, sizeLimitOfArray);
    int smallest = SmallestValueOfArray(array, sizeLimitOfArray);
    int sum = SumOfArrayValues(array, sizeLimitOfArray);
    int mean = MeanOfArrayValues(array, sizeLimitOfArray);
    int command = DisplayMenu();

    if (command == 2)
    {
        cout << "The largest entered value is: " << largest << endl;
    }
    else if (command == 3)
    {
        cout << "The smallest entered value is: " << smallest << endl;
    }
    else if (command == 4)
    {
        cout << "The sum of the entered values is: " << sum << endl;
    }
    else if (command == 5)
    {
        cout << "The mean of the entered values is: " << mean << endl;
    }
    else if (command == 6)
    {
        DisplayArray(array, sizeLimitOfArray);
    }
    delete[] array;
}
