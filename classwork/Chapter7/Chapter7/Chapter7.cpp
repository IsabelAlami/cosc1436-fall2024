#include <iostream>
#include <string>
#include <iomanip>


struct Point
{
    int x;
    int y;
};

struct Rectangle
{
    Point topleft;
    Point bottomRight;
};

void Display(Point point)
{
    std::cout << "(" << point.x << "," << point.y << ")";
}

void Display(Rectangle rect)
{
    //std::cout << "(" << rect.topleft.x << "," << rect.topleft.y << ")";
    std::cout << "(";
    Display(rect.topleft);
    std::cout << " ";
    Display(rect.bottomRight);
    std::cout << ")" << std::endl;
};

void Translate(Rectangle& rect, int offsetX, int offsetY)
{
    rect.topleft.x += offsetX;
    rect.bottomRight.x += offsetX;
    
    rect.topleft.y += offsetY;
    rect.bottomRight.y += offsetY;
};

void TestPassByReference()
{
    Rectangle rc;
    rc.topleft.x = 10;
    rc.topleft.y = 20;

    rc.bottomRight.x = 100;
    rc.bottomRight.y = 75;
    Display(rc);

    Translate(rc, 5, 10);
    Display(rc);
}

int main()
{
    const int MaxStudents = 100; //Solve maintenance issue of array size
    std::string students[MaxStudents];

    //Store roster of students
    //When using for loop use =0 to <  N
    for (int index = 0; index < MaxStudents; ++index)
    {
        std::string student;
        std::cout << "Enter student name: ";
        getline(std::cin, student);
        if (student == "")
            break;

        //student at index 0, first element
        // Students sub 0
        //Array access operator
        students[index] = student;
    };

    //Print roster
    /*std::cout << student << endl;*/
    for (int index = 0; index < MaxStudents; ++index)
    {
        if (students[index] != "")
            std::cout << students[index] << std::endl;
    };

}