#include <iostream>
#include <string> // Notice!
using namespace std;

int main(){
    string a = "123"; 
    int num1 = stoi(a); // Converts a string to an integer.

    long lnum = stol("12345"); 
    long long llnum = stoll("123456789"); // Convert a string to a long (stol) or long long (stoll) integer.

    float fnum = stof("3.14"); 
    double dnum = stod("3.1415"); 
    long double ldnum = stold("3.141592"); // Convert a string to a float (stof), double (stod), or long double (stold).

    int num2 = 123; 
    string b = to_string(num2); // Converts a number to a string.
    return 0;
}