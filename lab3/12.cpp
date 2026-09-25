#include <iostream>
using namespace std;

const double PI = 3.14159;

double area(double radius)
{
    return PI * radius * radius;
}

double area(double length, double width)
{
    return length * width;
}

int area(int side)
{
    return side * side;
}

double area(double base, double height, bool triangle)
{
    return 0.5 * base * height;
}

int main()
{
    double radius = 5;
    double length = 10, width = 5;
    int side = 4;
    double base = 8, height = 6;

    cout << "Area of Circle = " << area(radius) << endl;
    cout << "Area of Rectangle = " << area(length, width) << endl;
    cout << "Area of Square = " << area(side) << endl;
    cout << "Area of Triangle = " << area(base, height, true) << endl;

    return 0;
}