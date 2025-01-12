#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<i;++j){
            cout << " ";
        }
        for(size_t k=1;k<2*(n-i);k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}