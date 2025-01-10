#include <bits/stdc++.h>
using namespace std;

int main() {
  
    //add code below this line
    
    string s = "I am a string";
    cout << "s is a: " << typeid(s).name() << endl;
    // C++ says that the class or type of s is NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE (which is a string).
    cout << boolalpha << s.empty() << endl;
    cout << s.length() << endl;
    s.push_back('s');
    cout << s << endl;
    int arr[1];
    cout << "arr is a: " << typeid(arr).name() << endl; 
    // The resulting output says arr is a: A1_i. 'A1' stands for one dimensional array and 'i' stands for integer.

    //add code above this line
    
  return 0;
  
}
