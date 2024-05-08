#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    // 1. Constructor with no arguments
    Person()
    {
        age = 20;
    }

    // 2. Constructor with an argument
    Person(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person1, person2(45);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;

    return 0;
}

/*

* Constructors can be overloaded in a similar way as function overloading.

* Overloaded constructors have the same name (name of the class) but the different number of arguments. Depending upon the number and type of arguments passed, the corresponding constructor is called.


*/