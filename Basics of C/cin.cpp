#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number; // read a single value from the user
    cout << "You entered: " << number << endl;

    int num1, num2; 
    cout << "Enter two integers: ";
    cin >> num1 >> num2; // read multiple values in a single line
    cout << "You entered: " << num1 << " and " << num2 << endl;

    string name; 
    cout << "Enter your name: "; 
    cin >> name; // To read a single word, use cin with a string
    cout << "Hello, " << name << "!" << endl;
    
    // However, if you need to read an entire line of text, use getline
    string fullname; 
    cout << "Enter your full name: "; 
    getline(cin, fullname); 
    cout << "Hello, " << fullname << "!" << endl;
    return 0;
}
