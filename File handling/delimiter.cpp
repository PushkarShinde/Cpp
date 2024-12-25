#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path = "sample1.txt";

    try {
    ifstream file;
    string read;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    while (getline(file, read, ',')) { //specify comma as delimiter
        cout << read;
    }
    file.close();
    }
    
    catch (exception& e) {
    cerr << e.what() << endl;
    }
    return 0;
}