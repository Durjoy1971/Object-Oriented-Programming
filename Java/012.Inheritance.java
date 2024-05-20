/*

> Inheritance
Inheritance is one of the key features of OOP that allows us to create a new class from an existing class.
The new class that is created is known as subclass (child or derived class) and
  the existing class from where the child class is derived is known as superclass (parent or base class).

The extends keyword is used to perform inheritance in Java.


> Method Overriding in Java Inheritance
However, if the same method is present in both the superclass and subclass, what will happen?
  In this case, the method in the subclass overrides the method in the superclass. This concept is known as method overriding in Java.

> super Keyword in Java Inheritance
In such a situation, the super keyword is used to call the method of the parent class from the method of the child class.

> protected Members in Inheritance
In Java, if a class includes protected fields and methods, then these fields and methods are accessible from the subclass of the class.

> Why use inheritance?
The most important use of inheritance in Java is code reusability. The code that is present in the parent class can be directly used by the child class.
Method overriding is also known as runtime polymorphism. Hence, we can achieve Polymorphism in Java with the help of inheritance.

> Types of inheritance
There are five types of inheritance.

1. Single Inheritance
In single inheritance, a single subclass extends from a single superclass.

2. Multilevel Inheritance
In multilevel inheritance, a subclass extends from a superclass and then the same subclass acts as a superclass for another class.

3. Hierarchical Inheritance
In hierarchical inheritance, multiple subclasses extend from a single superclass.

4. Multiple Inheritance
In multiple inheritance, a single subclass extends from multiple superclasses.

5. Hybrid Inheritance
Hybrid inheritance is a combination of two or more types of inheritance.

>> Note: Java doesn't support multiple inheritance. However, we can achieve multiple inheritance using interfaces.

*/


class Animal {
    // method in the superclass
    public void eat() {
        System.out.println("I can eat");
    }
}

// Dog inherits Animal
class Dog extends Animal {

    // overriding the eat() method
    @Override
    public void eat() {
        super.eat();
        System.out.println("I eat dog food");
    }

    // new method in subclass
    public void bark() {
        System.out.println("I can bark");
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        Animal objAnimal = new Animal();
        Dog objDog = new Dog();

        // objAnimal.eat();
        objDog.eat();

    }
}