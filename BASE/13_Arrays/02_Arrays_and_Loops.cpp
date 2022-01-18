#include <iostream>
using namespace std;
int main()
{
    /*
        You can loop through the array elements with the for loop.
        The following example outputs all elements in the cars array:
    */
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\n";
        return 0;
    }
    
// The following example outputs the index of each element together with its value:
    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << cars[i] << "\n";
    }
}
