#include <iostream>

int Factorial( int number)
{
    int result = 1;

    for (int index = 0; index < number; ++index)
        result *= (index + 1);

    return result;
}

int Factorial2(int number)
{
    if (number <= 1)
        return 1;

    return number * Factorial2(number - 1);
}

void DisplayTruthTable()
{
    std::cout << " A " << " B " << " && " << " || " << std::endl;

    //Conditional ::= Eb ? Et : Ef
    // 
    //False, False
    std::cout << false << false << (false && false ? "true" : "false") << (false || false ? "true" : "false") << std::endl;
    //False, True
    std::cout << false << true << (false && true ? "true" : "false") << (false || true ? "true" : "false") << std::endl;
    //True, False
    std::cout << true << false << (true && false ? "true" : "false") << (true || false ? "true" : "false") << std::endl;
    //True, True
    std::cout << true << true << (true && true ? "true" : "false") << (true || true ? "true" : "false") << std::endl;
}

void PrefixPostfixDemo()
{
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;

    //prefix inc := ++x => x = x + 1; x
    //prefix dec := --x => x = x -1; x
    //postfix inc := x++ => t = x = x + 1; t
    //postfix dec := x-- => t = x = x - 1; t
    std::cout << value++ << " ";
    std::cout << ++value << " ";
    std::cout << value-- << " ";
    std::cout << --value << " " << std::endl;
}

bool isDigit(char value)
{
    switch (value)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': return true;
    };

    return false;
}

bool isLetter(char value)
{
    if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
        return true;
    
    return false;
};

std::string GetCharacterClass(char value)
{
    //Identify the char
    // a..z = letter
    // 0 .. 0 = digit
    // * = symbol
    if (isDigit(value))
        return "Digit";
    else if (isLetter(value))
        return "Letter";
    else
        return "Symbol";
}

void SwitchDemo()
{
    do
    {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;

        std::cout << GetCharacterClass(input) << std::endl;

    } while (true);
}


int main()
{
    Factorial(10);

    //DisplayTruthTable();

    //PrefixPostfixDemo();

    //SwitchDemo();
}