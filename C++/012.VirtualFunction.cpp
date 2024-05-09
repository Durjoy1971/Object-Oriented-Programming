#include <iostream>
using namespace std;

/*

> C++ Virtual Functions and Function Overriding

A virtual function is a member function in the base class that we expect to redefine in derived classes.

Virtual functions are an integral part of polymorphism in C++.

*/

class Base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;

    // pointer of Base type that points to derived1
    Base *base1 = &derived1;

    // calls member function of Derived class
    base1->print();
    //! This function is overridden even when we use a pointer of Base type that points to the Derived object derived1.

    return 0;
}