#include<iostream>
using namespace std;

int main(){
    // 1d arrat
    int scores[3] = {85, 90, 75};
    cout << scores[2]<<endl; // Output: 75
    // 2d array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << matrix[1][2]; // Output: 6
}

/*
simply printing an array with it's name in 'cout', 
without the element's index will result in an output of 
the memory address of the first elements of that array, 
as the name of the arrya is the pointer to that element. 
*/