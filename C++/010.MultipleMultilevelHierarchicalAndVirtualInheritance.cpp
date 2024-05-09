/*

>> Inheritance is one of the core features of an object-oriented programming language. It allows software developers to derive a new class from the existing class. The derived class inherits the features of the base class (existing class).

There are various models of inheritance in C++ programming.

C++ Multilevel Inheritance
>> In C++ programming, not only can you derive a class from the base class but you can also derive a class from the derived class. This form of inheritance is known as multilevel inheritance.

! ClassA --> ClassB --> ClassC

C++ Multiple Inheritance
>> In C++ programming, a class can be derived from more than one parent. For example, A class Bat is derived from base classes Mammal and WingedAnimal. It makes sense because bat is a mammal as well as a winged animal.

> class Bat: public Mammal, public WingedAnimal {};

Ambiguity in Multiple Inheritance

* The most obvious problem with multiple inheritance occurs during function overriding.
* Suppose two base classes have the same function which is not overridden in the derived class.
* If you try to call the function using the object of the derived class, the compiler shows error. It's because the compiler doesn't know which function to call.

! This problem can be solved using the scope resolution function to specify which function to class

> object.base1::someFunction(); // function of base1 class is called.

C++ Hierarchical Inheritance

>> If more than one class is inherited from the base class, it's known as hierarchical inheritance. In hierarchical inheritance, all features that are common in child classes are included in the base class.

! For example, Physics, Chemistry, Biology are derived from Science class. Similarly, Dog, Cat, Horse are derived from Animal class.

C++ Hierarchical Inheritance

>> If more than one class is inherited from the base class, it's known as hierarchical inheritance. In hierarchical inheritance, all features that are common in child classes are included in the base class.

! For example, Physics, Chemistry, Biology are derived from Science class. Similarly, Dog, Cat, Horse are derived from Animal class.

C++ Virtual Inheritance

>> Virtual inheritance is a C++ technique that makes sure that the grandchild derived classes inherit only one copy of a base class's member variables.

> class Base {
>   ... .. ...
> };
>
> class Derived1 : virtual public Base {
>   ... .. ...
> };
>
> class Derived2 : virtual public Base {
>   ... .. ...
> };
>
> class Derived3 : public Derived1, public Derived2 {
>   ... ... ...
> };

! Here, Derived1 and Derived2 both inherit from Base virtually, ensuring that Derived3 will have only one set of Base member variables, even though it inherits from both Derived1 and Derived2.

*/

//> Example: Virtual Inheritance

#include <iostream>
using namespace std;

// base class with a speciesName member variable
class Animal
{
private:
    string species_name;

public:
    // constructor that accepts a species name for initialization
    Animal(const string &name) : species_name(name)
    {
        cout << "Animal constructor called" << endl;
    }

    void show_species() const
    {
        cout << "This animal belongs to the species: " << species_name << endl;
    }
};

// WingedAnimal class with virtual inheritance from Animal
class WingedAnimal : virtual public Animal
{
public:
    // constructor that initializes the Animal part of WingedAnimal
    WingedAnimal(const string &name) : Animal(name)
    {
        cout << "WingedAnimal constructor called" << endl;
    }
};

// Mammal class with virtual inheritance from Animal
class Mammal : virtual public Animal
{
public:
    // constructor that initializes the Animal part of Mammal
    Mammal(const string &name) : Animal(name)
    {
        cout << "Mammals constructor called" << endl;
    }
};

// Bat class inherits from WingedAnimal and Mammal
class Bat : public WingedAnimal, public Mammal
{
public:
    // Bat constructor
    //! note that Animal's constructor will only be called once due to virtual inheritance.
    Bat() : Animal("Bat"), WingedAnimal("Bat"), Mammal("Bat")
    {
        cout << "Bats constructor called" << endl;
    }

    void show_info()
    {
        cout << "\nIt's a unique animal! Here are some details:" << endl;

        // show the species_name demonstrating the shared member variable
        show_species();
    }
};

int main()
{
    Bat my_bat;
    my_bat.show_info();
    return 0;
}

/*

! In the above program, if the virtual keyword was not used, the Bat class would inherit multiple copies of the member variable of the Animal class. This would result in an error.

*/