#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int>myq;
    myq.push(24);
    myq.push(12);
    myq.push(31);
    myq.push(26);

    while(!myq.empty()){
        cout << myq.front()<< endl;
        myq.pop();
    }
    return 0;
}