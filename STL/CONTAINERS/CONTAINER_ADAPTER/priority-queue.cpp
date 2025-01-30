#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int>pq; //  max heap!!
    pq.push(24);
    pq.push(12);
    pq.push(31);
    pq.push(26);
    while(!pq.empty()){
        cout << pq.top()<< " ";
        pq.pop();
    }
    cout << endl;
    // output: 31 26 24 12 

    // min heap!!
    // priority_queue<int, vector<int>,greater<int>>minpq;
    priority_queue<int, vector<int>,greater<int>>minpq;
    minpq.push(24);
    minpq.push(12);
    minpq.push(31);
    minpq.push(26);
    while(!minpq.empty()){
        cout << minpq.top()<< endl;
        minpq.pop();
    }
    return 0;
}