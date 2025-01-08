#include <bits/stdc++.h>
using namespace std;

int Factorial(int n) {
  if (n<=1) { //base case
    return 1;
  }
  else { //recursive case
    return n * Factorial(n - 1);
  }
}

/*
Always start with the base case when creating a recursive function. 
Each time the function is called recursively, the program should get one step closer to the base case.
*/