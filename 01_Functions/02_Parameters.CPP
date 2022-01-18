#include <iostream>
using namespace std;
/*
    Parameters and Arguments
    Information can be passed to functions as a parameter.
    Parameters act as variables inside the function.
    Parameters are specified after the function name,
    inside the parentheses. You can add as many parameters as you want,
    just separate them with a comma:
*/
void myFunction(string fname)
{
    cout << fname << " Refsnes\n";
}
int main()
{
    /*
        The following example has a function that takes a string called fname as parameter.
        When the function is called, we pass along a first name,
        which is used inside the function to print the full name:
    */
    myFunction("AJ");
    myFunction("RJ");
    myFunction("MJ");
    return 0;
}