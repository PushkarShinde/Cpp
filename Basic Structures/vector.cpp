#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers; // Creates an empty vector of integers 
    vector<int> numbers1 = {1, 2, 3, 4, 5}; // Vector with initial values
// push_back() function adds elements to the end of the vector.
    numbers.push_back(10); 
    numbers.push_back(20); 
    numbers.push_back(30);
// access elements using the index operator [].
    cout << "First element: " << numbers[0] << endl; // Output: 10
// pop_back() function removes the last element.
    numbers.pop_back(); // Removes the last element (30)

// Common vector functions:
// 1. Size: Returns the number of elements in the vector
    cout << "Size: " << numbers.size() << endl; 
// 2. capacity: Returns the number of elements the vector can hold without reallocating
    cout << "Capacity: " << numbers.capacity() << endl; 
// 3. empty:
    if (numbers.empty()) {
    cout << "The vector is empty." << endl;
    }
// 4. clear: Removes all elements from the vector
    numbers.clear();
// 5. insert: Inserts 15 at the second position
    numbers.insert(numbers.begin() + 1, 15);
// 6. erase: Removes the element at the second position
    numbers.erase(numbers.begin() + 1);

    return 0;
}

/*
NOTE:
1. Vectors are dynamic arrays provided by the STL.
2. They can grow and shrink automatically.
3. Provide random access to elements.
4. Include built-in functions for common operations.
*/