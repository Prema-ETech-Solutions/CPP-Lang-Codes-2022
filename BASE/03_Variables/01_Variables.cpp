#include <iostream>
using namespace std;
/*
    Variables are containers for storing data values.

    In C++, there are different types of variables (defined with different keywords), for example:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
*/

int main()
{

    int myNum = 5;            // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';      // Character
    string myText = "Hello";  // String (text)
    bool myBoolean = true;    // Boolean (true or false)


    cout<<"My Num "<<myNum<<endl;
    cout<<"My Float "<<myFloatNum<<endl;
    cout<<"My Letter "<<myLetter<<endl;
    cout<<"My Text "<<myText<<endl;
    cout<<"My Bool "<<myBoolean<<endl;
    return 0;
}

/*  
    All C++ variables must be identified with unique names.
    These unique names are called identifiers.
    Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

    Good
    int minutesPerHour = 60;
    
    OK, but not so easy to understand what m actually is
    int m = 60;


    The general rules for naming variables are:
    
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
*/