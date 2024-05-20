/*
> What is a static keyword in Java?
In Java, if we want to access class members, we must first create an instance of the class.
  But there will be situations where we want to access class members without creating any variables.

In those situations, we can use the static keyword in Java. If we want to access class members without creating an instance of the class,
  we need to declare the class members static.

The Math class in Java has almost all of its members static. So, we can access its members without creating instances of the Math class.

> Static Methods
Static methods are also called class methods. It is because a static method belongs to the class rather than the object of a class.

And we can invoke static methods directly using the class name.

class Test {
    public static void method() {...}
}

class Main {
    //> invoking the static method
    Test.method();
}

In every Java program, we have declared the main method static.
  It is because to run the program the JVM should be able to invoke the main method during the initial phase where no objects exist in the memory.

> Static Variables
In Java, when we create objects of a class, then every object will have its own copy of all the variables of the class.
However, if we declare a variable static, all objects of the class share the same static variable.
  It is because like static methods, static variables are also associated with the class.
  And, we don't need to create objects of the class to access the static variables.


In Java, static members can be accessed directly in their own class, but when accessed from another class, you need to use the class name.

> Static Blocks
In Java, static blocks are used to initialize the static variables. For example,

class Test {
    // static variable
    static int age;

    // static block
    static {
        age = 23;
    }
}

The static block is executed only once when the class is loaded in memory.
  The class is loaded if either the object of the class is requested / initialized in code or the static members are requested in code.

A class can have multiple static blocks and each static block is executed in the same sequence in which they have been written in a program.

*/

class StaticTest {
    int min = Integer.MAX_VALUE;
    static int max = Integer.MIN_VALUE;
    int multiply(int a, int b)
    {
        return a * b;
    }

    static int add(int a, int b)
    {
        return a + b;
    }

    void updation(int value)
    {
        min = Math.min(value,min);
        max = Math.max(value,max);
    }

    static {
        System.out.println("I am used for initializing a value");
        // Here we can initialize the value of min and max.
        // max = 5;
        // min = 2;
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        // We can access add method function without creating an instance
        System.out.println(StaticTest.add(5,6));

        // If we want to access multiply method function , then we have to create an instance
        StaticTest obj = new StaticTest();
        StaticTest price = new StaticTest();
        System.out.println(price.multiply(7,9));

        // Static Variables
        obj.updation(35);
        obj.updation(50);
        price.updation(25);
        price.updation(15);

        System.out.println(StaticTest.max + " " + price.min + " " + obj.min);
    }
}
