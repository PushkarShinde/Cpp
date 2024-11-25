#include <iostream>
using namespace std;

int main(){
    string string1 = "apple";
    string string2 = "cat";

    if (string1.compare(string2) < 0) {
    cout << "string1 comes first" << endl;
    }
    else if (string1.compare(string2) > 0) {
    cout << "string2 comes first" << endl;
    }
    else {
    cout << "the strings are equal" << endl;
    }

    string str = "123";
    string stri = "9";

    if (str.compare(stri) < 0) {
    cout << "string1 comes first" << endl;
    }
    else if (str.compare(stri) > 0) {
    cout << "string2 comes first" << endl;
    }
    else {
    cout << "the strings are equal" << endl;
    }
}