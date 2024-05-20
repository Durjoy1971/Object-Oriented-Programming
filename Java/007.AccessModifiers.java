/*

In Java, access modifiers are used to set the accessibility (visibility) of classes, interfaces, variables, methods, constructors, data members, and the setter methods.

There are four access modifiers keywords in Java and they are:

Modifier	Description
Default	    declarations are visible only within the package (package private)
Private	    declarations are visible within the class only
Protected	declarations are visible within the package or all subclasses
Public	    declarations are visible everywhere

Default Access Modifier
If we do not explicitly specify any access modifier for classes, methods, variables, etc, then by default the default access modifier is considered.

Private Access Modifier
When variables and methods are declared private, they cannot be accessed outside of the class.

Protected Access Modifier
When methods and data members are declared protected, we can access them within the same package as well as from subclasses.

Public Access Modifier
When methods, variables, classes, and so on are declared public, then we can access them from anywhere. The public access modifier has no scope restriction.

*/

class Private {
    private String name;
}

class Protected {
    protected void print(){
        System.out.println("HI I am Protected");
    }
}

public class JavaOOP extends Protected {
    public static void main(String[] args)
    {
        Private obj = new Private();
        // obj.name; || Can't access it as we are outside of the class

        Protected objPro = new Protected();
        objPro.print(); //  inherited for access protected method function
    }
}