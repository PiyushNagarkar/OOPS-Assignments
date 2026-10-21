# Assignment 11: STL List and Vector Containers in C++

**Student Name:** Piyush Nagarkar  
**PRN:** 202501110049  
**Division:** A  
**Batch:** A-2  
**Roll Number:** 39  
**Subject:** C++ Programming  
**Assignment No.:** 11  
**Faculty:** Dr. Khushal Khairnar  

## 1. Aim

To study and implement the `list` and `vector` containers of the Standard Template Library (STL) in C++ and perform different operations using their built-in member functions.

## 2. Problem Statement

**a)** Write a C++ program to demonstrate the `list` class as a container of the Standard Template Library.

**b)** Write a C++ program to demonstrate the `vector` class as a container of the Standard Template Library.

## 3. Objectives

- To understand the concept of STL containers in C++.
- To learn how to declare and initialize `list` and `vector` containers.
- To perform insertion, deletion, traversal, searching, and other common operations.
- To understand the differences between `list` and `vector`.
- To write modular C++ programs using STL member functions.

## 4. Theory

### A. List Container

The `list` container is part of the C++ Standard Template Library. It is generally implemented as a doubly linked list, where each element is stored in a separate node connected to the previous and next nodes.

**Important features:**
- Supports insertion and deletion at both ends.
- Supports efficient insertion and deletion at known positions.
- Provides sequential access rather than direct indexing.
- Common functions include `push_back()`, `push_front()`, `pop_back()`, `pop_front()`, `sort()`, `reverse()`, and `remove()`.

### B. Vector Container

The `vector` container is a dynamic array provided by the C++ Standard Template Library. It can automatically increase or decrease its logical size as elements are inserted or removed.

**Important features:**
- Supports direct access using indexes.
- Supports insertion and deletion at the end efficiently.
- Provides functions such as `push_back()`, `pop_back()`, `insert()`, `erase()`, `size()`, `front()`, `back()`, and `clear()`.
- Insertion or deletion in the middle may require shifting elements.

## 5. Algorithm

1. Start the program.
2. Include the required header files: `<iostream>`, `<list>`, and `<vector>`.
3. Create a list and a vector of integer elements.
4. Insert elements using appropriate STL functions.
5. Display the elements using loops or iterators.
6. Perform operations such as deletion, searching, sorting, or reversing where applicable.
7. Display the updated containers.
8. Stop the program.

## 6. Technologies Used

- **Programming Language:** C++
- **Library:** Standard Template Library (STL)
- **Header Files:** `<iostream>`, `<list>`, `<vector>`, and other headers as required.
- **Compiler/IDE:** GCC, MinGW, Dev-C++, or Visual Studio Code.

## 7. Expected Output

The programs should display the elements of the list and vector before and after performing the selected operations. The output should demonstrate that insertion, deletion, traversal, and other supported operations work correctly.

## 8. Applications

- **List:** Useful when frequent insertion and deletion are required at known positions.
- **Vector:** Useful when indexed access and dynamic-array functionality are required.
- **STL containers:** Help reduce manual memory management and make programs easier to maintain.

## 9. Result

The `list` and `vector` containers of the C++ Standard Template Library were studied and implemented. Common operations were performed successfully, and the differences between the two containers were understood.

## 10. Conclusion

The STL provides ready-to-use containers that simplify data storage and manipulation in C++. The `list` container is suitable for applications involving frequent insertions and deletions at known positions, whereas the `vector` container is suitable when fast indexed access is important.

## 11. Viva Questions

1. **What is STL?**  
   STL stands for Standard Template Library. It provides reusable containers, algorithms, and iterators in C++.

2. **What is a vector?**  
   A vector is a dynamic array that supports indexed access.

3. **What is a list?**  
   A list is a sequence container generally implemented as a doubly linked list.

4. **Can we access list elements using an index?**  
   No. A list does not provide direct indexed access like a vector.

5. **Which function inserts an element at the end of a vector?**  
   `push_back()`.

6. **Which function inserts an element at the front of a list?**  
   `push_front()`.

7. **What is the difference between `pop_back()` and `pop_front()`?**  
   `pop_back()` removes the last element, while `pop_front()` removes the first element.

8. **Which header file is required for a vector?**  
   `<vector>`.

9. **Which header file is required for a list?**  
   `<list>`.

10. **What is an iterator?**  
    An iterator is an object used to access and traverse elements in a container.
