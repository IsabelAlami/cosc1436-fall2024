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

    //id rules ::; starts with letter or underscore then consists of letters, digits, underscores, may NOT be a keyword

    // Types define what kind of data is stored, range, and size
    //| Type | Size | Range |
    //-----------------------
    //|short| 2 | +- 32767 (intengral) | short s;
    //|int| 4 | +- 2 billion (default) | int i = 0;
    //|long| 4 | +- 2 billion | long l = 5L;
    //|unsigned *| * | 0- | unsigned int ui = 3U /3UL (for long);

    //Floats
    //| float | 3 | E+- 38 | precision 5 - 7 |
    //| double | 8 | E+- 308 | (default) | precision: 12 - 15 | double pi = 3.14159 , double largeNumber = 10E100;
    
    //Text
    //| char | 1 | -128 to 127 | character | char c = 'A';
    //| std::string | * | text | std::string name = "Bob";
    //| bool | 1? | true or false | bool isPassing = true;
    // int intSize = sizeof(int); 

    //Assignment
    // asp_op ::= V = E
    // MUST be type compatible
    // Expression of type Vt
    // Associativity - Right
    int shapeLength = 10;
    int shapeWidth = 20;
    int shapeArea;

    shapeArea = shapeLength;

    shapeArea = shapeLength = shapeWidth = 20;
    //r value = any expression on right side of the asn (assign)
    //l value = any expression on left side of the asn (assign) (variable)
    //E ::= (id or asn)

    //Arithmetic operators
    // + - * / % (int mod)
    shapeArea = shapeLength * shapeWidth;
    int remainer = 10 % 3; // 1
    int result = 10 / 3; // 3
    double dresult = 10.0 / 3.0; //3.333

    //signed unary_op ::= + Et | - Et
    int positiveValue = 10;
    int negativeValue = -positiveValue;

    //Scope
    // block-statement ::= { S* } - narrow down lifetime of variable :P
    {
        int newVariable = 10;
    }

    

}

