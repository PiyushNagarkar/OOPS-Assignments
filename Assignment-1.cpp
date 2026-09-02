#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks1, marks2, marks3;

public:

    // Constructor
    Student(string n, int r, float m1, float m2, float m3)
    {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        cout << "Constructor called." << endl;
    }

    // User-defined function to calculate total marks
    float calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    // User-defined function to calculate percentage
    float calculatePercentage()
    {
        return calculateTotal() / 3;
    }

    // User-defined function to display student details
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No.   : " << rollNo << endl;
        cout << "Marks 1    : " << marks1 << endl;
        cout << "Marks 2    : " << marks2 << endl;
        cout << "Marks 3    : " << marks3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Percentage : " << calculatePercentage() << "%" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor called. Object destroyed." << endl;
    }
};

int main()
{
    Student s1("Piyush", 101, 85, 90, 88);

    s1.display();

    return 0;
}