#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin>> s;
    for (size_t i = 0; i < s; i++){
        for (size_t j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}