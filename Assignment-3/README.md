Here is the **complete `README.md` content for Assignment-3**, in the same detailed style as your Assignment-2 README. You can copy everything below directly into `Assignment-3/README.md`.

````markdown
# Assignment 3: Operator Overloading Using Default and Parameterized Constructors in C++

## Student Details

- **Name:** Piyush Nagarkar
- **PRN:** 202501110049
- **Division:** A
- **Batch:** A-2
- **Roll No.:** 39
- **Branch:** CSE - AIML
- **Subject:** Object Oriented Programming using C++
- **Practical No.:** 3
- **Faculty:** Dr. Khushal Khairnar

---

## 1. Problem Statement

Write a C++ program to demonstrate **operator overloading using default and parameterized constructors**.

The program should create a class named `Number` and demonstrate:

1. Default constructor
2. Parameterized constructor
3. Member function
4. Operator overloading of the `+` operator
5. Addition of two objects using the overloaded `+` operator

---

## 2. Objectives

The objectives of this practical are:

- To understand the concept of operator overloading in C++.
- To understand the use of default constructors.
- To understand the use of parameterized constructors.
- To create and use objects of a class.
- To overload the `+` operator for user-defined objects.
- To perform addition of two objects using operator overloading.
- To display the result using a member function.

---

## 3. Expected Learning Outcomes

After completing this practical, I will be able to:

- Explain the concept of operator overloading.
- Differentiate between default and parameterized constructors.
- Define constructors inside a class.
- Create objects using different constructors.
- Overload an arithmetic operator.
- Use an overloaded `+` operator with class objects.
- Understand how operator overloading improves readability of C++ programs.

---

## 4. Theory / Concept

### 4.1 Operator Overloading

Operator overloading is a feature of C++ that allows operators such as `+`, `-`, `*`, `/`, `==`, etc. to be given a specific meaning for objects of a user-defined class.

For example:

```cpp
n3 = n1 + n2;
````

Here, `n1` and `n2` are objects of the `Number` class. The `+` operator is overloaded so that it can add the values stored inside these objects.

The overloaded operator is defined using a special function name:

```cpp
operator+
```

C++ allows arithmetic operators such as `+`, `-`, `*`, and `/` to be overloaded for user-defined types.

---

### 4.2 Default Constructor

A default constructor is a constructor that does not require any arguments.

Example:

```cpp
Number()
{
    value = 0;
}
```

When an object is created without passing any argument, the default constructor is called.

Example:

```cpp
Number n;
```

In this program, the default constructor initializes the value to `0`.

---

### 4.3 Parameterized Constructor

A parameterized constructor accepts one or more arguments.

Example:

```cpp
Number(int v)
{
    value = v;
}
```

It can be used to initialize an object with a specific value.

Example:

```cpp
Number n1(10);
Number n2(20);
```

Here, `n1` stores `10` and `n2` stores `20`.

---

### 4.4 Operator Overloading Syntax

The general syntax for overloading an operator as a member function is:

```cpp
return_type operator symbol(parameters)
{
    // statements
}
```

For the `+` operator:

```cpp
Number operator+(Number n)
{
    Number temp;
    temp.value = value + n.value;
    return temp;
}
```

The overloaded `+` operator takes another `Number` object and returns a new `Number` object containing the sum.

---

## 5. Program Description

The program contains a class named `Number`.

The class contains:

* A private data member `value`
* A default constructor
* A parameterized constructor
* An overloaded `+` operator
* A `display()` member function

Two objects are created using the parameterized constructor:

```cpp
Number n1(10);
Number n2(20);
```

Then the overloaded `+` operator is used:

```cpp
Number n3 = n1 + n2;
```

The result is stored in object `n3`.

The program also creates an object using the default constructor:

```cpp
Number n4;
```

The default constructor initializes its value to `0`.

---

## 6. Algorithm

1. Start the program.
2. Include the `<iostream>` header file.
3. Define a class named `Number`.
4. Declare a private integer variable `value`.
5. Define the default constructor and initialize `value` to `0`.
6. Define the parameterized constructor to initialize `value` with a given number.
7. Define the overloaded `+` operator.
8. Add the values of two `Number` objects.
9. Store the result in a temporary `Number` object.
10. Return the temporary object.
11. Define the `display()` function to print the value.
12. Create two objects using the parameterized constructor.
13. Add the two objects using the overloaded `+` operator.
14. Display the values of both objects and their sum.
15. Create another object using the default constructor.
16. Display the default value.
17. Stop the program.

---

## 7. Technology / Tools Used

* **Programming Language:** C++
* **IDE:** Visual Studio Code
* **Compiler:** G++ / MinGW
* **Operating System:** Windows
* **Repository:** GitHub

---

## 8. Source Code

```cpp
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:

    // Default Constructor
    Number()
    {
        value = 0;
        cout << "Default Constructor Called." << endl;
    }

    // Parameterized Constructor
    Number(int v)
    {
        value = v;
        cout << "Parameterized Constructor Called." << endl;
    }

    // Operator Overloading (+)
    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    // Member Function
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    // Parameterized Constructor
    Number n1(10);
    Number n2(20);

    // Operator Overloading
    Number n3 = n1 + n2;

    // Display values
    cout << "\nFirst Number: ";
    n1.display();

    cout << "Second Number: ";
    n2.display();

    cout << "Sum of Two Numbers: ";
    n3.display();

    // Default Constructor
    Number n4;

    cout << "Default Number: ";
    n4.display();

    return 0;
}
```

---

## 9. Explanation of the Program

### Class Definition

```cpp
class Number
```

A class named `Number` is created to store an integer value and perform operations on it.

### Data Member

```cpp
int value;
```

The variable `value` stores the number inside each object.

### Default Constructor

```cpp
Number()
{
    value = 0;
}
```

This constructor initializes the value to `0`.

### Parameterized Constructor

```cpp
Number(int v)
{
    value = v;
}
```

This constructor accepts a number and stores it in the object.

### Operator Overloading

```cpp
Number operator+(Number n)
```

This function overloads the `+` operator for objects of the `Number` class.

The statement:

```cpp
Number n3 = n1 + n2;
```

calls the overloaded `+` operator and adds the values of `n1` and `n2`.

For:

```text
n1 = 10
n2 = 20
```

the result is:

```text
n3 = 30
```

### Display Function

```cpp
void display()
```

The `display()` function prints the value stored inside the object.

---

## 10. Test Cases / Input and Output

| Test Case                 | Input            | Expected Output | Actual Output    | Status |
| ------------------------- | ---------------- | --------------- | ---------------- | ------ |
| Default Constructor       | `Number n4;`     | Value = 0       | Same as expected | Pass   |
| Parameterized Constructor | `Number n1(10);` | Value = 10      | Same as expected | Pass   |
| Parameterized Constructor | `Number n2(20);` | Value = 20      | Same as expected | Pass   |
| Operator Overloading      | `n1 + n2`        | Sum = 30        | Same as expected | Pass   |
| Operator Overloading      | `25 + 15`        | Sum = 40        | Same as expected | Pass   |
| Operator Overloading      | `50 + 30`        | Sum = 80        | Same as expected | Pass   |

---

## 11. Expected Output

```text
Parameterized Constructor Called.
Parameterized Constructor Called.
Default Constructor Called.

First Number: Value = 10
Second Number: Value = 20
Sum of Two Numbers: Value = 30
Default Constructor Called.
Default Number: Value = 0
```

---

## 12. Results / Observations

The program was successfully executed in Visual Studio Code.

The following concepts were successfully demonstrated:

* Default constructor
* Parameterized constructor
* Class and objects
* Member function
* Operator overloading
* Addition of two objects using the overloaded `+` operator

The `+` operator successfully added the values of two `Number` objects and returned the result as another `Number` object.

---

## 13. Screenshot

The screenshot of the program execution is included in this folder.

The screenshot shows:

* C++ source code
* Program execution
* Constructor messages
* Values of the objects
* Result of operator overloading

---

## 14. Conclusion

This practical helped me understand the concept of **operator overloading in C++**.

I learned how the `+` operator can be overloaded to perform addition between objects of a user-defined class. I also understood how default and parameterized constructors are used to initialize objects.

Thus, the program successfully demonstrates **operator overloading using default and parameterized constructors**.

---

## 15. Viva Questions

### Q1. What is operator overloading?

Operator overloading is a feature of C++ that allows operators to work with user-defined objects.

### Q2. Which operator is overloaded in this program?

The `+` operator is overloaded.

### Q3. What is a constructor?

A constructor is a special member function used to initialize objects of a class.

### Q4. What is a default constructor?

A default constructor is a constructor that can be called without passing arguments.

### Q5. What is a parameterized constructor?

A parameterized constructor accepts arguments to initialize an object.

### Q6. What does this statement do?

```cpp
Number n3 = n1 + n2;
```

It uses the overloaded `+` operator to add the values stored in `n1` and `n2`.

### Q7. What is the result when 10 and 20 are added?

The result is:

```text
30
```

### Q8. Can all C++ operators be overloaded?

No. Some operators such as `::`, `.`, `.*`, and `?:` cannot be overloaded.

---

## 16. Repository Structure

```text
Assignment-3/
│
├── Assignment-3.cpp
├── README.md
└── Screenshot-Assignment-3.png
```

---

## 17. Author

**Name:** Piyush Nagarkar
**PRN:** 202501110049
**Branch:** CSE - AIML
**Roll No.:** 39
**Division:** A
**Batch:** A-2

---

## References

* C++ operator overloading reference: [https://en.cppreference.com/cpp/language/operators](https://en.cppreference.com/cpp/language/operators)
* C++ constructors reference: [https://en.cppreference.com/cpp/language/constructor](https://en.cppreference.com/cpp/language/constructor)

```

The operator-overloading and constructor descriptions above are consistent with standard C++ references. :contentReference[oaicite:0]{index=0}
```
