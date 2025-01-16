#include <iostream>
#include<vector>
using namespace std;

int main(){
    int grade[]={80,70,89,87,59};
    for (int i=0; i<(sizeof(grade)/sizeof(grade[0]));i++){
        cout << grade[i]<<" "; 
    }
    cout << endl;
    vector<int> grades{80,70,89,87,59};
    for (int i=0; i<grades.size();i++){
        cout << grades[i]<<" "; 
    }

    //iterating a vector with Enhanced For Loop
    for (auto i : grades) { //can use int or auto for iterating variable!
    cout << i << " ";
    }

    // iterating a vector with iterator pointer
    vector<int>::iterator it;
    for(it=grades.begin();it!=grades.end();it++){ // iterator pointer!
        cout << *it<< " ";
    }

    // iterating a vector in reverse
    vector<int>::reverse_iterator ite;
    for(auto ite=grades.rbegin(); ite!=grades.rend();it++){
        cout << *it<< " ";
    }
}