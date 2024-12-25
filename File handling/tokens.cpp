#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string path ="./names.txt";
    string read, last_name="Smith";
    int count=0;
    ifstream file;
    vector<string>names;
    file.open(path);
    if(!file){
        throw runtime_error("File failed to open!");
    }
    while(getline(file,read,' ')){
        names.push_back(read);
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