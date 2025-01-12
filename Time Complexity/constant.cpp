#include <bits/stdc++.h>
using namespace std;

/**
 * Doesn't matter the input size, the number of operations performed is same. -> O(1).
 */
int main() {
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    cout << "The sum of all the numbers from 0 to n is: "<< n*(n-1)/2;
    return 0;
}

