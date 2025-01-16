#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int size = 2 * n; // Total rows (middle row has 2 * N stars)

    for (int i = 1; i <= size - 1; i++) {
        for (int j = 1; j <= size; j++) {
            if (i <= n) {
                // Upper half including the middle row
                if (j <= i || j > size - i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            } else {
                // Lower half (mirror of the upper half)
                int mirror_i = size - i; // Corresponding row in the upper half
                if (j <= mirror_i || j > size - mirror_i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}