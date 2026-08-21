#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x) {
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main() {
    int a = 10, b = 10, c = 10;

    cout << "Original a: " << a << endl;
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\nOriginal b: " << b << endl;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\nOriginal c: " << c << endl;
    callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}