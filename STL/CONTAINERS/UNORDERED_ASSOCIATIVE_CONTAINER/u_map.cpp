// C++ program to demonstrate 
// functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

// Driver code
int main()
{
  // Declaring umap to be of 
  // <string, int> type key 
  // will be of STRING type 
  // and mapped VALUE will
  // be of int type
  unordered_map<string, int> umap;

  // inserting values by using [] operator
  umap["GeeksforGeeks"] = 10;
  umap["Practice"] = 20;
  umap["Contribute"] = 30;

  // Traversing an unordered map
  for (auto x : umap)
    cout << x.first << " " << x.second << endl;
}