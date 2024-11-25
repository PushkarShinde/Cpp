#include<iostream>
using namespace std;

int main(){
    string str = "Pushkar"; 
    int len = str.length(); // tells the number of characters in a string!
    cout << len << endl;

    // str.at(0)="M"; this will produce Mutability error!
    str.at(0)='M';
    cout << str << endl;

    string stri = "I am going to be rich.";
    int find = stri.find("going"); // will tell the index from which the string we want to find, starts! 
    cout << find << endl;
    cout << stri.find("go",2) << endl; // will start checking after index 2 and avoid checking index 0 and 1!

    string str1 = stri.substr(5,9); // will copy out the string from the other string from index 5, and 9 characters!
    cout << str1 << endl;

    string str2= "This is his string!";
    int a= str2.find("his");
    int b= str2.find_first_of("his");
    int c = str2.find_last_of("his");
    cout << a << " " << b <<  " " << c << endl;

    string string1 = "The brown dog jumps over the lazy fox.";
    string string2 = "brown";
    cout << string1.find_first_of(string2) << endl;

    /*The push_back() function works the same way in strings as it does in vectors. 
    It adds a specific character to the end of the string.*/
    string my_string = "Today is Satur";
    my_string.push_back('d');
    cout << my_string << endl;

    /*Unfortunately, the push_back() function cannot add multiple characters (string) to an existing string. 
    However, the insert() function can. Unlike many functions where specifying the starting index number is optional, 
    doing so is necessary for insert() to work.
    Note that the index specification comes before the string you want the system to add.*/
    my_string.insert(my_string.length(), "day");
    cout << my_string << endl;

    string my_string1 = "Today is my birthday!";
    my_string1.pop_back(); // same as that in vectors!
    cout << my_string1 << endl;

    /*The erase() function can remove multiple characters from a string or the entire string itself. 
    To remove the whole string, leave the parentheses () empty. 
    Alternatively, you can specify one index number to remove all characters starting at that index to the end of the string. 
    Specify two index numbers to start at an index and erase a certain number of characters at that index forward.*/
    string my_string3 = "Today is my birthday!";
    my_string3.erase(my_string3.length()-1);
    cout << my_string3 << endl;

    /*The replace() function is really a combination of the erase() and insert() functions.*/
    string string4 = "Hello world!";
    string string5 = "Codio.";
    string string6 = string4.replace(6, 5, string5); // erase all characters from index 6 plus 5 chars to the right in string4
    // then insert string5 at index 6 within string4
    cout << string6 << endl;

    /*An alternative way to concatenate or combine strings is to use the append() function. 
    The append() function works in the same way as adding literal strings together using the + operator.*/
    string d = "High";
    string e = " Five";
    cout << d.append(e) << endl;

    
    string my_string = "the big brown dog";
    cout << char(toupper(my_string.at(0))) << endl;

    return 0;
}