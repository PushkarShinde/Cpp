#include <bits/stdc++.h>
using namespace std;

class ComicBookCharacter {
  public:
    string name;
    int age;
    string type;
};

int main() {
    ComicBookCharacter a;
    a.name = "Calvin";
    a.age = 6;
    a.type = "human";
        
    ComicBookCharacter b = a;
    a.name = "Hobbes";
        
    cout << "Object a name: " << a.name << endl;
    cout << "Object a age: " << a.age << endl;
    cout << "Object a type: " << a.type << endl;
    cout << "Object b name: " << b.name << endl;
    cout << "Object b age: " << b.age << endl;
    cout << "Object b type: " << b.type << endl;
    return 0;
}

/*
output:
Object a name: Hobbes
Object a age: 6
Object a type: human
Object b name: Calvin
Object b age: 6
Object b type: human
*/