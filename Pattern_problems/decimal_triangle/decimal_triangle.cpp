#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(size_t i=0;i<n;i++){
        for(size_t j=1;j<=i+1;j++){
            if(j<i+1){
                cout << j<< " ";
            } else{
                cout <<j;
            }
        }
        for (int j = 4*(n-1-i); j >=0 ; j--){
            cout << " ";
        }
        for(int k=i+1;k>=1;k--){
            cout << k<< " ";
        }
        cout <<endl;
    }
    return 0;
}