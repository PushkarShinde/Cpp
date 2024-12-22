/*Write a program that takes input without white spaces from a user, 
prints the first half of the string on one line, and the second half on another. 
In the case of a string that has an odd number of characters, 
the second line will have the extra character.*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
   
   int length = my_string.length();
   int mid = my_string.length()/2;
   cout << my_string.substr(0,mid)<< endl;
   cout << my_string.substr(mid)<< endl;

  //add code above this line
  
  return 0;
  
}