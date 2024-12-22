#include <iostream>
using namespace std;

void fun(string s1, string s2){
    // Find position of string s2
    int found = s1.find(s2);
    // Check if position is -1 or not
    if (found != string::npos) {
        cout << "first " << s2 << " found at: " << (found)<< endl;
    }
    else
        cout << s2 << " is not in"<< "the string" << endl;
}

int main() {
    string p="Pushkar Shinde", a="Shinde";
    fun(p,a);
    return 0;
}