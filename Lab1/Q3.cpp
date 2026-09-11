#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void input()
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Point p1, p2;

    cout << "Point 1:\n";
    p1.input();
    p1.show();

    cout << "\nPoint 2:\n";
    p2.input();
    p2.show();

    return 0;
}