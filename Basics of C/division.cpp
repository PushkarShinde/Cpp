#include<iostream>
using namespace std;
    /*
    for arithematic order of preferance: 
    P = Product
    E = Exponents (powers and squares) 
    // no actual operators are used for them, built-in functions are used instead from #include<cmath> library.
    M = Multiplication
    D = Division
    A = Addition
    S = Subtraction
    is used!
    */ 

int main (){
    int a=10;
    double b=3.5;
    double c=0;
    printf("%f\n",a/b);
    cout << a/c << endl; // output: 'inf'
    // if 'c' was integer, output: error!
    return 0;
}
