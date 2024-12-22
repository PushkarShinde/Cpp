#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path = "./sample1.txt";
    try{
        string read; // a string variable to store the string that we need to read from the file.
        ifstream file;
        file.open(path);
        if(!file){
            throw runtime_error("The file failed to open!");
        }
        getline(file,read); // two parameters; the first is the input stream to read from and the second is a string to store what is read.
        cerr<< read << endl;
        file.close();
        cerr<< "File succesfully opened and closed!"<< endl;
    }
    catch(exception& e){
        cerr<< e.what() << endl;
    }
    return 0;
}

/*
You’ll notice that sometimes the system will print "File successfully opened and closed." first and then "Fusce convallis metus id felis luctus adipiscing."  was printed. 
This is due to cerr being unbuffered, which means it gets printed immediately. 
cout is buffered, so it will store its content into memory before printing, which explains the delay.
*/

/*
The reason why only one line of text was printed is because getline() only reads up until a newline character is reached. 
To continue to read more lines of text, wrap getline() inside a while loop.
*/