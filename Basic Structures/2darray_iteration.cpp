#include<iostream>
#include<vector>
using namespace std;

int main(){
    int digits[3][3] = { {1, 2, 3},
                        {4, 5, 6}, 
                        {7, 8, 9} };

    int row = sizeof(digits) / sizeof(digits[0]);
    int col = sizeof(digits[0]) / sizeof(int);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
            cout << digits[i][j] << endl;
            }
            else {
            cout << digits[i][j] << " ";
            }
        }
    }
    cout<< endl;

// Enhanced for loop!
    for (auto &i : digits) {
        for (int j : i) {
            if ((j == 3) | (j == 6) | (j == 9)) {
            cout << j << endl;
            }
            else {
            cout << j << " ";
            }
        }
    }
}