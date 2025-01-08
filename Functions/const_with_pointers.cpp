#include <iostream>
using namespace std;

int main() {
    const int value1 = 42;     // Immutable value
    int value2 = 100;          // Mutable value

    // 1. Pointer to a constant
    const int* ptr1 = &value1;
    cout << "Pointer to a constant (value1): " << *ptr1 << endl;

    // *ptr1 = 50; // Error: Cannot modify the value through ptr1
    ptr1 = &value2; // Allowed: Pointer can point to another address
    cout << "Pointer to a constant (value2): " << *ptr1 << endl;

    // 2. Constant pointer
    int* const ptr2 = &value2;
    cout << "Constant pointer: " << *ptr2 << endl;

    *ptr2 = 200; // Allowed: Can modify the value through ptr2
    cout << "Modified value through constant pointer: " << *ptr2 << endl;

    // ptr2 = &value1; // Error: Pointer cannot point to another address

    // 3. Constant pointer to a constant
    const int* const ptr3 = &value1;
    cout << "Constant pointer to a constant: " << *ptr3 << endl;

    // *ptr3 = 60; // Error: Cannot modify the value through ptr3
    // ptr3 = &value2; // Error: Pointer cannot point to another address

    return 0;
}
