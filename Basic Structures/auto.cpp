#include <iostream>
#include <vector>
using namespace std;
/*
You can also use the auto keyword to let the compiler 
infer the type of the elements in the collection
*/
int main() {
    vector<int> numbers = {100, 200, 300, 400, 500};

    // Range-based for loop with auto
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}