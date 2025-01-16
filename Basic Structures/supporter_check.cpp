#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr{1,2,3,4,5,8,6};
    // Write your code here.
    vector<int>newa;
    for(int i=0;i<arr.size();i++){
        if(i==0){
            newa.push_back(-1);
        }else{
            int key=0;
            for(int j=i-1;j>=0;j--){
                if(arr[j]<arr[i]){
                    key=1;
                    newa.push_back(arr[j]);
                    break;
                }
            }
            if(!key){
                newa.push_back(-1);
            }
        }
    }
    for(int i=0;i<newa.size();i++){
        cout << newa[i]<< " ";
    }
    return 0;
}