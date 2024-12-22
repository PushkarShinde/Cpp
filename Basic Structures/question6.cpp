/*Write a program that captures input from the user and swaps the letters two at a time in the string. 
The first two characters change places, the third and fourth characters change places, etc. 
Assume that the program will only take an even number of characters, otherwise, there will be an error.*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

  char *c1, *c2, temp;
  for(int i=0; i<my_string.length();i+=2){
    c1 = &(my_string.at(i));
    c2 = &(my_string.at(i+1));
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
  }
  cout << my_string;

  //add code above this line
  
  return 0;
  
}