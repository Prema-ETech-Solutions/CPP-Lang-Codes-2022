#include <iostream>
using namespace std;
/*
    C++ What is OOP?
    OOP stands for Object-Oriented Programming.
    Procedural programming is about writing procedures or functions that perform operations on the data,
    while object-oriented programming is about creating objects that contain both data and functions.

    Object-oriented programming has several advantages over procedural programming:
    OOP is faster and easier to execute
    OOP provides a clear structure for the programs
    OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain,
    modify and debug
    OOP makes it possible to create full reusable applications with less code and shorter development time
    Tip: The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code.
    You should extract out the codes that are common for the application,
    and place them at a single place and reuse them instead of repeating it.
*/

/*
    C++ Classes/Objects
    C++ is an object-oriented programming language.
    Everything in C++ is associated with classes and objects,
    along with its attributes and methods. For example: in real life, a car is an object.
    The car has attributes, such as weight and color, and methods, such as drive and brake.


    Attributes and methods are basically variables and functions that belongs to the class.
    These are often referred to as "class members".
    A class is a user-defined data type that we can use in our program,
    and it works as an object constructor, or a "blueprint" for creating objects.
*/

class MyClass
{                    // The class
public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
};

/*
    Create an Object
    In C++, an object is created from a class.
    We have already created the class named MyClass, so now we can use this to create objects.
    To create an object of MyClass, specify the class name, followed by the object name.
    To access the class attributes (myNum and myString), use the dot syntax (.) on the object:
*/

int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}