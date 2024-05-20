/*
In Java, a string is a sequence of characters. For example, "hello" is a string containing a sequence of characters 'h', 'e', 'l', 'l', and 'o'.
We use double quotes to represent a string in Java.

> Java Strings are Immutable
In Java, strings are immutable. This means once we create a string, we cannot change that string.

> Creating Strings Using the New Keyword
Since strings in Java are objects, we can create strings using the new keyword as well.

// create a string using the new keyword
String name = new String("Java String");

> Create String Using Literals vs. New Keyword

1. While creating strings using string literals,

String example = "Java";
Here, we are directly providing the value of the string (Java). Hence, the compiler first checks the string pool to see if the string already exists.
    If the string already exists, the new string is not created. Instead, the new reference, example points to the already existing string (Java).
    If the string doesn't exist, a new string (Java) is created.

*/


public class JavaOOP {
    public static void main(String[] args)
    {
        String greet = "Welcome Our New Member !!";
        String name = "User";

        // System.out.println(greet);

        // int length = greet.length();
        // System.out.println(length);

        // String joinedString = greet.concat(name);
        // System.out.println(joinedString);

        // boolean result = greet.equals(name);
        // System.out.println(result);

        // Checks whether the string contains a substring.
        // System.out.println(greet.contains("Our"));

        // Checks whether the string contains a substring.
        // System.out.println(greet.substring(0, 8));
        // System.out.println(greet.substring(8));

        // join strings with space between them
        // String Id = "55";
        // String joinedStr = String.join(" ", greet, name, Id);
        // System.out.println(joinedStr);

        // String Id = "55";
        // System.out.println(Id.replace('5', '1'));

        // String text = "Java is a fun programming language";
        // split string from space
        // String[] result = text.split(" ");
        // for(String str: result)
        // {
        //     System.out.println(str);
        // }

        // String a = "a", b = "b", c = "c", d = "a";
        // returns a negative integer if the string comes before the str argument in the dictionary order
        // System.out.println(a.compareTo(b));
        // returns a positive integer if the string comes after the str argument in the dictionary order
        // System.out.println(c.compareTo(a));
        // returns 0 if the strings are equal
        // System.out.println(a.compareTo(d));
        
        // Explore more method on google

        // use the escape character
        // String example = "This is the \"String\" class.";
        // System.out.println(example);
        
        

    }
}