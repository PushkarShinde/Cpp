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
    vector<int> grades{85, 95, 48, 100, 92};

    for (auto i : grades) { //can use int or auto for iterating variable!
    cout << i << " ";
    }
}