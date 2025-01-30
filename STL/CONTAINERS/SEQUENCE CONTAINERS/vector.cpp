#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>vec{1,2,3,4,5,6,6,7,7};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){ // forward iteration
        cout << *it<<" ";
    }
    cout << endl;
    vector<int>::reverse_iterator rit;
    for(rit=vec.rbegin();rit!=vec.rend();rit++){ // reverse iteration
        cout<<*rit<<" ";
    }
    return 0;
}