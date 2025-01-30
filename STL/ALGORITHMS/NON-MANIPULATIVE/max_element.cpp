// C++ program to illustrate the use of custom
// comparator with std::max_element()
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if the first
// argument have smaller remainder left after
// division with 5
bool comp(int a, int b) {
  return a % 5 < b % 5;
}

int main() {
    int arr[] = {33, 87, 1, 71};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // Finding the maximum element in array
    cout << *max_element(arr, arr + n);

    
    vector<int> v = {33, 87, 1, 71};

    // Finding the maximum element in given 
    // range of vector
    cout << *max_element(v.begin(), v.end(), comp);

    return 0;
}