#include <iostream>
// Include the string library
#include <string>
using namespace std;
int main()
{
    // A string variable contains a collection of characters surrounded by double quotes:

    string Var = "Hello";
    cout << Var << endl;

    /*
    String Concatenation
    The + operator can be used between strings to add them together to make a new string.
    This is called concatenation:
    */
    string firstName = "Hello";
    string lastName = "World";
    string fullName = firstName + lastName;
    cout << fullName << "\n\n\n";

    fullName = "";
    fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // Append
    // A string in C++ is actually an object,
    // which contain functions that can perform certain operations on strings. For example,
    // you can also concatenate strings with the append() function:
    fullName = "";
    fullName = firstName.append(lastName);
    cout << fullName << "\n\n\n";

    /*
        Numbers and Strings
        If you add two numbers, the result will be a number:
    */

    int x = 10;
    int y = 20;
    int z = x + y;

    cout << "Value Of Z - " << z << endl;

    string a = "10";
    string b = "20";
    string C = a + b;
    cout << "Value Of C - " << C << endl
         << endl;

    /*
        String Length
        To get the length of a string, use the length() function:
    */
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;

    /*
        Tip: You might see some C++ programs that use the size() function to get the length of a string.
        This is just an alias of length().
        It is completely up to you if you want to use length() or size():
    */
    cout << "The length of the txt string is: " << txt.size() << endl
         << "\n\n\n";

    /*
        Access Strings
        You can access the characters in a string by referring to its index number inside square brackets [].
        This example prints the first character in myString:
    */
    string myString = "Hello";
    cout << myString[0] << "\n";
    cout << myString[1] << "\n";
    cout << myString[2] << "\n";
    cout << myString[3] << "\n";
    cout << myString[4] << "\n\n";

    myString[0] = 'J';
    cout << myString;
    return 0;
}