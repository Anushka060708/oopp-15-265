#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    inline void input();
    inline void show();
};

inline void Demo::input()
{
    cout << "Enter two values: ";
    cin >> a >> b;
}

inline void Demo::show()
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