#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<i+1;j++){
            cout << "*";
        }
        cout <<endl;
    }
    for(size_t i=0;i<n-1;i++){
        for(size_t j=n-i-1;j>0;j--){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}