#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int>mystack;
    mystack.push(24);
    mystack.push(12);
    mystack.push(31);
    mystack.push(26);

    while(!mystack.empty()){
        cout << mystack.top()<<" ";
        mystack.pop();
    }
    return 0;
}