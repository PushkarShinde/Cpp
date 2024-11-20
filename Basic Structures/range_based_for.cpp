#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numbers1[] = {1, 2, 3, 4, 5};
    // Range-based for loop with array
    for (int num : numbers1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> numbers2 = {10, 20, 30, 40, 50}; 
    // Range-based for loop with vector
    for (int num : numbers2) { 
        cout << num << " "; 
    } 
    cout << endl;

    return 0;
}

/*
The iterating variable must be of the same type as the array.
*/