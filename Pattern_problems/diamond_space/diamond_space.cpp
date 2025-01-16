#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int size = 2 * n; 

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i <= n) {
                if (j <= n - i + 1 || j > size - (n - i + 1)) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            else {
                if (j <= i - n || j > size - (i - n)) {
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