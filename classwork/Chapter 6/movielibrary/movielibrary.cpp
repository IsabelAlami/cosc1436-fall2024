// movielibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Movie: Title, Actors, Run length, Description, Genres, Director(s), Release Year, MPAA Rating
struct Movie
{
    //Required
    string Title;

    // At least 0, minutes
    int RunLength;

    //Optional
    string Description;

    // >= 1900
    int ReleaseYear;

    bool IsClassic;

    string Genre;
};

//Integral data type with named values
enum MenuCommand
{
    //MC_Begin,
    AddMovie,   //const int MenuCommand::MC_AddMovie = 0;
    EditMovie,
    DeleteMovie,
    ViewMovie,
    //MC_End
};

//enum TestEnum
//{
//    MC_AddMovie
//};
//TestEnum testValue = TestEnum::MC_AddMovie; //MC_AddMovie; //TestEnum::MC_AddMovie; 

//function definition - defines a function and what it does
//declaration ::= declares the existence of something and what it is (vvar declarations)
//                Used by the compiler to recognize the use of the indentifier
//                Must be declared before usage              
//definition ::= what it does (var defined) 9for linker)
//function names are verbs representing actions
//  Casing: Pascal casing, camel casing

/// Displays main menu
void DisplayMenu()
{
    cout << "Movie Library" << endl;
    cout << "-----------------" << endl;
    cout << "A)dd Movie" << endl;
    cout << "E)dit Movie" << endl;
    cout << "D)elete Movie" << endl;
    cout << "V)iew Movie" << endl;

}

/// Handles the menu selection
void HandleMenu()
{
    //HACK: Fix this
    MenuCommand menuCommand = (MenuCommand)0;
    switch (menuCommand)
    {
        case MenuCommand::AddMovie:
        case MenuCommand::EditMovie:
        case MenuCommand::DeleteMovie:
        case MenuCommand::ViewMovie: cout << "Not implemented" << endl; break;
    };
}

int main()
{
    //function call ::= id ();
    DisplayMenu();
    //Relational demo
    // rel_op ::= < <= > >= == !=
    // rel_expr ::= E rel_op E (boolean)

    ////int left, right;
    //string left, right;
    //std::cout << "Enter a left and right value: ";
    //std::cin >> left >> right;

    ////Mangle the values
    //// Do not use == equality floating point values to avoid rounding errors
    //// Except when comparing floating point value to an integral (e.g. f == 45)
    //*left = (left * 21) / 21;
    //right = (right * 15) / 15;*/
    //
    ////bool areEqual = left = right == 20;
    ////bool areEqual = left = 20 = right;

    ////String comparison for case insensitive
    //// strcmpi(string, string) => int
    ////    when using C++ strings specify value as `expr`.c_str()
    ////    returns < 0 if left < right
    ////            = 0 if left == right
    ////            > 0 if left > right
    //cout << left << " ciequal " << right << " = " << _strcmpi(left.c_str(), right.c_str()) << endl;
    //cout << left << " == " << right << " = " << (left == right) << endl;
    //cout << left << " < " << right << " = " << (left < right) << endl;
    //cout << left << " <= " << right << " = " << (left <= right) << endl;
    //cout << left << " > " << right << " = " << (left > right) << endl;
    //cout << left << " >= " << right << " = " << (left >= right) << endl;    
    //cout << left << " != " << right << " = " << (left != right) << endl;
    //cout << endl;

    
    /*int iterations = 0;
    for (int i = 0; i < 100; ++i)
    {
        if (i != 0)
        {
            char choice;
            cout << "Do you want to give up?";
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
                break;
        };
        
        for (int j = 0; j < 10; ++j)
        {
            ++iterations;
            cout << i << ", " << j << " = " << iterations << endl;
            
        };

    };
    cout << "Total iterations = " << iterations << endl;*/

    

    MenuCommand menuCommand = (MenuCommand)0;
    //Pretest loop, Statement executes 0 or more times
    //Get Input
    //bool done = false;
    do
    {
        char input;
        cin >> input;

        

        switch (input)
        {
            case 'A':
            case 'a': menuCommand = MenuCommand::AddMovie; break;

            case 'E':
            case 'e': menuCommand = MenuCommand::EditMovie; break;

            case 'D':
            case 'd': menuCommand = MenuCommand::DeleteMovie; break;

            case 'V':
            case 'v': menuCommand = MenuCommand::ViewMovie; break;

            default: cout << "Bad input" << endl; break;
        };
    } while (menuCommand == 0);
    
    cin.ignore();
    
    //// Handle menu command
    HandleMenu();
    /*switch (menuCommand)
    {
        case MenuCommand::AddMovie:
        case MenuCommand::EditMovie:
        case MenuCommand::DeleteMovie:
        case MenuCommand::ViewMovie: cout << "Not implemented" << endl; break;
    };*/


    ////// Add a new movie
    //Create a new movie
    Movie movie;// = {0};

    //Get required title
    do
    {
        cout << "Enter a title: ";
        //cin >> movie.Title;
        getline(cin, movie.Title);

        //x++ prefix incr   x+1
        //++x postfix incr  x+1
        //x-- perfix decr   x-1
        //--x postfix decr  x-1
        //prefix stores and SAVES the original value of x in x(++)(--), must print x again to see changed value
        //postfix stores the changed value of x in x(++)(--)

        //Decision making - IF statement
        // if-stmt ::= if (Eb) S ;

        if (movie.Title == "")
            cout << "ERROR: Title is required" << endl;
    } while (movie.Title == "");
    
    //Get run length, at least 0, minutes
    //movie.RunLength = -1;
    do //while (movie.RunLength < 0 || movie.RunLength > 1440)
    {
        cout << "Enter run length (in minutes): ";
        cin >> movie.RunLength;

        //Nested if
        //if (movie.RunLength <= 0)
        //{
        //    //Look at additional stuff...
        //    
        //    if (movie.RunLength < 0)
        //    {
        //        cout << "ERROR: Run length must be at least 0" << endl;

        //        cout << "Enter run length (in minutes): ";
        //        cin >> movie.RunLength;
        //    };
        //} else if (movie.RunLength > 1440)
        //{
        //    cout << "ERROR: Run length cannot be greater than a day" << endl;

        //    cout << "Enter run length (in minutes): ";
        //    cin >> movie.RunLength;
        //};
        if (movie.RunLength < 0 || movie.RunLength > 1440)
            cout << "ERROR: Run length must be between 0 and 1440" << endl;
    } while (movie.RunLength < 0 || movie.RunLength > 1440);
    cin.ignore();

    //Get release year, at least 1900
    while (movie.ReleaseYear < 1900 || movie.ReleaseYear > 2100)
    {
        cout << "Enter release year (1900+): ";
        cin >> movie.ReleaseYear;

        if (movie.ReleaseYear < 1900 || movie.ReleaseYear > 2100)
            cout << "ERROR: Release year must be between 1900 and 2100" << endl;
    };
    


    //Get the optional description
    cout << "Enter optional description: ";
    cin.ignore();
    getline(cin, movie.Description);

    //Get Is classic
    bool done = false;
    while (!done)
    {
        char isClassic;
        cout << "Is this a classic (Y/N)? ";
        cin >> isClassic;

       /* if (isClassic == 'Y')
            movie.IsClassic = true;
        else if (isClassic == 'y')
            movie.IsClassic = true;
        else if (isClassic == 'N')
            movie.IsClassic = false;
        else if (isClassic == 'n')
            movie.IsClassic = false;
        else*/


        //if (isClassic == 'Y' || isClassic == 'y')
        //    movie.IsClassic = true;
        //else if (isClassic == 'N' || isClassic == 'n')
        //    movie.IsClassic = false;
        //
        //else
        //{
        //    cout << "ERROR: You must enter Y or N";

        //    cout << "Is this a classic (Y/N)? ";
        //    cin >> isClassic;
        //};

        //Switch (select) statement - replacement for if-elseif where same expression compared to multiple values
        // 1. Must compare a single expression to one or more constant values with equality
        // 2. Switch expression must be an integral type
        // 3. Each case label must be a compile-time constant expression
        // 4. Each case label must be unique
        switch (isClassic)
        {
            case 'Y':
            case 'y': movie.IsClassic = true; done = true; break;

            case 'N':
            case 'n': movie.IsClassic = false; done = true; break;

            default:
            {
                cout << "ERROR: You must enter Y or N";

            };
        };
    };

    cin.ignore();

    //Get genre(s)
    //int genreCount = 0;
    //while (genreCount < 5)
    //{
    //    cout << "Enter optional genre :" << (genreCount + 1) << ": ";
    //    
    //    string genre;
    //    getline(cin, genre);
    //    if (genre != "")
    //    {
    //        movie.Genre += genre + ", ";
    //    };

    //for loop - designed to iterate a fixed number of times with a well known start and end
    //for (int.exp; test.exp; update.exp)
    //S;
    //int.exp evaluated before the expression
    //test.exp is the condition, as long as true will loop
    //update.exp 
    //int genreIndex = 0;
    for (int index = 0; index < 5; index++)
    {
        cout << "Enter optional genre " << (index + 1) << ": ";
        
        string genre;
        getline(cin, genre);
        if (genre == "")
            break; //Exits the loop
        //continue; //only valid in loops - stops the current iteration and loops again
            
        movie.Genre += genre + ", ";
    };
//cout << genreIndex

    //More Complex for loops
    //for (int index = 0, int y = 1; index < 5 , index < y; ++index, y+=2){};
    //int someIndex = 0;
    //for (;;) {}; //infinite loop

        ///// Display movie details
        cout << "---------------" << endl;
        cout << movie.Title << " (" << movie.ReleaseYear << ")" << endl;
        cout << "Run Length (mins) " << movie.RunLength << endl;

    //Long form - 1
    //if (movie.IsClassic? "yes" << endl;
    //      cout << "Is Classic? Yes" << endl;
    //else
    //      cout<< "Is Classic? No" << endl;
    //Better but longer form - 2
    //string classicIndicator;
    //if (movie.IsClassic)
    //    classicIndicator = "Yes";
    //else
    //    classicIndicator = "No";
    //cout << "Is Classic? " << classicIndicator << endl;

    //Shorter form using conditional perator => Eb? Et :Ef
    //string classicIndicator = movie.IsClassic? "Yes" : "No";
    //cout << "Is Classic? " << classicIndicator << endl;

    //Shortest form using conditional operator => Eb? Et: Ef
    // Et & Ef = must be the exact same type, type coercion is not allowed
    cout << "Is Classic? " << (movie.IsClassic ? "Yes" : "No") << endl;
    if (movie.Genre != "")
        cout << "Genre(s) " << movie.Genre << endl;
    if (movie.Description != "")
        cout << movie.Description << endl;
    cout << "___________________" << endl;

}

