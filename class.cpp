#include<iostream>

using namespace std;

class Point
{
    int x, y;
public:
    // Point() : x(0), y(0)
    {
        cout << "Default constructor" << endl;
    }
    Point(int p=0, int q=0) : x(p), y(q) 
    {
        cout << "Parameterized constructor" << endl;
    }
    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
    Point add(Point q)
    {
        Point r;
        // r.x = x + q.x;
        // r.y = y + q.y;
        // return r;   
    }
};
int main(){
    Point p(5,10),q(20,50);
    p.show();
    q.show();
    // Point r=p.add(q);
     r.show();
return 0;
}