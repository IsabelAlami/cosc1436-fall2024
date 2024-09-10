// Chapter3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //Getting Input
    std::string name;
    std::cout << "Enter your name: ";

  // std::cin >> V
  // Inserts value up to first whitespace into variable
  // Doesn't work with spaced strings
  //std::cin >> name;
  std::getline(std::cin, name);

  std::cout << "Hello " << name << std::endl;

  //int hours;
  std::cout << "How many hours did you work this week? ";
  std::cin >> hours;
    
   double payRate;
  std::cout << "How much do you earn an hour? ";
  std::cin >> payRate;
    
  std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

    // Multi Value input, values are whistspace separated
  int x, y;
  std::cout << "Enter the X, Y values of a point: ";
  std::cin >> x >> y;

  //Type coercion - compiler changes type of expression
  //No impact on runtime code generation
  //Always Safe
  //Only impacts current expression
  //Type heirarchy: larger of the two operand types
  // double
  // float
  // unsigned long
  // long
  // unsigned int
  // int
  // char/ short/ unsigned short (automatic to int)

  // double = int * double
  // double = double * double (type coercion)
  // double = double 
  double result = hours * payRate;

  //Precedence rules don't apply, just find the largest type
  //double + float * int => double

  //Assignment doesn't matter, types determined on each side of operator
  // double = int * float

  //Overflow and Underflow
  short smallValue = 32767 + 1; //Overflow
  std::cout << smallValue << std::endl;

  short largeValue = -32768 - 1; //Underflow
  std::cout << largeValue << std::endl;

  float floatValue = 1e38 * 2e20; //Overflow
  std::cout << floatValue << std::endl;



  




}


