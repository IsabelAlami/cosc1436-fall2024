#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void WriteFileDemo()
{
        //stream is a series of bytes
    //                                             =<^._.^>=
    std::fstream outfile;

    //open a file for reading and/or writing
    // "C:\\temp\\log.txt"
    // "/usr/temp/log"
    outfile.open("log.txt", std::ios_base::out | std::ios_base::app); //Opening a file for writing, append

    std::string line;
    std::cout << "Enter the file contents: ";

    while (true)
    {
        getline(std::cin, line);

        if (line == "Q" || line == "q")
            break;

        //Write to file
        outfile << line << std::endl;

        //Flags
        // trunc => truncate
        // app => append
        // ate => append by default 
    };

}

void ReadFileDemo()
{
    std::fstream inFile;

    inFile.open("log.txt",std::ios_base::in);

    //While not EOF
    while (!inFile.eof())
    {
        std::string line;
        getline(inFile, line);

        std::cout << line << std::endl;
    }
}

void Display(std::fstream output, std::string const& message)
{
    output << message;

    std::cout << message;
}

void LogOutputDemo()
{
    std::fstream logFile;

    logFile.open("output.txt", std::ios_base::out | std::ios_base::app);

    Display(logFile, "Enter your name: \n");
    //std::cout << "Enter your name: ";

    std::string name;
    getline(std::cin, name);

    //std::cout << "Hello " << name << std::endl;
    std::stringstream msg;
    msg << "Hello " << name << std::endl;
    Display(logFile, msg.str());
    
    /*Display(logFile, "Hello ");
    Display(logFile, name);
    Display(logFile, "\n");*/
}
int main()
{
    //ReadFileDemo();
}
