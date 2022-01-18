#include <iostream>
using namespace std;
int main()
{
    /*
    The break statement can also be used to jump out of a loop.
    */
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
    cout<< "\n\n\n";
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }

    return 0;
}