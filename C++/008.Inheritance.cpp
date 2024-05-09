//> C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal
{
private:
    string color;

protected:
    string type;

public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    string getColor()
    {
        return color;
    }
};

// derived class
class Dog : public Animal
{

public:
    void setType(string type)
    {
        this->type = type;
    }

    void displayInfo(string color)
    {
        cout << "I am a : " << type << endl;
        cout << "My Color is : " << color << endl;
    }

    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("brown");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("Tom");

    dog1.displayInfo(dog1.getColor());

    return 0;
}

/*

> C++ Inheritance

! Inheritance is one of the key features of Object-oriented programming in C++. It allows us to create a new class (derived class) from an existing class (base class).

The derived class inherits the features from the base class and can have additional features of its own.

! Inheritance is an is-a relationship. We use inheritance only if an is-a relationship is present between the two classes.

Here are some examples:

    >> A car is a vehicle.
    >> Orange is a fruit.
    >> A surgeon is a doctor.
    >> A dog is an animal.

> C++ protected Members

! The access modifier protected is especially relevant when it comes to C++ inheritance.

Like private members, protected members are inaccessible outside of the class. However, they can be accessed by derived classes and friend classes/functions.

We need protected members if we want to hide the data of a class, but still want that data to be inherited by its derived classes.

! So far, we have used the public keyword in order to inherit a class from a previously-existing base class. However, we can also use the private and protected keywords to inherit classes.

> Access Modes in C++ Inheritance

The various ways we can derive classes are known as access modes. These access modes have the following effect:

>> Public: If a derived class is declared in public mode, then the members of the base class are inherited by the derived class just as they are.
>> Private: In this case, all the members of the base class become private members in the derived class.
>> Protected: The public members of the base class become protected members in the derived class.

! The private members of the base class are always private in the derived class.

> Member Function Overriding in Inheritance

Suppose, base class and derived class have member functions with the same name and arguments.
If we create an object of the derived class and try to access that member function, the member function in the derived class is invoked instead of the one in the base class.
The member function of derived class overrides the member function of base class.

*/
