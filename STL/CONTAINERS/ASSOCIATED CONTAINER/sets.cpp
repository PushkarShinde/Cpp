#include <iostream>
#include <set>
using namespace std;

int main(){
    std::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a){
        cout << str << ' ';
    }
    cout << '\n';


    // set sorted in descending order
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);

    for (auto i : s1) {
        cout << i << ' ';
    }
    return 0;
}