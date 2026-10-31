# Assignment 9 – std::move in Utility

## Aim
To write a C++ program to demonstrate the use of `std::move` from the utility library and understand move semantics, move constructors, and the difference between copy and move operations.

## Problem Statement
Write a C++ program to demonstrate the use of `std::move` from the utility library. Implement move semantics to transfer resources from one object to another using move constructors and understand the difference between copy and move operations.

## Objectives
1. To understand the concept of `std::move` in C++.
2. To understand the purpose of the utility library.
3. To implement move constructors using `std::move`.
4. To understand the difference between copy semantics and move semantics.
5. To learn how resources can be transferred efficiently between objects.

## Theory
`std::move` is a utility function available in the `<utility>` header file in C++. It converts an object into an rvalue reference, allowing its resources to be transferred instead of copied.

### Move Semantics
Move semantics is a C++11 feature that allows resources to be transferred from one object to another without unnecessary copying.

### Move Constructor
A move constructor transfers resources from an existing object to a newly created object using an rvalue reference.

**Syntax:**
```cpp
ClassName(ClassName&& obj);
```

## Header Files Used
- `<iostream>` – For input and output operations.
- `<string>` – For using string data types.
- `<utility>` – For using `std::move`.

## Algorithm
1. Include the required header files.
2. Define a class named `Student`.
3. Declare name and roll number as data members.
4. Define a parameterized constructor.
5. Define a copy constructor.
6. Define a move constructor using an rvalue reference.
7. Use `std::move` to transfer resources.
8. Define a display function.
9. Create an original Student object.
10. Create another object using the copy constructor.
11. Create a third object using the move constructor.
12. Display all object details.
13. Observe the difference between copy and move operations.
14. Stop the program.

## C++ Program

```cpp
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Student {
    string name;
    int rollNo;

public:
    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student& obj) {
        name = obj.name;
        rollNo = obj.rollNo;
        cout << "Copy Constructor Called" << endl;
    }

    // Move Constructor
    Student(Student&& obj) noexcept {
        name = std::move(obj.name);
        rollNo = obj.rollNo;
        obj.rollNo = 0;
        cout << "Move Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s1("Piyush Nagarkar", 39);

    cout << "\nOriginal Student Details:" << endl;
    s1.display();

    // Copying object
    Student s2(s1);

    cout << "\nCopied Student Details:" << endl;
    s2.display();

    // Moving object using std::move
    Student s3(std::move(s1));

    cout << "\nMoved Student Details:" << endl;
    s3.display();

    cout << "\nOriginal Object After Move:" << endl;
    s1.display();

    return 0;
}
```

## Sample Output

```text
Parameterized Constructor Called

Original Student Details:
Name: Piyush Nagarkar
Roll No: 39
-------------------
Copy Constructor Called

Copied Student Details:
Name: Piyush Nagarkar
Roll No: 39
-------------------
Move Constructor Called

Moved Student Details:
Name: Piyush Nagarkar
Roll No: 39
-------------------

Original Object After Move:
Name:
Roll No: 0
-------------------
```

**Note:** The moved-from string is valid, but its exact value is unspecified by C++.

## Test Cases

| Test Case | Input | Expected Result | Status |
|---|---|---|---|
| Parameterized Constructor | Student details | Object initialized | Pass |
| Copy Constructor | Existing object | Data copied successfully | Pass |
| Move Constructor | `std::move(s1)` | Resources transferred | Pass |
| Display Function | Student object | Details displayed | Pass |

## Result
The program was successfully implemented using `std::move` from the utility library. The copy constructor copied the object data, while the move constructor transferred the string resource from one object to another.

## Conclusion
This program demonstrates the use of `std::move`, copy constructors, and move constructors in C++. It helps understand move semantics and how resource transfer reduces unnecessary copying and improves program efficiency.

## Concepts Covered
- C++ Classes and Objects
- Copy Constructor
- Move Constructor
- Rvalue References
- `std::move`
- Utility Library
- Move Semantics

## Author
**Piyush Nagarkar**  
PRN: 202501110049  
Division: A  
Batch: A-2  
Roll No.: 39
