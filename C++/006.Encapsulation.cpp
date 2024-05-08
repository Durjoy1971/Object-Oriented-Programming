#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int length)
    {
        this->length = length;
    }

    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int getArea()
    {
        return length * breadth;
    }
};

int main()
{

    Rectangle rectangle1;

    rectangle1.setLength(8);
    rectangle1.setBreadth(6);

    cout << "Length = " << rectangle1.getLength() << endl;
    cout << "Breadth = " << rectangle1.getBreadth() << endl;

    cout << "Area = " << rectangle1.getArea();

    return 0;
}

/*

* Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

! Bundling similar data members and functions inside a class together also helps in data hiding.

* In general, encapsulation is a process of wrapping similar code in one place.

* In C++, encapsulation helps us keep related data and functions together, which makes our code cleaner and easy to read.

! Data hiding is a way of restricting the access of our data members by hiding the implementation details. Encapsulation also provides a way for data hiding.

*/