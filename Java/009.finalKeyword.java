/*

In Java, the final keyword is used to denote constants. It can be used with variables, methods, and classes.

Once any entity (variable, method or class) is declared final, it can be assigned only once. That is,

    the final variable cannot be reinitialized with another value
    the final method cannot be overridden
    the final class cannot be extended

*/

class FinalDemo {
    // create a final method
    public final void display() {
        System.out.println("This is a final method.");
    }
}

class Demo extends FinalDemo {
    //> try to override final method
    // public final void display() {
    //     System.out.println("The final method is overridden.");
    // }

}

public class JavaOOP {
    public static void main(String[] args)
    {
        Demo obj = new Demo();
        obj.display();
    }
}