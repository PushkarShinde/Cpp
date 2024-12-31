#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<string> data;
    string path ="./tab.csv";   
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, '\t')) {
                data.push_back(read);
            }
        }
        file.close();
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    int max=-1; // Start with a very small age
    string name;
    for (size_t i = 1; i < data.size(); i += 3) {
        int age = stoi(data[i]); // Convert the age to an integer
        if (age >= max) {
            max = age;
            name = data[i - 1]; // Name is stored just before the age
        }
    }
    cout << "The oldest person is "<< name<<".";
    return 0;
}