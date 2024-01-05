package Polymorphism;

class Pen{
    String colour,type;

    Pen(String colour,String type)
    {
        this.colour = colour;
        this.type = type;
    }
    public void printInfo(String colour)
    {
        System.out.println(this.colour);
    }
    public void printInfo(String type) // Method overloading which represents the static(compile time) polymorphism
    {
        System.out.println(this.type);
    }
    public void printInfo(String name,String type)
    {
        System.out.println(this.colour);
        System.out.println(this.type);
    }
    public String toString()
    {
        return ("Colour : " + this.colour + '\n' + "Type : " + this.type);
    }
}
public class Polymorphism {
    public static void main(String[] args)
    {
        Pen pen1 = new Pen("Blue","Gel");
        Pen pen2 = new Pen("Black","BallPoint");
        pen1.printInfo(pen1.colour);
        pen2.printInfo(pen2.colour,pen2.type);
    }
}
