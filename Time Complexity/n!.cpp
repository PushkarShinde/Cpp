#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5; // Change this to any number
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
