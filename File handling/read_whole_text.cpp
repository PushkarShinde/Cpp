#include <iostream>
#include <fstream>
using namespace std;

/*
The reason why only one line of text was printed is because getline() only reads up until a newline character is reached. 
To continue to read more lines of text, wrap getline() inside a while loop.
*/

int main() {
    string path = "./sample1.txt";
    try{
        string read; // a string variable to store the string that we need to read from the file.
        char ch;
        ifstream file;
        file.open(path);
        if(!file){
            throw runtime_error("The file failed to open!");
        }
        // while(getline(file,read)){
        //     cerr<< read << endl;
        // } 

        /*The get() function in the new code works similarly to the getline() function. 
        However, get() reads character by character instead of by strings.*/
        
        while (file.get(ch)) {
            cerr << ch; // cout can also be used!
        }
        
        file.close();
        cerr<< "File succesfully opened and closed!"<< endl;
    }
    catch(exception& e){
        cerr<< e.what() << endl;
    }
    return 0;
}