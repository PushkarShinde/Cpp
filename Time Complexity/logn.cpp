#include <bits/stdc++.h>
using namespace std;
/**
 * Binary search.......O(log(n)). 
 */
int binary_search(vector<int>&ar,int n){
    sort(ar.begin(),ar.end());
    int s=0,e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(ar[mid]<n){
            s=mid+1;
        } else if(ar[mid]>n){
            e=mid-1;
        } else{
            return mid;
        }
    }
}

int main(){
    vector<int>a{1,23,4,5,6,7,8,2};
    cout<<binary_search(a,8)<<endl;
    return 0;
}