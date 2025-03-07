#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the input failed (e.g., user entered a non-integer)
    if (cin.fail()) {
        cout << "That's not an integer!" << endl;
        cin.clear(); // Clear the error flag
        // Ignore the rest of the line
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "You entered: " << number << endl;
    }

    return 0;
}