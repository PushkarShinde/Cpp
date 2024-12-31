#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> data;
    string path="./file.txt";
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
        data.push_back(read);
        }
        file.close();
        for (int i = data.size()-1; i > 0; i--) {
        cout<< data[i] << endl;
        }
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}