#include <iostream>
using namespace std;

int main() {
    int number = 10;

// 1. if Statement
    if (number > 5) {
        cout << "The number is greater than 5" << endl;
    }

// 2. if-else Statement
    int number2 = 3;
    if (number2 > 5) { 
        cout << "The number is greater than 5" << endl; 
    } else { 
        cout << "The number is not greater than 5" << endl; 
    }

// 4. Nested if
    int number4 = 12; 
    if (number4 > 10) { 
        cout << "The number is greater than 10" << endl; 
        if (number4 % 2 == 0) { 
            cout << "The number is even" << endl; } 
        else { 
            cout << "The number is odd" << endl; 
        } 
    }

// 3. else if Ladder
    int number3 = 7; 
    if (number3 > 10) { 
        cout << "The number is greater than 10" << endl; 
    } else if (number3 > 5) { 
        cout << "The number is greater than 5 but less than or equal to 10" << endl; 
    } else { 
        cout << "The number is 5 or less" << endl; 
    }
/*
------------------------------------------------------
Note: 
I] Else if is used for a range of values and Switch is used for specific values.
II] Else if is used for handling multiple 'variables' or 'values' and Switch case is used for handling multiple 'values' only.
------------------------------------------------------
*/
// 5. Switch case
    int choice = 2; 
    switch (choice) { 
        case 1: cout << "You chose option 1" << endl; 
        break; 
        case 2: cout << "You chose option 2" << endl; 
        break; 
        case 3: cout << "You chose option 3" << endl; 
        break; 
        default: cout << "Invalid choice" << endl; 
        break; 
    }

// 5. Compound if
    int x = 10; int y = 20; int z = 30; 
    if ((x > 5 && y > 15) || z > 25) { 
        cout << "Either both conditions of the first part are true, or the second part is true" << endl; 
    }

    return 0;
}
