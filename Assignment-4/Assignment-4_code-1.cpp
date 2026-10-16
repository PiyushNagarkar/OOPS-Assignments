#include <iostream>
using namespace std;

int main() {
    int number = 10;

    // Reference: another name for the same variable
    int &ref = number;
    cout << "Original value: " << number << endl;
    ref = 20;
    cout << "After changing through reference: " << number << endl;

    // Pointer: stores the address of the variable
    int *ptr = &number;
    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Value accessed using pointer: " << *ptr << endl;

    *ptr = 30;
    cout << "After changing through pointer: " << number << endl;

    return 0;
}
