/*

> Java Overriding Rules
  Both the superclass and the subclass must have the same method name, the same return type and the same parameter list.
  We cannot override the method declared as final and static.
  We should always override abstract methods of the superclass.

Can we access the method of the superclass after overriding?
Well, the answer is Yes. To access the method of the superclass from the subclass, we use the super keyword.

It is important to note that constructors in Java are not inherited. Hence, there is no such thing as constructor overriding in Java.

! However, we can call the constructor of the superclass from its subclasses. For that, we use super().

> Access Specifiers in Method Overriding
The same method declared in the superclass and its subclasses can have different access specifiers. However, there is a restriction.
We can only use those access specifiers in subclasses that
  provide larger access than the access specifier of the superclass.

For example, Suppose, a method myClass() in the superclass is declared protected.
  Then, the same method myClass() in the subclass can be either public or protected, but not private. As the public provides larger access than the protected.
  This is possible because the public provides larger access than the protected.

> Overriding Abstract Methods
In Java, abstract classes are created to be the superclass of other classes. And, if a class contains an abstract method, it is mandatory to override it.

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
        Dog objDog = new Dog();

        objDog.eat();

    }
}