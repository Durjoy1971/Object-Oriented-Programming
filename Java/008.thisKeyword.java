/*

In Java, this keyword is used to refer to the current object inside a method or a constructor.

Use of this Keyword
There are various situations where this keyword is commonly used.

> Using this for Ambiguity Variable Names
  In Java, it is not allowed to declare two or more variables having the same name inside a scope (class scope or method scope).
  However, instance variables and parameters may have the same name.

Invoking one constructor from another constructor is called explicit constructor invocation.

*/

class Complex {

    private int a, b;

    // constructor with 2 parameters
    private Complex( int i, int j ){
        this.a = i;
        this.b = j;
    }

    // constructor with single parameter
    private Complex(int i){
        // invokes the constructor with 2 parameters
        this(i, i);
    }

    // constructor with no parameter
    private Complex(){
        // invokes the constructor with single parameter
        this(0);
    }

    @Override
    public String toString(){
        return this.a + " + " + this.b + "i";
    }
}

class ThisClass {
    int instVar;

    ThisClass(int instVar){
        this.instVar = instVar;
        System.out.println("this reference = " + this);
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        ThisClass thisClass = new ThisClass(5);
        System.out.println("ThisClass reference = " + thisClass);
    }
}