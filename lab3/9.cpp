#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    void input();
    void show();
};

void Demo::input()
{
    cout << "Enter two values: ";
    if (!(cin >> a >> b))
    {
        a = 0;
        b = 0;
        cin.clear();
    }
}

void Demo::show()
{
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main()
{
    Demo obj;

    obj.input();
    obj.show();

    return 0;
}