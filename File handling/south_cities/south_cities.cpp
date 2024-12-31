#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> data;
    string path ="./longitute.csv";
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
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }

    string cities;
    cout << "The following cities are in the Southern Hemisphere: ";
        
    for (int i = 6; i < data.size(); i+=4) {
        if (stoi(data.at(i)) < 0) {
        cities += (data.at(i - 2) + ", ");
        }
    }
    // Since the last city’s name will end in a period instead of comma and space, 
    // we cannot use the pop_back() function to remove the last two characters. 
    // Then append a period to the string variable.
    cities.pop_back();
    cities.pop_back();
    cities += ".";

    return 0;
}