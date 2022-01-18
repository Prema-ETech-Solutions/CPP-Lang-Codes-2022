#include <iostream>
using namespace std;
/*
    The void keyword, used in the previous examples,
    indicates that the function should not return a value.
    If you want the function to return a value,
    you can use a data type (such as int, string, etc.) instead of void,
    and use the return keyword inside the function:
*/
int myFunction(int x)
{
    return 5 + x;
}

int main()
{
    cout << myFunction(3);
    return 0;
}