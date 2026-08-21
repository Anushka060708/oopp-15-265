#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    cout << endl;

    Student s2(101, "Anushka");
    s2.display();

    cout << endl;

    Student s3 = s2;
    s3.display();

    return 0;
}