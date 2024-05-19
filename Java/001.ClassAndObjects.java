/*
! The core concept of the object-oriented approach is to break complex problems into smaller objects.

! An object is any entity that has a state and behavior. For example, a bicycle is an object. It has
    States: idle, first gear, etc
    Behaviors: braking, accelerating, etc.

! A class is a blueprint for the object. Before we create an object, we first need to define the class.

class ClassName {
  // fields
  // methods
}

className object = new className();

*/

class Lamp{
    boolean isOn = false; // store the value for light

    void turnOn(){
        isOn = true;
        System.out.println("Light Is On");
    }

    void turnOff(){
        isOn = false;
        System.out.println("Light Is Off");
    }

    void currentState(){
        System.out.println("Light on?: " + isOn);
    }
}

public class JavaOOP {
    
    int speed = 50;
    void increaseSpeed(){
        speed += 50;
        System.out.println(speed);
    }

    public static void main(String[] args)
    {
        // Object of Lamp Class
        Lamp newHd = new Lamp();
        newHd.currentState();
        newHd.turnOn();
        newHd.currentState();
        newHd.turnOff();
        newHd.currentState();

        // Object Of JavaOOP class
        JavaOOP honda = new JavaOOP();
        honda.increaseSpeed();
    }
}