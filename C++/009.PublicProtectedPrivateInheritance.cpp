// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    // function to access private member
    int getPVT()
    {
        return pvt;
    }
};

//> Public Inheritance
class PublicDerived : public Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        //! int c = pvt; || Not Possible
        return prot; //* protected element can be access from derived class
    }
};

//> Protected Inheritance || all public and protected member variable and function will be inherited as protected
//! For formally, prot and pub and getPVT() will work as a protected modifiers into derived class.

class ProtectedDerived : protected Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        return prot;
    }

    // function to access public member from Base
    int getPub()
    {
        return pub;
    }

    //! int a = getPVT(); || accessible
};

//> : private Base; we can also inherit base class.
//! In that case, all public and protected member variable and function will be turned into private modifiers into derived class.

int main()
{

    //> Public Inheritance
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    //! object1.prot || Not Possible
    //! object1.pvt || Not Possible

    //> Protected Inheritance
    ProtectedDerived object2;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object2.getProt() << endl;
    cout << "Public = " << object2.getPub() << endl;
    //! object2.getPVT(); || not accessible
    //! object2.prot or object2.pub || not accessible as they are inherited as protected.

    return 0;
}

/*

> public, protected and private inheritance in C++

>> public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.

>> protected inheritance makes the public and protected members of the base class protected in the derived class.

>> private inheritance makes the public and protected members of the base class private in the derived class.

*/