#include <iostream>
using namespace std;
int main()
{

    /*
       Loops can execute a block of code as long as a specified condition is reached.
       Loops are handy because they save time, reduce errors, and they make code more readable.
       while (condition)
       {
            // code block to be executed
        }
    */
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    return 0;
}