#include <iostream>
using namespace std;
// Inside the function, you can add as many parameters as you want:
void myFunction(string fname, int age)
{
    cout << fname << " Refsnes. " << age << " years old. \n";
}

int main()
{
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    return 0;
}