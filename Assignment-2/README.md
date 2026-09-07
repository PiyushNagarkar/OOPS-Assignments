# Assignment 2: Various Types of Constructors and Member Functions in C++

## Student Details

| Particular | Details |
|---|---|
| **Student Name** | Piyush Nagarkar |
| **PRN** | 202501110049 |
| **Division** | A |
| **Batch** | A-2 |
| **Roll No.** | 39 |
| **Practical No.** | 2 |
| **Faculty Name** | Dr. Khushal Khairnar |
| **Date Performed** | 14 August 2026 |

---

## 1. Practical Title

**Implement Various Types of Constructors and Member Functions**

---

## 2. Problem Statement

Implement a C++ program to demonstrate various types of constructors and member functions.

The program demonstrates the following constructors:

- Default Constructor
- Parameterized Constructor
- Copy Constructor

It also demonstrates the use of a member function to display the details of objects created using these constructors.

---

## 3. Objectives

The main objectives of this practical are:

1. To understand the concept of constructors in C++.
2. To implement different types of constructors.
3. To understand the working of a default constructor.
4. To understand the working of a parameterized constructor.
5. To understand the working of a copy constructor.
6. To implement and use member functions.
7. To understand how objects are initialized using constructors.

---

## 4. Expected Learning Outcomes

After completing this practical, the student will be able to:

1. Explain the purpose and importance of constructors in C++.
2. Differentiate between default, parameterized, and copy constructors.
3. Create objects using different types of constructors.
4. Implement member functions inside a class.
5. Understand how data is copied from one object to another.
6. Apply basic Object-Oriented Programming concepts in C++.

---

## 5. Theory / Concepts

### 5.1 Class

A class is a user-defined data type in C++ that combines data members and member functions into a single unit.

In this program, a class named `Student` is created.

The class contains:

- `name`
- `rollNo`
- `marks`

as its data members.

---

### 5.2 Constructor

A constructor is a special member function of a class that is automatically called when an object of the class is created.

Important characteristics of a constructor:

- It has the same name as the class.
- It does not have a return type.
- It is automatically called when an object is created.
- It is mainly used to initialize data members.

---

### 5.3 Default Constructor

A default constructor is a constructor that does not take any arguments.

In this program, the default constructor initializes the student object with default values:

```cpp
Student()
{
    name = "Unknown";
    rollNo = 0;
    marks = 0;
}
