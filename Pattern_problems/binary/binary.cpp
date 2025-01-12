#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<=i;j++){
            if((j+i)%2==0){
                cout << 1<<" ";
            } else{
                cout << 0<< " ";
            }
        }
        cout <<endl;
    }
    return 0;
}