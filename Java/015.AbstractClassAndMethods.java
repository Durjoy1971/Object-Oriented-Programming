/*
> Java Abstract Class
The abstract class in Java cannot be instantiated (we cannot create objects of abstract classes).
  We use the abstract keyword to declare an abstract class. For example,

//> create an abstract class

abstract class Language {
  // fields and methods
}
...
// try to create an object Language
// throws an error
Language obj = new Language();

> An abstract class can have both the regular methods and abstract methods. For example,
abstract class Language {
  // abstract method
  abstract void method1();

  // regular method
  void method2() {
    System.out.println("This is regular method");
  }
}

> Java Abstract Method
A method that doesn't have its body is known as an abstract method. We use the same abstract keyword to create abstract methods.

> Accesses Constructor of Abstract Classes
An abstract class can have constructors like the regular class. And, we can access the constructor of an abstract class from the subclass using the super keyword.

> Java Abstraction
The major use of abstract classes and methods is to achieve abstraction in Java.

Abstraction is an important concept of object-oriented programming that
    allows us to hide unnecessary details and only show the needed information.

This allows us to manage complexity by omitting or hiding details with a simpler, higher-level idea.

A practical example of abstraction can be motorbike brakes.
  We know what brake does. When we apply the brake, the motorbike will stop.
  However, the working of the brake is kept hidden from us.

The major advantage of hiding the working of the brake is that now the manufacturer can
  implement brake differently for different motorbikes, however, what brake does will be the same.

> Key Points to Remember
    We use the abstract keyword to create abstract classes and methods.
    An abstract method doesn't have any implementation (method body).
    A class containing abstract methods should also be abstract.
    We cannot create objects of an abstract class.
    To implement features of an abstract class, we inherit subclasses from it and create objects of the subclass.
    A subclass must override all abstract methods of an abstract class. However, if the subclass is declared abstract, 
      it's not mandatory to override abstract methods.
    We can access the static attributes and methods of an abstract class using the reference of the abstract class. For example,
      Animal.staticMethod();
*/

//> Example - one
abstract class Language {
    abstract void makeLanguage();

    // method of abstract class
    public void display() {
        System.out.println("This is Java Programming.");
    }
}

//! If the abstract class includes any abstract method, then all the child classes inherited from the abstract superclass
//! must provide the implementation of the abstract method.

//> Example - two
abstract class motorBikes {
    abstract void brakes();
}

class SportBikes extends motorBikes {
    void brakes(){
        System.out.println("Brakes Power = SportBikes");
    }
}

class MountainBikes extends motorBikes {
    void brakes(){
        System.out.println("Brakes Power = MountainBikes");
    }
}

class Demo extends Language {
    public void makeLanguage(){
        System.out.println("Making a new Language.");
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        // Example One - Object
        Demo obj = new Demo();
        // access method of abstract class using object of Demo class
        obj.display();
        obj.makeLanguage();

        // Example Two - Object
        SportBikes sportBikes = new SportBikes();
        MountainBikes mountainBikes = new MountainBikes();

        sportBikes.brakes();
        mountainBikes.brakes();
    }
}