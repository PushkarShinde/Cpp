// C++ program to demonstrate the working of partial_sum()
// with custom function
#include <bits/stdc++.h>
using namespace std;

// Custom function to multiply adjacent numbers
int op(int a, int b) {
    return a * b;
}

int main() {
    vector<int> vec = {5, 10, 15};
    vector<int> result(vec.size());
  
    // Defining the range as the whole array
    auto first = vec.begin();
    auto last = vec.end();
  
    // Using partial_sum with user-defined function (myfun)
    partial_sum(first, last, result.begin(), op);

    for (int val : result){
        cout << val << " ";
    }

    vector<int> res(vec.size());

    // Use partial_sum to calculate the cumulative sum of elements
    partial_sum(first, last, res.begin());

    for (int val : res){
        cout << val << " ";
    }
    return 0;
}