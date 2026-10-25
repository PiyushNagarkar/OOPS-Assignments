# Assignment 10: Class Template and Function Template in C++

## 📌 Aim
To implement and understand **Function Templates and Class Templates** in C++ using generic programming concepts.

## 🎯 Objectives
- To understand the concept of templates in C++.
- To implement function templates for different data types.
- To create and use class templates.
- To understand generic programming and code reusability.
- To perform arithmetic operations using templates.

## 📖 Theory

### 1. Function Template
A function template allows a single function to work with different data types without rewriting the same code.

**Syntax:**
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

### 2. Class Template
A class template allows a class to operate on different data types using a generic type parameter.

**Syntax:**
```cpp
template <typename T>
class Calculator {
    T num1, num2;
};
```

## 💻 Programs Implemented

### Program 1: Function Template
- Implements a generic `add()` function.
- Performs addition of integers, floats, and doubles.
- Demonstrates code reusability using a single function.

**Output:**
```text
Addition of Integers: 30
Addition of Floats: 10
Addition of Doubles: 20
```

### Program 2: Class Template
- Implements a generic `Calculator` class.
- Performs addition, subtraction, multiplication, and division.
- Supports integer and float data types.
- Handles division by zero.

**Output:**
```text
Integer Operations:
Addition: 30
Subtraction: 10
Multiplication: 200
Division: 2

Float Operations:
Addition: 17.5
Subtraction: 13.5
Multiplication: 31
Division: 7.75
```

## 🛠️ Technologies Used
- **Language:** C++
- **IDE:** Visual Studio Code
- **Compiler:** G++
- **Library:** iostream
- **Concepts:** Templates, Generic Programming, OOP

## ▶️ How to Run

1. Open the project in VS Code.
2. Compile the C++ program using G++.
3. Execute the generated file.

**For Function Template:**
```bash
g++ Assignment-10-code-1.cpp -o program1
./program1
```

**For Class Template:**
```bash
g++ Assignment-10-code-2.cpp -o program2
./program2
```

## 📚 Learning Outcomes
- Understood the implementation of function and class templates.
- Learned how templates support multiple data types.
- Improved understanding of generic programming.
- Learned to reduce code duplication using templates.
- Implemented arithmetic operations using class templates.

## ✅ Conclusion
This assignment demonstrates the implementation of **Function Templates and Class Templates in C++**. Templates allow programmers to write reusable and flexible code that works with multiple data types, improving efficiency and maintainability.

---

**Student Name:** Piyush Nagarkar  
**PRN:** 202501110049  
**Class:** SY B.Tech. AIML  
**Division:** A  
**Batch:** A-2  
**Roll No.:** 39  
**Subject:** Object-Oriented Programming (OOPS)  
**Assignment No.:** 10

**GitHub Repository:** [OOPS-Assignments](https://github.com/PiyushNagarkar/OOPS-Assignments)
