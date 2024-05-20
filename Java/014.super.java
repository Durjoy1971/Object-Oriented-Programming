/*
> Java super
The super keyword in Java is used in subclasses to access superclass members (attributes, constructors and methods).

> Uses of super keyword
  1. To call methods of the superclass that is overridden in the subclass.
  2. To access attributes (fields) of the superclass if both superclass and subclass have attributes with the same name.
  3. To explicitly call superclass no-arg (default) or parameterized constructor from the subclass constructor.

*/

class Animal {
    Animal() {
        System.out.println("I am a Animal Constructor");
    }
    protected String type="animal";
    // overridden method
    public void display(){
        System.out.println("I am an animal");
    }
}

class Dog extends Animal {
    Dog() {
        // calling default constructor of the superclass
        super(); // Type-03 || We can parameterized constructor with super.
        System.out.println("I am a dog Constructor");
    }
    // overriding method
    @Override
    public void display(){
        System.out.println("I am a " + super.type); // Type-02
    }

    public void printMessage(){
        // this calls overriding method
        display();
        // this calls overridden method || Type-01
        super.display();
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        Dog objDog = new Dog();
        objDog.printMessage();
    }
}