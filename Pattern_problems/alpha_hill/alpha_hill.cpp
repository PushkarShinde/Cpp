#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char term='A';
        for(int j=n-1-i;j>0;j--){
            cout << "  ";
        }
        for(int k=0;k<=i;k++){
            cout<< term<< " ";
            term = (char)((int)term+1);
        }
            term = (char)((int)term-1);
        for(int l=i;l>0;l--){
            term = (char)((int)term-1);
            cout<< term<< " ";
        }
        cout << endl;
    }
    return 0;
}