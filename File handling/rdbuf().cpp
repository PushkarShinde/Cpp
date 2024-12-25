#include <iostream>
#include <fstream>
using namespace std;
/*
The getline() and get() functions require a variable to store its content. 
However, then the variable becomes useful and simply takes up extra memory. 
When a file is opened, its content is buffered or stored in memory until it gets closed. 
During this buffering stage, you can use the function rdbuf() to read the content of the file without having to create any variables.
*/
int main() {
    string path = "./sample1.txt";
    try{
        string read; // a string variable to store the string that we need to read from the file.
        ifstream file;
        file.open(path);
        if(!file){
            throw runtime_error("The file failed to open!");
        }
        cerr<< file.rdbuf(); // read the buffered content
        file.close();
        cerr<< "File succesfully opened and closed!"<< endl;
    }
    catch(exception& e){
        cerr<< e.what() << endl;
    }
    return 0;
}