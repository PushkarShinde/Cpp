#include <iostream>
#include <fstream>
using namespace std;

int main() {

string path = "../Resources/Loops-For-Cpp.pdf"; // setting file path
ifstream file; // creating a read-only data stream
file.open(path); 
if(file.is_open()){ // check if the file exists
  cout<< "File succesfully opened." << endl;
}
else if(!file.is_open()){
  cout << "File failed to open." << endl;
}
file.close(); // close the file

try { //try these actions
  if (!file) {
    throw runtime_error("File failed to open."); //throw error
  }
  file.close();
  cerr << "File successfully opened and closed." << endl;
}
  
catch (exception& e) { //catch error
  cerr << e.what() << endl;
}
  
  return 0;
  
}
