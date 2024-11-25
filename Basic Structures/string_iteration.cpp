#include<iostream>
using namespace std;

int main(){
    string my_string = "Hello world";
    for (int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i);
    }

    // range based for / enhanced for
    for (char c : my_string) {
    cout << c;
    }

    // while loop
    string my_string = "Calvin and Hobbes";
    int i = 0;
    while (i < my_string.length()) {
    cout << my_string.at(i);
    i++;
    }
}