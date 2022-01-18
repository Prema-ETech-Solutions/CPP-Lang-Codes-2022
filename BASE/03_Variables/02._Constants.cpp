#include <iostream>
#define pi 3.14159265359


using namespace std;
int main()
{
    // When you do not want others (or yourself) to override existing variable values,
    // use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

    const int minutesPerHour = 60;
    const float PI = 3.14;
    cout << minutesPerHour << "\n";
    cout << PI<<endl;
    cout << pi;
    return 0;
}