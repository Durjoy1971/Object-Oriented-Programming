/*
! In Java, two or more methods may have the same name if they differ in parameters (different number of parameters, different types of parameters, or both).

! These methods are called overloaded methods and this feature is called method overloading.

*/

public class JavaOOP {

    private static void SUM(int a, int b)
    {
        System.out.println("Sum " + (a+b));
    }

    private static void SUM(int a, double b)
    {
        System.out.println("Sum " + (a+b));
    }

    private static void SUM(int a, int b, int c)
    {
        System.out.println("Sum : " + (a + b + c));
    }

    private static void SUM(int a, int b, int c, int d)
    {
        System.out.println("Sum : " + (a + b + c + d));
    }

    //> It will also work for class method.

    public static void main(String[] args)
    {
        SUM(5,5);
        SUM(10, 3.5);
        SUM(5,5,5);
        SUM(5,5,5,5);
    }
}
