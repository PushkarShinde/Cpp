#include<iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0) return 0;
    int left = 1, right = x;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid == x / mid) {
            return mid;
        } else if (mid < x / mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right; // as the  loop will break only when (right>left)!
}

int main(){
    // int x=2147395600;
    int x=8;
    cout<< mySqrt(x);
    return 0;
}