#include<iostream>
using namespace std;

int main(){
    string my_string = "Hello world";
    for (int i = 0; i < my_string.length(); i++) {
    cout << my_string.at(i);
    }
    cout<<endl;
    // range based for / enhanced for
    for (char c : my_string) {
    cout << c;
    }

    cout<<endl;
    // while loop
    string my_string1 = "Calvin and Hobbes";
    int i = 0;
    while (i < my_string1.length()) {
    cout << my_string1.at(i);
    i++;
    }
}