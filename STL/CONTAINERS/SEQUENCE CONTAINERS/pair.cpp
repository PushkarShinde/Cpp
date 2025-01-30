#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string>p={1,"Pushkar"};// group of two types of data!
    cout<<p.second<<endl;
    pair<int,pair<int,string>>q={24,{1,"Pushkar"}}; // pair of pair!
    cout << q.second.second <<endl;

    vector<pair<int,string>>r; // vector of pairs;
    r.push_back({1,"Anuj"});
    r.emplace_back(2,"Pushkar"); // 
    return 0;
}