#include <bits/stdc++.h>
using namespace std;

void FindAndReplace(string& lines, string burma, string myanmar) {
  // Get the first string occurrence
  size_t pos = lines.find(burma);
  // Repeat till end of string
  while( pos != string::npos) {
    // Replace this occurrence of Sub String
    lines.replace(pos, burma.size(), myanmar);
    // Get the next occurrence from the current position
    pos = lines.find(burma, pos + myanmar.size());
  }
}

int main() {
  string path="./Burma.txt";        
  
  //add code below this line
  try{
    ifstream file;
    file.open(path);
    if(!file){
      throw runtime_error("file failed to open!");
    }
    string content;
    string line;
    // Read the entire file content
    while (getline(file, line)) {
        content += line + "\n";
    }
    file.close();
    FindAndReplace(content,"Burma","Myanmar");
    cout << content << endl;
  }
  catch(exception& e){
    cerr << e.what() << endl;
  }
  
  //add code above this line
  
  return 0;
  
}
