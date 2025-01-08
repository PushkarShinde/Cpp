#include <bits/stdc++.h>
using namespace std;

/**
 * This function adds 5 to an integer
 * 
 * @param num An integer
 * @return The integer added to 5
 */
int AddFive(int num) {
  return num + 5;
}

int main() {
  AddFive(10);
  return 0;
}

/*
Key Points About return:
1. Return with a Value:
  -Used in functions that have a non-void return type.
  -The value is returned to the calling function.
2. Return Without a Value: 
  -Used in void functions to terminate the function early.
*/