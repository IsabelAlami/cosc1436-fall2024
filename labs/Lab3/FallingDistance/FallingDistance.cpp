// Lab 3
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
    cout << "Lab 3: Falling Distance" << endl;
    cout << "Isabel Alamillo" << endl;
    cout << "COSC 1436 Fall Semester 2024" << endl;
}

/// @brief Reads an integer from the console
/// @param message Message to display
/// @return Integral value from user
int ReadInt(std::string message)
{
    std::cout << message;
    int value;
    std::cin >> value;

    return value;
}

/// @brief Reads in a character
/// @return Returns character if it is valid input
char GetUnit()
{
    char value;
    while (true) 
    {
        cout << "Enter which unit of measurement you would like to view your results in, either 'f' for feet or 'm' for meters: ";
        cin >> value;

        if (value == 'f' || value == 'm')
            return value;
        else
            cout << "Please enter a valid unit of measurement ('f' or 'm'): ";
    }
}

/// @brief Reads an integer from the console
/// @param message Message displayed
/// @param minValue Integral minimum value from user
/// @param maxValue Integral maximum value from user
/// @return Integral Value from user
int ReadInt(string message, int minValue, int maxValue)
{
    int value;
    do
    {
        value = ReadInt(message);

        if (value < minValue || value > maxValue)
            cout << "Value must be between " << minValue << " and " << maxValue << endl;
    } while (value < minValue || value > maxValue);

    return value;
}

/// @brief Reads a double value from user
/// @param value Double value from user
/// @return Falling distance of the value from user
double FallingDistance(double value)
{
    value = 0.5 * 9.8 * pow(value, 2);
    
    return value;
}

/// @brief Corrects the value read in to the unit read in
/// @param unit Unit of measurement
/// @param value Value being corrected
/// @return Value accurate to unit
double UnitCorrectMeasurement(char unit, double value)
{
    if (unit == 'm')
        return value;
    else if (unit == 'f')
        return value * 3.28084;

    return value;
}

/// @brief Displays a table showing the distance fallen for each second
/// @param value Time falling in seconds
/// @param minValue Minimum Value being count down towards
void Display(int value, int minValue, char unit)
{
    cout << "Falling Distance Each Second " << endl;
    cout << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    cout << fixed << setprecision(2);

    for (int index = value; index >= minValue; index--)
    {
        double distance = FallingDistance(index);
        double correctedDistance = UnitCorrectMeasurement(unit, distance);
        cout << "Seconds Falling: " << index << " Distance: " << correctedDistance << " " << unit << endl;
    }
}


int main()
{
    Display();
    int time = ReadInt("Enter a falling time: ", 1, 60);
    double doubleTime = static_cast<double>(time);
    char unitOfMeasurement = GetUnit();
    Display(doubleTime, 1, unitOfMeasurement);
}
