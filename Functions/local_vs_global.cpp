#include <bits/stdc++.h>
using namespace std;

string my_var = "global scope"; //A global variable my_var is declared and initialized with the value "global scope".

void PrintScope(string my_var) { //This function takes a parameter my_var (local to the function) and shadows the global variable.
my_var = "local scope";
cout << my_var << endl;
}

int main() {

    PrintScope(my_var);
    cout << my_var << endl;
    
    return 0;
}
/*
Final Output:
-------------
local scope
global scope
-------------
This behavior demonstrates the concept of variable shadowing and the distinction between local and global scope.
*/