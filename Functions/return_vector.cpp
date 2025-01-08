#include <bits/stdc++.h>
using namespace std;

vector<int>funct(int x, int y, int z){
    vector<int>a;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    return a; 
}

int main() {
    int a=0,b=1,c=2;
    vector<int>newvec=funct(a,b,c);
    cout << newvec[0]<<" "<<newvec[1]<<" "<<newvec[2];
    return 0;
}