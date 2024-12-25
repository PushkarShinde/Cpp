#include <bits/stdc++.h>
using namespace std;

int main() {
    string path = "./practice1.txt";
    try{
        ofstream file;
        file.open(path);
        if(!file){
            throw runtime_error("File failed to open!");
        }
        string txt1="Hi! ";
        string txt2="I am Pushkar, ";
        string txt3="I like reading, playing chess and swimming. ";
        file << txt1+txt2<< "\n" << txt3;
        cerr<< "File succesfully written to!\n";
        file.close();

        ifstream stream;
        stream.open(path);
        string read;
        if(!file){
            throw runtime_error("File failed to open!");
        }
        while(getline(stream,read)){
            cerr << read << endl;
        }
        stream.close();
    }
    catch(exception& e){
        cerr<< e.what()<< endl;
    }
    return 0;
}