#include <iostream>
using namespace std;

//* The use of defaulted constructor

class Wall
{
private:
    double length{5.25}; // length = 5.25

public:
    // Wall() = default;
    // Wall(){};
    void print_length()
    {
        cout << "Length = " << length << endl;
    }
};

//* C++ Parameterized Constructor

class Book
{
private:
    int quantity;
    int price;

public:
    //* : quantity{quantity}, price{price} is the member initializer list.
    Book(int quantity, int price)
        : quantity{quantity}, price{price} {}
    void total_price()
    {
        cout << "Total Price: " << quantity * price << endl;
    }
};

int main()
{
    Wall wall1;         // default constructor
    Book book1(50, 10); // Parameterized Constructor
    Book book2 = book1; // Copy Constructor

    wall1.print_length();
    book1.total_price();
    book2.total_price();

    return 0;
}

/*

* A constructor is a special member function that is called automatically when an object is created.

* In C++, a constructor has the same name as that of the class, and it does not have a return type.

* A constructor with no parameters is known as a default constructor.

* If no constructor has been defined than C++ compiler will automatically create a default constructor with no parameters and empty body.

* The copy constructor in C++ is used to copy data from one object to another.

*/