#include <iostream>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
/*
If you need to further break down your tokens, you can use a nested loop to iterate through those tokens to break them down even further. 
For example, if your list of names was organized like this:
Jason Seymore 
Jackie Simmons 
Jennifer Small 
Jane Smith 
John Smith
Then using the code in token.cpp will cause issues since it only takes a white space as a delimiter, not a newline. 
To include both the newline and white space as delimiters, you can use a stringstream data type (#include <sstream>) to create another string stream off of the string variable read. 
The first getline() function will separate the stream using a newline as the delimiter and the second getline() will use a white space as a delimiter.
*/
int main() {
    string path ="./names2.txt";
    string read, last_name="Smith";
    int count=0;
    ifstream file;
    vector<string>names;
    file.open(path);
    if(!file){
        throw runtime_error("File failed to open!");
    }
    while(getline(file,read,'\n')){ //newline delimiter
        stringstream ss(read); //create a string stream of read
        while(getline(file,read,' ')){ //white space delimiter
            names.push_back(read);
        }
    }
    file.close();
    for(int i=0;i<names.size();i++){
        if(names.at(i)==last_name){
            count++;
        }
    }
    cout<< "There are "<< count<< " people with last name 'Smith'.";
    return 0;
}