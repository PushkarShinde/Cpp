#include <bits/stdc++.h>
using namespace std;

int main() {
    string path ="./Burma.txt";
    try{
        ifstream file;
        string read;
        char ch;
        file.open(path);
        if(!file){
            throw runtime_error("File failed to open!");
        }
        int characters=0; 
        int lines=0;
        while(getline(file, read)){
            lines++;
            characters+=read.length();
        }
        file.close();
        cout << lines << " line(s)\n" << characters << " character(s)\n";
    }
    catch(exception& e){
        cerr << e.what() << endl;
    }

  //add code above this line
  
  return 0;
  
}