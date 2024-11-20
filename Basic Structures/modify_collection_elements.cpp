#include <iostream>
#include <vector>
using namespace std;
/*
To modify the elements of the collection during iteration, use a reference (&)
*/
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Range-based for loop with reference
    for (int &num : numbers) {
        num *= 2; // Double each element
        cout << num << " ";
    }
    cout << endl;
 
    return 0;
}