#include <iostream>
using namespace std;
/*
    To define a function outside the class definition,
    you have to declare it inside the class and then define it outside of the class.
    This is done by specifiying the name of the class,
    followed the scope resolution :: operator,
    followed by the name of the function:
*/
class MyClass
{                    // The class
public:              // Access specifier
    void myMethod(); // Method/function declaration
};
/*
Parameters
You can also add parameters:
*/
class Car
{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

// Method/function definition outside the class
void MyClass::myMethod()
{
    cout << "Hello World!";
}

int main()
{
    MyClass myObj;    // Create an object of MyClass
    myObj.myMethod(); // Call the method

    Car myObj1;                // Create an object of Car
    cout << myObj1.speed(200); // Call the method with an argument
    return 0;
}