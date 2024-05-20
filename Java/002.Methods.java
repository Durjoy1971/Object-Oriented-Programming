/*

! A method is a block of code that performs a specific task. // Kind of function

! In Java, there are two types of methods:
    User-defined Methods: We can create our own method based on our requirements.
    Standard Library Methods: These are built-in methods in Java that are available to use.


returnType methodName() {
    // method body
}

// Complete Syntax of declaring a method
modifier static returnType nameOfMethod (parameter1, parameter2, ...) {
  // method body
}

! modifier - It defines access types whether the method is public, private, and so on.
! static - If we use the static keyword, it can be accessed without creating objects.
    For example, the sqrt() method of standard Math class is static.
    Hence, we can directly call Math.sqrt() without creating an instance of Math class.

>> What are the advantages of using methods ?
    1. The main advantage is code reusability. We can write a method once, and use it multiple times.
    2. Methods make code more readable and easier to debug
    
*/

public class JavaOOP {

    //> User-defined Methods:

    int addNumbers(int a, int b)
    {
        return a+b;
    }

    void greeting()
    {
        System.out.println("Welcome to the world of Object Oriented Programming");
    }

    public static int square(int num)
    {
        return num*num;
    }

    public static void main(String[] args)
    {
        JavaOOP methodObj = new JavaOOP();

        int numberOne = 15, numberTwo = 15;

        //> The addNumbers method is not static. Hence, we are calling the method using the object of the class.
        int value = methodObj.addNumbers(numberOne,numberTwo);
        System.out.println("Summation " + value);

        //> The Square method is static. Hence, we are calling square method directly.
        System.out.println("Square of Summation " + square(value));

        //> Method without parameter
        methodObj.greeting();

        //> Standard Library Methods
        System.out.println(Math.sqrt(25));
        System.out.println(Math.cbrt(27));
        System.out.println(Math.pow(2,3));

    }
}
