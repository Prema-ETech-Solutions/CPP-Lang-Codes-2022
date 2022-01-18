#include <iostream>
using namespace std;
int main()
{
    /*
        Use the else if statement to specify a new condition if the first condition is false.
        if (condition1)
        {
            // block of code to be executed if condition1 is true
        }
        else if (condition2)
        {
            // block of code to be executed if the condition1 is false and condition2 is true
        }
        else
        {
            // block of code to be executed if the condition1 is false and condition2 is false
        }
    */

    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    // Outputs "Good evening."
    return 0;
}