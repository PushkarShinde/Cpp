#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,string>m;
    m.insert({1,"Pushkar"}); // explicite insertion
    m[3]="Pushkar"; // kuch zyada hi direct insertion
    m.emplace(2,"Anuj"); // direct insertion
    for(auto n: m){
        cout << n.first<< " - "<<n.second<< endl;
    }
    // also we can assign an iterator to our map, by:
    map<int, string>::iterator it= m.begin();
    while(it!=m.end()){
        cout << "Key: "<< it->first <<", Value: "<< it->second<<endl;
        it++;
    }
    return 0;
}