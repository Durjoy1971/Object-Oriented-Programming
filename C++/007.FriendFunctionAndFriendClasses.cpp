//> C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

    // friend function
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};

// friend function definition
int addFive(Distance d)
{

    // accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

//> Add members of two different classes using friend functions

//! Forward declaration
class ClassB;

class ClassA
{

public:
    ClassA() : numA{15} {}

private:
    int numA;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB
{

public:
    ClassB() : numB{5} {}

private:
    int numB;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB)
{
    return (objectA.numA + objectB.numB);
}

//> C++ program to demonstrate the working of friend class

// Forward Declaration
class NewBooks;

class TotalBooks
{
private:
    int items;
    int worth;
    friend class NewBooks;

protected:
    void printWorth()
    {
        cout << items << " items worth around " << worth << " dollars.";
    }

public:
    TotalBooks(int oldItems, int oldWorth) : items{oldItems}, worth{oldWorth} {}
};

class NewBooks
{
public:
    int addBooks(TotalBooks A, int books, int worths)
    {
        A.items += books;
        A.worth += worths;
        A.printWorth();
    }
    //! Even we can create a object of class TotalBooks  in class NewBooks.
};

int main()
{
    Distance D;
    cout << "Distance: " << addFive(D) << endl;

    ClassA one;
    ClassB two;
    cout << add(one, two) << endl;

    TotalBooks Mj(5, 1000);
    NewBooks June2024;
    June2024.addBooks(Mj, 8, 5000);

    return 0;
}

/*

Data hiding is a fundamental concept of object-oriented programming. It restricts the access of private members from outside of the class.
Similarly, protected members can only be accessed by derived classes and are inaccessible from outside.

! However, there is a feature in C++ called friend functions that break this rule and allow us to access member functions from outside the class. Similarly, there is a friend class as well.

A friend function can access the private and protected data of a class. We declare a friend function using the friend keyword inside the body of the class.

We can also use a friend Class in C++ using the friend keyword.

>> When a class is declared a friend class, all the member functions of the friend class become friend functions.
> Let ClassB is a friend class of Class A. Since ClassB is a friend class, we can access all members of ClassA from inside ClassB.
! However, we cannot access members of ClassB from inside ClassA. It is because friend relation in C++ is only granted, not taken.

*/