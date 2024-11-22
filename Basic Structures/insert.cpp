#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> name{"Pushkar","Anuj","Alka","Kanchan"};
    name.insert(name.begin()+1,"Srushti");
    for(int i=1;i<name.size();i++){
    cout << name.at(0) << " loves "<< name.at(i)<<endl;
    }
}