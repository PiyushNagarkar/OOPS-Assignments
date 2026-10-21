# Assignment 8: Exception Handling in C++

## 1. Aim
To understand and implement exception handling in C++ using the `try`, `throw`, and `catch` keywords to handle runtime errors effectively.

## 2. Problem Statement
Write a C++ program to implement exception handling operations using `try`, `throw`, and `catch` statements. The program should handle runtime errors such as division by zero and display appropriate error messages without causing abnormal program termination.

## 3. Objectives
- To understand the concept of exception handling in C++.
- To learn the use of `try`, `throw`, and `catch` keywords.
- To handle runtime errors effectively.
- To prevent abnormal program termination due to exceptions.
- To improve program reliability and maintainability.

## 4. Theory

**Exception handling** is a mechanism in C++ used to detect and handle runtime errors. It allows a program to respond to exceptional situations instead of terminating unexpectedly.

### Keywords Used

**1. `try`**

The `try` block contains statements that may generate an exception.

**2. `throw`**

The `throw` keyword is used to raise an exception when an exceptional condition occurs.

**3. `catch`**

The `catch` block handles an exception thrown from the associated `try` block.

### Working of Exception Handling

1. The program executes the statements inside the `try` block.
2. If an exceptional condition occurs, an exception is thrown.
3. Control transfers to a matching `catch` block.
4. The exception is handled and an appropriate message is displayed.
5. The program continues execution after the exception-handling structure, if possible.

## 5. Algorithm

1. Start the program.
2. Declare two integer variables: numerator and denominator.
3. Accept the numerator and denominator from the user.
4. Enter the `try` block.
5. Check whether the denominator is zero.
6. If the denominator is zero, throw an exception.
7. Otherwise, perform the division and display the result.
8. Use the `catch` block to handle the exception and display an error message.
9. Display a message indicating that the program continues normally.
10. Stop the program.

## 6. Source Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw denominator;
        }

        int result = numerator / denominator;

        cout << "Result of division: "
             << result << endl;
    }
    catch (int error) {
        cout << "Exception caught: Division by zero is not allowed."
             << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}
```

## 7. Sample Output

### Test Case 1: Valid Division

**Input:**
```text
Enter numerator: 20
Enter denominator: 4
```

**Output:**
```text
Result of division: 5
Program continues normally.
```

### Test Case 2: Division by Zero

**Input:**
```text
Enter numerator: 20
Enter denominator: 0
```

**Output:**
```text
Exception caught: Division by zero is not allowed.
Program continues normally.
```

### Test Case 3: Negative Numbers

**Input:**
```text
Enter numerator: -20
Enter denominator: 5
```

**Output:**
```text
Result of division: -4
Program continues normally.
```

## 8. Concepts Used
- Exception handling
- `try` block
- `throw` statement
- `catch` block
- Conditional statements
- Runtime error handling

## 9. Advantages of Exception Handling
- Helps handle exceptional situations gracefully.
- Prevents unhandled exceptions from terminating normal execution.
- Separates error-handling code from normal program logic.
- Improves program reliability and maintainability.
- Supports handling different types of exceptions.

## 10. Applications
- Handling invalid calculations.
- Managing errors in file operations.
- Handling unexpected input conditions.
- Developing robust and reliable software applications.

## 11. Conclusion
Thus, the C++ program successfully demonstrates exception handling using `try`, `throw`, and `catch`. The program handles division-by-zero errors and displays an appropriate message while allowing execution to continue after the exception is handled.

## 12. Repository
**Repository Name:** OOPS-Assignments

**GitHub URL:** https://github.com/PiyushNagarkar/OOPS-Assignments.git
