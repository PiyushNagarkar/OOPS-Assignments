# Assignment 12: Type Casting and Casting Operators in C++

**Student Name:** Piyush Nagarkar  
**PRN:** 202501110049  
**Division:** A  
**Batch:** A-2  
**Roll Number:** 39  
**Subject:** C++ Programming  
**Assignment No.:** 12  
**Faculty:** Dr. Khushal Khairnar  

## 1. Aim

To study and implement type casting and different casting operators in C++ using suitable examples and functions.

## 2. Problem Statement

Write a C++ program to demonstrate type casting and casting operators, including implicit type conversion, explicit type conversion, `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

## 3. Objectives

- To understand the concept of type casting in C++.
- To differentiate between implicit and explicit type conversion.
- To study the four named casting operators in C++.
- To implement casting operations using separate functions.
- To understand the uses and limitations of different casting operators.

## 4. Theory

### A. Type Casting

Type casting is the process of converting a value from one data type to another. It is used when a program needs to work with values of different data types.

### B. Implicit Type Conversion

Implicit conversion is performed automatically by the compiler when a conversion is permitted.

**Example:**
```cpp
int number = 10;
double value = number;
```

Here, the integer value is automatically converted into a double value.

### C. Explicit Type Conversion

Explicit conversion is performed when the programmer specifies the conversion.

**Example:**
```cpp
double price = 12.75;
int amount = static_cast<int>(price);
```

The resulting integer value is `12` because the fractional part is discarded.

### D. Casting Operators

**1. `static_cast`**

- Used for many well-defined conversions between compatible types.
- Commonly used for numeric conversions.
- Example: converting a `double` value to an `int`.

**2. `dynamic_cast`**

- Used for runtime-checked conversions in polymorphic class hierarchies.
- Commonly used when converting a base-class pointer to a derived-class pointer.
- Returns `nullptr` if a pointer conversion fails.

**3. `const_cast`**

- Used to add or remove `const` or `volatile` qualification.
- Modifying an object that was originally declared `const` through a cast results in undefined behavior.

**4. `reinterpret_cast`**

- Used for certain low-level conversions between types, including pointer conversions.
- Must be used carefully because it does not guarantee that the resulting operation is safe.

## 5. Algorithm

1. Start the program.
2. Demonstrate implicit conversion from `int` to `double`.
3. Use `static_cast` to convert a `double` value into an integer.
4. Create base and derived classes to demonstrate `dynamic_cast`.
5. Use `const_cast` on a pointer to an object that was originally non-const.
6. Use `reinterpret_cast` to convert an integer pointer into a `void` pointer.
7. Display the results of all conversions.
8. Stop the program.

## 6. Technologies Used

- **Programming Language:** C++
- **Header File:** `<iostream>`
- **Concepts:** Type casting, inheritance, polymorphism, pointers, and functions.
- **Compiler/IDE:** GCC, MinGW, Dev-C++, or Visual Studio Code.

## 7. Expected Output

The program should display the results of implicit and explicit conversions and demonstrate the successful use of `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

Example output:
```text
--- Static and Implicit Casting ---
Implicit conversion: 10
Static cast result: 12

--- Dynamic Casting ---
Dynamic cast successful.

--- Const Casting ---
Const cast result: 20

--- Reinterpret Casting ---
Reinterpret cast successful: Yes
```

## 8. Applications

- Converting numeric values between data types.
- Working with inheritance and polymorphism.
- Handling pointers and type qualifications.
- Interacting with low-level programming interfaces when appropriate.
- Making type conversions explicit and easier to understand.

## 9. Result

The C++ program demonstrates implicit and explicit type conversion and the four named casting operators: `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`.

## 10. Conclusion

Type casting is an important feature of C++ that allows conversions between different types. Each casting operator serves a specific purpose. Selecting the appropriate operator helps improve code clarity and avoid unsafe conversions.

## 11. Viva Questions

1. **What is type casting?**  
   Type casting is the conversion of a value from one data type to another.

2. **What is implicit conversion?**  
   It is a conversion performed automatically by the compiler.

3. **What is explicit conversion?**  
   It is a conversion requested directly by the programmer.

4. **What is `static_cast`?**  
   It is an operator used for many well-defined compile-time conversions.

5. **What is `dynamic_cast`?**  
   It performs runtime-checked conversions within polymorphic class hierarchies.

6. **What happens when a pointer `dynamic_cast` fails?**  
   It returns `nullptr`.

7. **What is `const_cast`?**  
   It adds or removes `const` or `volatile` qualification.

8. **Can we safely modify an object originally declared `const` using `const_cast`?**  
   No. Modifying such an object results in undefined behavior.

9. **What is `reinterpret_cast`?**  
   It performs certain low-level type conversions and must be used cautiously.

10. **Why are named casting operators preferred in C++?**  
    They make the programmer's intention clearer and distinguish different types of conversion.
