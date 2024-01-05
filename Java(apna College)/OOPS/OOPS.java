package OOPS;
class Pen{
    String colour,type;

    Pen(String colour,String type)
    {
        this.colour = colour;
        this.type = type;
    }

    public String toString()
    {
        return ("Colour : " + this.colour + '\n' + "Type : " + this.type);
    }
}

class Student{
    String name;
    int age;
    
    Student(String name,int age)
    {
        this.name = name;
        this.age = age;
    }
}
public class OOPS {
    public static void main(String[] args)
    {
        Pen pen1 = new Pen("Blue","Gel");
        Pen pen2 = new Pen("Black","BallPoint");
        System.out.println(pen1);
        System.out.println(pen2);
    }
}
