#include <iostream>
using namespace std;

// Private and Public Specifier Example:
class User
{
private:
    string password;
    int balance;

    bool checkPassword(string userPassword)
    {
        return password == userPassword;
    }

public:
    string fullName;
    int age;

    User(string userName, int userAge, string userPassword, int userBalance)
        : fullName{userName}, age{userAge}, password{userPassword}, balance{userBalance} {}

    void Details()
    {
        cout << fullName << " " << age << endl;
    }

    void entryBalance(string userPassword, int addBalance)
    {
        if (checkPassword(userPassword))
        {
            if (addBalance != 0)
            {
                cout << "Previous Balance : " << balance << endl;
                balance += addBalance;
            }

            cout << "Current Balance : " << balance << endl;
        }
        else
        {
            cout << "Password is not correct" << endl;
        }
    }

    void currentBalance(string userPassword)
    {
        entryBalance(userPassword, 0);
    }
};

// Protected Specifier Example
class Student
{
protected:
    int number;
    string name;
};

class Bijoy : public Student
{
public:
    Bijoy(string userName = "Bijoy", int number = 40)
    {
        name = userName;
        this->number = number;
    }

    void info()
    {
        cout << name << " " << number << endl;
    }
};

int main()
{
    User user("Messi", 38, "DOR", 5000);

    //! Public Elements
    cout << user.age << endl;
    cout << user.fullName << endl;
    user.Details();
    //! Accessing Private Elements Through Public Elements ( Public Member Function )
    user.currentBalance("DOR");
    user.entryBalance("DOR", 500);

    Bijoy bijoy;
    bijoy.info();
}

/* One of the main features of object-oriented programming languages such as C++ is data hiding.

* Data hiding refers to restricting access to data members of a class. This is to prevent other functions and classes from tampering with the class data.

* In C++, there are 3 access modifiers:
    ! public
    ! private
    ! protected

> Public Access Modifier
    ! The public keyword is used to create public members (data and functions).
    ! The public members are accessible from any part of the program.

> Private Access Modifier
    ! The private keyword is used to create private members (data and functions).
    ! The private members can only be accessed from within the class.
    ! However, friend classes and friend functions can access private members.

> Protected Access Modifier
    ! Before we learn about the protected access specifier, make sure you know about inheritance in C++.
    ! The protected keyword is used to create protected members (data and function).
    ! The protected members can be accessed within the class and from the derived class.

>> By default, class members in C++ are private, unless specified otherwise
>> public elements can be accessed by all other classes and functions.
>> private elements cannot be accessed outside the class in which they are declared, except by friend classes and functions.
>> protected elements are just like the private, except they can be accessed by derived classes.

*/