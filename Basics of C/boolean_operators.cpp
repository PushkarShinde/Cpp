/*
Boolean Operators
1. AND (&&)
2. OR (||)
3. NOT (!)
4. XOR (^)
--------------------------------------
Note: Arithematic operations are always performed before Boolean operations!
--------------------------------------
Order of preference:
1. Not
2. And 
3. Or
*/
#include <iostream>

int main() {
    bool a = false;
    bool b = true;
    bool c = false;

    // Without parentheses
    bool result = !a && b || c;
    std::cout << "Result without parentheses: " << result << std::endl;

    // With parentheses for clarity
    bool resultWithParentheses = (!a && b) || c;
    std::cout << "Result with parentheses: " << resultWithParentheses << std::endl;

    return 0;
}
