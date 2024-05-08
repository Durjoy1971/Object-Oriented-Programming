#include <iostream>
using namespace std;

class Room
{
public:
    int length;
    int breadth;
    int height;

    int calculate_area()
    {
        return length * breadth;
    }

    int calculate_volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    // create object of Room class
    Room A1, B1;

    // assign values to data members
    A1.breadth = 30;
    A1.height = 20;
    A1.length = 40;

    // assign values to data members
    B1.breadth = 50;
    B1.height = 30;
    B1.length = 50;

    // calculate and display the area of Room A1 and volume of room B1
    cout << "Area of Room A1 : " << A1.calculate_area() << endl;
    cout << "Volume of Room B1 : " << B1.calculate_volume() << endl;

    return 0;
}

/*

* A class is a blueprint for the object. We can think of a class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc - we build the house based on these descriptions. The house is the object.

* A class is defined in C++ using the keyword class followed by the name of the class.

* When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, we need to create objects.

* We can access the data members and member functions of a class by using a . (dot) operator.

*/