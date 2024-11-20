#include <iostream> 
using namespace std; 

int main() {
// 1. For loop 
    for (int j = 1; j <= 5; j++) { 
        cout << j << endl; 
    }

// 2. While loop
    int i = 1;
    while (i <= 5) { 
        cout << i << endl; 
        i++; 
    }

// 3. Do-while loop
    do { 
        cout << i << endl; 
        i++; 
    } while (i <= 5);

// 4. Example with break and continue statements
    for (int i = 0; i < 10; i++) { 
        if (i == 5) { 
            break; // Exit the loop when i is 5 
            } 
        if (i % 2 == 0) { 
            continue; // Skip the rest of the loop when i is even 
            } 
        cout << "i: " << i << endl; 
    }

// 5. Nested loops
    for (int i = 1; i <= 3; i++) { 
        for (int j = 1; j <= 3; j++) { 
            cout << "* "; 
        } 
        cout << endl; 
    }
}