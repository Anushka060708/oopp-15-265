#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = 20;
}

void callByReference(int &x)
{
    x = 30;
}

void callByAddress(int *x)
{
    *x = 40;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}