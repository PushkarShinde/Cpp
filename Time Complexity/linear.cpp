#include <iostream>
#include <vector>
#include <algorithm> // for max function

using namespace std;
/**
 * This is Kadane's Algorithm to find the largest sum of a contiguous sub array.
 * Time complexity......O(n).
 */
int kadaneAlgorithm(const vector<int>& arr) {
    int max_current = arr[0];
    int max_global = arr[0];

    for (size_t i = 1; i < arr.size(); i++) {
        max_current = max(arr[i], max_current + arr[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    return max_global;

    /*
    This a variant of the Kadaane's algorithm where we reset the 
    value of the current sum to 0 if it is negetive.
    
    int currSum=0, ans=INT_MIN;
    for(int i=0; i<n;i++){
        currSum+=arr[i];
        ans=max(currSum,ans);
        currSum=currSum<0?0:currSum;
    }
    */
}

int main() {
    vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int result = kadaneAlgorithm(array);
    cout << "Maximum sum of a contiguous subarray is: " << result << endl;
    
    return 0;
}
