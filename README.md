# C++ Practical: Class, Constructor, Destructor and User-Defined Functions

## Student Details

* **Name:** Piyush Nagarkar
* **PRN:** 202501110049
* **Division:** A
* **Batch:** A-2
* **Roll No.:** 39
* **Practical No.:** 1
* **Faculty:** Dr. Khushal Khairnar
* **Date Performed:** 14 August 2026

---

## Problem Statement

Write a C++ program to demonstrate the use of a **class, constructor, destructor, and user-defined functions**. The program creates an object of a class, initializes its data using a constructor, performs calculations using user-defined functions, displays the student details, and demonstrates the working of a destructor.

---

## Objectives

1. To understand the concept of classes and objects in C++.
2. To implement constructors and destructors.
3. To create and use user-defined member functions.
4. To understand the lifecycle of objects in C++.

---

## Concepts Used

### Class

A class is a user-defined data type that combines data members and member functions into a single unit.

### Constructor

A constructor is a special member function that has the same name as the class. It is automatically called when an object is created and is used to initialize the object.

### Destructor

A destructor is a special member function whose name is the class name preceded by `~`. It is automatically called when an object is destroyed.

### User-Defined Functions

User-defined functions are functions created by the programmer to perform specific operations. This program uses functions to calculate total marks, percentage, and display student information.

---

## Program Description

The program defines a `Student` class containing:

* Student name
* Roll number
* Marks in three subjects

The constructor initializes these values.

The following user-defined functions are implemented:

* `calculateTotal()` – Calculates the total marks.
* `calculatePercentage()` – Calculates the percentage.
* `display()` – Displays student details and calculated results.

The destructor displays a message when the object is destroyed.

---

## Algorithm

1. Start the program.
2. Define a `Student` class.
3. Declare student details and marks as data members.
4. Define a constructor to initialize the data members.
5. Define a function to calculate total marks.
6. Define a function to calculate percentage.
7. Define a function to display the student details.
8. Define a destructor.
9. Create an object of the `Student` class.
10. Call the `display()` function.
11. Display the calculated total and percentage.
12. When the program ends, the destructor is automatically called.
13. Stop the program.

---

## Technologies Used

* **Programming Language:** C++
* **IDE:** VS Code
* **Header Files:** `<iostream>`, `<string>`

---

## Sample Input

The program uses the following student information:

```text
Name: Piyush
Roll No.: 101
Marks 1: 85
Marks 2: 90
Marks 3: 88
```

---

## Sample Output

```text
Constructor called.

--- Student Details ---
Name       : Piyush
Roll No.   : 101
Marks 1    : 85
Marks 2    : 90
Marks 3    : 88
Total Marks: 263
Percentage : 87.6667%

Destructor called. Object destroyed.
```

---

## Calculation

### Total Marks

```text
85 + 90 + 88 = 263
```

### Percentage

```text
263 / 3 = 87.6667%
```

---

## Test Cases

| Test Case | Name   | Roll No. | Marks      | Expected Result                  |
| --------- | ------ | -------: | ---------- | -------------------------------- |
| 1         | Piyush |      101 | 85, 90, 88 | Total = 263, Percentage = 87.67% |
| 2         | Rahul  |      102 | 75, 80, 85 | Total = 240, Percentage = 80%    |

---

## Result

The C++ program was successfully implemented and executed. The program demonstrates the use of:

* Class
* Object
* Constructor
* Destructor
* User-defined functions

The total marks and percentage were calculated successfully.

---

## Conclusion

This practical helped in understanding the basic concepts of Object-Oriented Programming in C++. The working of constructors and destructors was demonstrated along with user-defined member functions. The program also shows how objects are initialized and destroyed automatically.

---

## Files in Repository

```text
.
├── README.md
└── Assignment-1.cpp
```

>

---

## Author

**Piyush Nagarkar**
PRN: **202501110049**
Division: **A** | Batch: **A-2** | Roll No.: **39**
