#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1, 2, 34};
    vector<int> B = {1, 2, 34, 5, 4, 4};

    // Ensure that B has enough elements to compare with A
    if (B.size() >= A.size() && is_permutation(A.begin(), A.end(), B.begin())) {
        cout << "A is a permutation of the beginning portion of B!" << endl;
    } else {
        cout << "A is NOT a permutation of the beginning portion of B." << endl;
    }

    return 0;
}
