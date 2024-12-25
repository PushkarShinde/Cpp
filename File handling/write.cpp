#include <bits/stdc++.h>
using namespace std;

int main() {
    string path = "./practice1.txt";

    try {
    ofstream file;
    file.open(path);
    if (!file) {
        throw runtime_error("File failed to open.");
    }
    file << "Hello there"; // writing content simply using insertion operator '<<'.
    file.close();
    
    ifstream stream;
    string read;
    stream.open(path);
    while (getline(stream, read)) {
        cout << read << endl;
    }
    stream.close();
    }
    
    catch (exception& e) { //catch error
    cerr << e.what() << endl;
    }
    return 0;
}