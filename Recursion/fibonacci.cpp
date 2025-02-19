#include <bits/stdc++.h>
using namespace std;

/**
* @param n, integer
* @return Fibonacci number of n, integer
*/
long long Fibonacci(long n) {
  static vector<long long> v = {0, 1};

  if (n < v.size())
    return v.at(n);
  else {
    v.push_back(Fibonacci(n - 1) + Fibonacci(n - 2));
    return v.at(n);
  }
}

int main() {
  int fib_length = 50;
    for (int i = 0; i < fib_length; i++) {
    cout << Fibonacci(i) << " ";
  }
  return 0;
}