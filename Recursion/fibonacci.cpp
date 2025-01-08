#include <bits/stdc++.h>
using namespace std;

/**
* @param n, integer
* @return Fibonacci number of n, integer
*/
int Fibonacci(int n) {
  if (n <= 1) {
    return n;
  } 
  else {
    return(Fibonacci(n-1) + Fibonacci(n-2));
  }
}

int main() {
  int fibonacci_length = 4;
  for (int i = 0; i < fibonacci_length; i++) {
    cout << Fibonacci(i) << " ";
  }
  return 0;
}