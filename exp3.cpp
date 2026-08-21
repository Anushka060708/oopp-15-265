#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

// Function with default argument
int addition(int a, int b = 10) {
    return a + b;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;

    cout << "Addition of 20 and default 10: "
         << addition(20) << endl;

    cout << "Addition of 20 and 30: "
         << addition(20, 30) << endl;

    cout << "Integer Multiplication: "
         << multiply(5, 4) << endl;

    cout << "Double Multiplication: "
         << multiply(2.5, 4.0) << endl;

    return 0;
}