#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int>fdeque{1,2,3,4,5,66,7,7,5};
    for (auto it =fdeque.begin();it!=fdeque.end();it++){ 
        cout<<*it<<" ";
    }
    return 0;
}