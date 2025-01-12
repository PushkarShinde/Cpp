#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<n-i-1;j++){ // space " ".
            cout << " ";
        }
        for(size_t k=1;k<2*(i+1);k++){ // stars "*".
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}