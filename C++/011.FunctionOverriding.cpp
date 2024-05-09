#include <iostream>
using namespace std;

/*

> C++ Shadowing Base Class Member Function

As we know, inheritance is a feature of OOP that allows us to create derived classes from a base class. The derived classes inherit features of the base class.

* Suppose we define the same function in both the base class and the derived class. Now, when we call this function using the object of the derived class, the function of the derived class executes.

! Here, the member function in the derived class shadows the member function in the base class. This is called shadowing the base class member function

*/

// C++ program to demonstrate shadowing base class member function

class Base
{
public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

void First_Topic()
{
    Derived derived1;
    derived1.print();
}

/*

Here, the same function print() is defined in both Base and Derived classes.
So, when we call print() from the Derived object derived1, the print() from Derived is executed by shadowing the function in Base.
! Had we called the print() function from an object of the Base class, the function would not have been shadowed

*/

/*

> Access Shadowed Function in C++

>> To access the shadowed function of the base class, we use the scope resolution operator ::.

We can also access the shadowed function by using a pointer of the base class to point to an object of the derived class and then calling the function from that pointer.

*/

void Second_Topic()
{
    Derived derived1;
    derived1.Base::print();
}

//! We can also call the base class member function inside the Derived class itself.
//* Using Base::print() in print() of derived class.

int main()
{
    cout << "1 ------\n";
    First_Topic();
    cout << "2 ------\n";
    Second_Topic();

    return 0;
}