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
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                data.push_back(read);
            }
        }
        file.close();
        int c1=0,c2=0,c3=0,c4=0;
        for (int i = 0; i < data.size(); i++) {
        if (i % 4 == 0) {
            c1+=stoi(data.at(i));
        }
        else if (i % 4 == 1) {
            c2+=stoi(data.at(i));
        }
        else if (i % 4 == 2) {
            c3+=stoi(data.at(i));
        }
        else {
            c4+=stoi(data.at(i));
        }
        }
        cout <<c1/3<<" "<<c2/3<<" "<<c3/3<<" "<<c4/3;
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    return 0;
}