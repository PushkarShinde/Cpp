#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        char A='A';
        char term=(char)((int)A-1+n);
        for(int j=0;j<=i;j++){
            cout << term<< " ";
            term=(char)((int)term-1);
        }
        cout << endl;
    }
    return 0;
}