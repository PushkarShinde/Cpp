/*You are going to write a program that takes a string called my_string and returns the string 
but with a * in the place of vowels. Assume that vowels are upper and lowercase a, e, i, o, u. 
For example, if my_string = "Hello", then your program will print "H*ll*".*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  char ch;
  
  //add code below this line

  for (int i=0; i<my_string.length();i++){
    ch = my_string.at(i);
    if (ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' || 
    ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'){
          my_string[i]='*';
        }
  }
  cout << my_string << endl;

  //add code above this line
  
  return 0;
  
}