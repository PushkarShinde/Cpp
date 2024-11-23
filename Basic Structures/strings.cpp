#include<iostream>
using namespace std;

int main(){
    string str = "Pushkar"; 
    int len = str.length(); // tells the number of characters in a string!
    cout << len << endl;

    // str.at(0)="M"; this will produce Mutability error!
    str.at(0)='M';
    cout << str << endl;

    string stri = "I am going to be rich.";
    int find = stri.find("going"); // will tell the index from which the string we want to find, starts! 
    cout << find << endl;
    cout << stri.find("go",2) << endl; // will start checking after index 2 and avoid checking index 0 and 1!

    string str1 = stri.substr(5,9);
    cout << str1 << endl;
    return 0;
}