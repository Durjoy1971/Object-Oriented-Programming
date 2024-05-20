/*

> Java instanceof Operator

The instanceof operator in Java is used to check whether an object is an instance of a particular class or not.
Its syntax is || objectName instanceOf className; ||

Here, if objectName is an instance of className, the operator returns true. Otherwise, it returns false.

*/

class Demo {

    public static void main(String[] args) {

        // create a variable of string type
        String name = "Programiz";

        // checks if name is instance of String
        boolean result1 = name instanceof String;
        System.out.println("name is an instance of String: " + result1);

        // create an object of Demo
        Demo obj = new Demo();

        // checks if obj is an instance of Demo
        boolean result2 = obj instanceof Demo;
        System.out.println("obj is an instance of Demo: " + result2);
    }
}