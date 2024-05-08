#include <iostream>
using namespace std;

class Wall
{
private:
    double *length;
    double *height;

public:
    // initialize variables with parameterized constructor
    Wall(double length = 1.0, double height = 1.0)
        : length{new double{length}}, height{new double{height}} {}

    // copy constructor with a Wall object as parameter and copies data of the obj parameter
    Wall(const Wall &obj)
        : length{new double{*(obj.length)}}, height{new double{*(obj.height)}} {}
    // is the initializer list that copies the data to new memory locations and initializes the length and height pointers accordingly.

    void setLength(double len)
    {
        *length = len;
    }

    double calculateArea()
    {
        return *length * *height;
    }

    // destructor to deallocate memory
    ~Wall()
    {
        delete length;
        delete height;
    }
};

int main()
{
    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // copy contents of wall1 to wall2 by copy constructor
    Wall wall2 = wall1;

    // change the length of wall2
    wall2.setLength(11.5);

    // print areas of wall1 and wall2
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();

    return 0;
}

/*

* A destructor is a special member function that is called automatically when an object goes out of scope or when we delete the object with the delete expression.

* In C++, a destructor has the same name as that of the class, and it does not have a return type. ~ (backtick) precedes the identifier to indicate destructor.


*/