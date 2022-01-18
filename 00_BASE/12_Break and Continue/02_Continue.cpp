#include <iostream>
using namespace std;
int main()
{
    /*
        The continue statement breaks one iteration (in the loop),
        if a specified condition occurs,
        and continues with the next iteration in the loop
    */
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
    cout << "\n\n";
    int i = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
    return 0;
}