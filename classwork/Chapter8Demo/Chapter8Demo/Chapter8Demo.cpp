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

struct Employee
{
    int Id;
    std::string Name;

    int DummyValues[1000];
};

void DynamicMemoryDemo()
{
    const int MaxEmployees = 100;
    Employee* employees[MaxEmployees] = {0};
    int id = 1000;

    //int numberOfEmployees = 0;
    for (int index = 0; index < MaxEmployees; ++index)
    {
        std::string name;
        std::cout << "Enter name or empty to quit: ";
        std::getline(std::cin, name);

        if (name == "")
            break;

        //Add to array 
        // new-op ::  new T; returns T*
        Employee* employee = new Employee;
        //(*employee).Id = ++id;
        employee->Id = ++id;
        employee->Name = name;
        employees[index] = employee;
        //++numberOfEmployees;

        for (int index = 0; index < MaxEmployees; ++index)
        {
            //If done then abort
            if (employees[index] == nullptr)
                break;

            std::cout << "[" << employees[index]->Id << "] " << employees[index]->Name << std::endl;
        };

        // Ensure that any memory allocated by new is cleaned up using delete
        //  delete-op ::= delete E;
        for (int index = 0; index < MaxEmployees; ++index)
        {
            if (employees[index] == nullptr)
                break;

            //Delete the memory
            Employee* employee = employees[index];
            delete employee;
            employees[index] = nullptr;  //Always reset to null to avoid issues
            delete employees[index];  //This works
            //employee->Id = 20;  //Going to fail 

            //delete &index;  //Bad things will happen
        };
    }
}

//Pointers can be passed as parameters
//Pass by value
void DisplayIntArray(int* arr, int size)
{
    for (int index = 0; index < 100; ++index)
        std::cout << arr[index] << " ";
    std::cout << std::endl;
}
void ArrayPointerDemo()
{
    int values[100];

    //Array variables are pointers
    int* ptrValues = values;
    
    for (int index = 0; index < 100; ++index)
    {
        //Pointer Arithmetic
        // Addition/Subtraction
        // Value is always multiplied by sizeof(T) so you are referencing a whole element
        //arr[index] = arr + index = arr + (sizeof(T) * index)
        //arr[index] = *(arr + index)
        *(ptrValues +index) = index + 1; //memorize this and know how to convert to array
    }
    //for (int index = 0; index < 100; ++index)
    //    values[index] = index + 1;            array vers of *(ptrValues +index) = index + 1;

    DisplayIntArray(values, 100);

    int localVariable = 100;
    DisplayIntArray(&localVariable, 1);
}

void NewArrayDemo()
{
    //double arr[100];

    //Dynamically allocate array at runtime
    int size;
    std::cout << "How many elements: ";
    std::cin >> size;

    //Array declaration won't work at runtime
    // new T[size]
    // Size must be integral and > 0
    // Ensure you delete this when done
    double* arr = new double[size];

    //Arrays and pointers are interchangeable so nothing else changes
    for (int index = 0; index < size; ++index)
    {
        std::cout << "Enter a value: ";
        std::cin >> arr[index];

        if (arr[index] == 0)
            break;
    }

    //cleanup
    //delete arr; // This is wrong by the way
    delete[] arr; // Required for arrays
}

void NewArrayDemo2()
{
    while (true)
    {
        NewArrayDemo();

        std::cout << "Keep going (Y/N)? ";

        char choice;
        std::cin >> choice;

        if (choice == 'N' || choice == 'n')
            break;
    }
}

// Employee is pass by reference, any changes to employee are visible to caller
void InitializeEmployeeByRef(int& employee)
{
    std::cout << "Enter the employee ID: ";
    std::cin >> employee;
}

void InitializeEmployeeByPtr(int* employee)
{
    std::cout << "Enter the employee ID: ";
    std::cin >> *employee;
}

void PassByRefVsPointerDemo()
{
    Employee employee;
    //Pass by ref - must pass a variable
    //InitializeEmployeeByRef(employee);
}

Employee* CreateEmployee()
{
    Employee* ptrEmployee = new Employee();

    return ptrEmployee;
}

int* FindElement(int values[], int size, int desiredValue)
{
    //Return address of matching element, if any
    for (int index = 0; index < size; ++index)
    {
        if (values[index] == desiredValue)
            return &values[index];
    }
    return nullptr;
}

double g_SomeVariable = 9.18175;

double* GetConstant()
{
    return &g_SomeVariable;
}

//Never return 
double* DontDothis()
{
    double someValue = 1.2914;

    return &someValue;
}

void PointerReturnDemo()
{
    //Pointer as a return type
    //New Instance from function (caller is responsible for lifetime)
    // RAII - Resource Acquisition is Initialization
    Employee* pNewEmployee = CreateEmployee();
    delete pNewEmployee;

    //Pointer is to memory that the caller owns
    int values[100] = {0};
    values[50] = 20;
    int* pMatch = FindElement(values, 100, 20);

    //Pointer to global object
    double* pConstant = GetConstant();
}

// message is a reference to a constant string
// const std::string&
int Readint(std::string const& message)
{
    //Constant, cannot modify
    /*message = "Broke";*/
    std::cout << message;

    int value;
    std::cin >> value;

    return value;
}
void ConstantPointersDemo()
{
    std::string message = "Enter a number: ";
    int value = Readint("Enter a number: ");

    // non-const vs const
    int nonConstValue = 10;
    const int constValue = 20;

    // Non-const are readable/writable
    nonConstValue = 20;

    // Const are read only
    // constValue = 30;

    //Pointer can be dereferenced to read/write
    int* pNonConst = &nonConstValue;
    *pNonConst = 40;
    
    // Can add const to something (non-const to const is allowed)
    // Cannot take away const from something (const is non const is not allowed)
    // cannot assign a const int* to an int*
    //pNonConst = &constValue;
    *pNonConst = 50;

    // non-const to const is allowed
    int const* pConst = &constValue;
    pConst = &nonConstValue;

    nonConstValue = (int)45.6; //C style
    nonConstValue = static_cast<int>(45.6); //C++ cast

    // const_cast<T> casts T to either const T or T depending on what it is - dangerous
    pConst = const_cast<int*>(&nonConstValue);
    pNonConst = const_cast<int*>(&constValue);
    *pNonConst = 50;
}

int main()
{
    //StackDemo();
    //EmptyDemo();
   //DynamicMemoryDemo();
    //ArrayPointerDemo();
    //NewArrayDemo2();
    PointerReturnDemo();
}

// 1 byte = 256 bits
// 1 kilobyte = 1024 bytes
// 1 megabyte = 1024 kilobytes
// 1 gigabyte = 1024 megabytes
// 1 terabyte = 1024 gigabytes
// 1 petabyte = 1024 terabytes
// 1 exabyte = 1024 petabytes
