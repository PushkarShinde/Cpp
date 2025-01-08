/**
 * This is an example of C++ program documentation.
 *
 * @author  John Doe
 * @version 1.0
 */

#include <iostream>
using namespace std;

/**
 * Greets the user twice.
 *
 * @param   None (this function does not take parameters).
 * @return  None (this function does not return any value).
 */
void GreetTwice() {
    cout << "Hello" << endl;
    cout << "Hello" << endl;
}

int main() {
    GreetTwice();
    return 0;
}

/*
Key Documentation Tags Explained:
Tag	        Purpose
@param	    Explains the parameters used by the function.
@return	    Describes the return value of the function (if any).
@author	    Indicates who wrote or developed the function.
@version	Specifies the current version of the function or program.

*/