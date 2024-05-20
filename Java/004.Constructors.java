/*
A constructor in Java is similar to a method that is invoked when an object of the class is created.

Unlike Java methods, a constructor has the same name as that of the class and does not have any return type.

class Test {
  Test() {
    // constructor body
  }
}

Types of Constructor
In Java, constructors can be divided into three types:
    No-Arg Constructor
    Parameterized Constructor
    Default Constructor

*/

class FirstType {
    FirstType(){
        System.out.println("No Arg Constructor is Called");
    }
}

class SecondType{
    SecondType(String name)
    {
        System.out.println("Parameterized Constructor is Called : " + name);
    }
}

class ThirdType{
    int a;
    boolean False;

    void Print()
    {
        System.out.println(a + " " + False);
    }
}

public class JavaOOP {
    public static void main(String[] args)
    {
        FirstType firstType = new FirstType();
        SecondType secondType = new SecondType("Bangladesh");
        //> Default Constructor
        ThirdType thirdType = new ThirdType();

        thirdType.Print();
    }
}
