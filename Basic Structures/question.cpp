/*You are going to write a program that takes a string and prints 
 a new string where all of the uppercase letters become lowercase,
 and the lowercase letters become uppercase.*/

#include <iostream>
using namespace std;

int main(){
    string original_string = "THE BROWN DOG JUMPS over the lazy fox!";
    string modified_string;
    // An enhanced for loop is the easiest way to iterate through the original_string.
    for(char a: original_string){
        if (islower(a)){
            modified_string += toupper(a);
        }
        else if (isupper(a)){
            modified_string += tolower(a);
        } else {
            // Directly add non-alphabetical characters (e.g., spaces, punctuation)
            modified_string += a;
        }
    }
    cout << "The original string is: " + original_string << endl;
    cout << "The modified string is: " + modified_string << endl;
    return 0;
}