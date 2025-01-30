#include <bits/stdc++.h>
using namespace std;

// Comparator function
bool comp(int a, int b) {
    return a > b;
}

int main() {
    list<int> l = {9, 7, 6, 3};

    // Check vector Sorted in descending order
    if (is_sorted(l.begin(), l.end(), comp))
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}