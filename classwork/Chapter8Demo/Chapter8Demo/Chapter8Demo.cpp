#include <iostream>
# include <iomanip>
#include <string>

void StackDemo()
{
    double localDouble = 45.6;
        // declare a pointer to a double
        // pointer is always a memory address
        // pointer is always either 4 or 8 bytes long
        // pointer value is always an integral value

        // Pointers have 2 data points: integral value (memory address), value they reference (in memory)
        // address-of :: & variable
        // Type of expression is T* where T is the type of the variable 
    double* ptrDouble = &localDouble; //pointer to double

        // Assign new value to value at memory address
    *ptrDouble = 89.7;

        // Type coercion doesn't behave the same with pointers
    int localInt = 56;
    localDouble = localInt;
        //ptrDouble = &localInt; not allowed

        // double* != double
        // ptrDouble = 90.6
 
        // Dereferencing a pointer
        // dereference-op :: *expr
        // Type of expression is T where E is T*
    std::cout << ptrDouble << " " << *ptrDouble << std::endl;
    std::cout << (*ptrDouble == localDouble) << std::endl;
}

void EmptyDemo()
{
    float payRate = 12.50;

    // Always init to 0 or valid memory
    // float* pPayRate = NULL;  // C, old school not recommended
    float* pPayRate = nullptr; // C++, recommended

    // Print Value and dereferenced value
    std::cout << pPayRate << " = ";

    // Always verify pointer before dereferencing
    //  if (ptr != nullptr)
    //  if (ptr != NULL) // not recommended
    //  if (ptr)
    // if (pPayRate != nullptr)
    if (pPayRate)
        std::cout << *pPayRate;
    std::cout << std::endl;
}

int main()
{
    //StackDemo();
    EmptyDemo();
}

// 1 byte = 256 bits
// 1 kilobyte = 1024 bytes
// 1 megabyte = 1024 kilobytes
// 1 gigabyte = 1024 megabytes
// 1 terabyte = 1024 gigabytes
// 1 petabyte = 1024 terabytes
// 1 exabyte = 1024 petabytes
