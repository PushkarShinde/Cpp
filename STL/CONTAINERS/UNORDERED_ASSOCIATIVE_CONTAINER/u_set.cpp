#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string>us;

    us.insert("code");
    us.insert("in");
    us.insert("c++");
    us.insert("is");
    us.insert("fast");
    us.insert("slow");

    unordered_set<string>::iterator i=us.begin();
    while(i!=us.end()){
        cout << *i <<" ";
        i++;
    }
    cout << '\n';

    string key = "slow";

    // find returns end iterator if key is not found,
    // else it returns iterator to that key

    if (us.find(key) == us.end())
        cout << key << " not found" << endl << endl;
    else
        cout << "Found " << key << endl << endl;

    key = "c++";
    if (us.find(key) == us.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;

    return 0;
}