# Assignment 7: Polymorphism in C++

## 1. Aim
To implement and understand polymorphism in C++ using compile-time polymorphism and run-time polymorphism.

## 2. Problem Statement
Write a C++ program to demonstrate different types of polymorphism. Implement function overloading to demonstrate compile-time polymorphism and function overriding using virtual functions to demonstrate run-time polymorphism.

## 3. Objectives
- To understand the concept of polymorphism in C++.
- To implement compile-time polymorphism using function overloading.
- To implement run-time polymorphism using virtual functions and function overriding.
- To understand how polymorphism improves code reusability and flexibility.

## 4. Theory

**Polymorphism** is an important feature of Object-Oriented Programming (OOP) that allows the same function name or interface to exhibit different behaviours depending on the arguments or the object involved.

### Types of Polymorphism

**1. Compile-Time Polymorphism**

Compile-time polymorphism is resolved by the compiler during compilation. It can be implemented using function overloading and operator overloading.

In this program, function overloading is demonstrated using two `add()` functions that accept different numbers of arguments.

**2. Run-Time Polymorphism**

Run-time polymorphism is resolved during program execution. It is implemented using inheritance, virtual functions, and function overriding.

In this program, a base class `Shape` contains a virtual function `area()`. The derived classes `Rectangle` and `Circle` override this function to calculate their respective areas.

## 5. Algorithm

1. Start the program.
2. Create a `Calculator` class with overloaded `add()` functions.
3. Call the two-argument and three-argument versions of `add()`.
4. Create a base class `Shape` with a virtual function `area()`.
5. Create derived classes `Rectangle` and `Circle`.
6. Override the `area()` function in both derived classes.
7. Use a base-class pointer to call the overridden functions.
8. Display the results.
9. Stop the program.

## 6. Source Code

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: "
             << 3.14f * radius * radius << endl;
    }
};

int main() {
    Calculator calc;

    cout << "--- Compile-Time Polymorphism ---" << endl;
    cout << "Sum of two numbers: "
         << calc.add(10, 20) << endl;
    cout << "Sum of three numbers: "
         << calc.add(10, 20, 30) << endl;

    cout << "\n--- Run-Time Polymorphism ---" << endl;

    Rectangle rect(10, 5);
    Circle cir(7);

    Shape* ptr;

    ptr = &rect;
    ptr->area();

    ptr = &cir;
    ptr->area();

    return 0;
}
```

## 7. Sample Output

```text
--- Compile-Time Polymorphism ---
Sum of two numbers: 30
Sum of three numbers: 60

--- Run-Time Polymorphism ---
Area of Rectangle: 50
Area of Circle: 153.86
```

## 8. Concepts Used
- Classes and objects
- Function overloading
- Inheritance
- Virtual functions
- Function overriding
- Base-class pointers
- Compile-time and run-time polymorphism

## 9. Applications
- Reusing common interfaces for different objects.
- Implementing flexible software components.
- Developing graphics applications with different shapes.
- Supporting extensible and maintainable object-oriented programs.

## 10. Conclusion
Thus, the C++ program successfully demonstrates compile-time polymorphism through function overloading and run-time polymorphism through virtual functions and function overriding. Polymorphism provides flexibility, code reusability, and improved maintainability in object-oriented programming.

## 11. Repository
**Repository Name:** OOPS-Assignments

**GitHub URL:** https://github.com/PiyushNagarkar/OOPS-Assignments.git
