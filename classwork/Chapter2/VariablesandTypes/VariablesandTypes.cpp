#include <iostream>

int main()
{
    //std::endl; = new line
    //std::cout = output msg
    
    std::cout << "Hello World" << std::endl;
    
    std::cout << "Hello" << " " << "World" << std::endl;

    std::cout << "Hello";
    std::cout << " ";
    std::cout << "World";
    std::cout << std::endl;
    
    std::cout << "Hello World\n";

    std::cout << "Hello \" Bob \"";

    std::cout << "C:\\windows\\temp";
    

    //S:: = single statement - does something, ends with a semicolon
    //E:: = expression statement - calculates a value
    //S|E:: = S or E - 
    //S+:: = Zero or more S
    //E+:: = One or more E
    //T:: = type
    //[S]:: = optional
    //E; -> S
    //String literals "text" escape sequence :: = \ 
    // \n = new lines
    // \t = tab
    // \" = double quote
    // \\ = \
    //Variables - named memory location  to store data
    //Delcaration - tell compiler a variable exists
    //var dec = T(type) id(identification);
    //Scope - lifetime of a variable/identifier: Point of declaration to end of block

    int length;
    length = 0;

    int releaseYear = 1900;

    int rating, stars; //two diff variables declared at the same time
    int rating = 3, stars = 5; //must all be the same type if declared at the same time


    std::cout << length;


}

