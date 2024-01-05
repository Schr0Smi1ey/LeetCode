package Abstract;
abstract class animal{ // which is just a concept 
    animal()
    {
        System.out.println("Your are Creating an animal");
    }
    abstract void walk();
}
class Horse extends animal{
    Horse()
    {
        System.out.println("You created a Horse");
    }
    public void walk()
    {
        System.out.println("walk on four legs");
    }
}
class Chicken extends animal{
    Chicken()
    {
        System.out.println("You created a chicken");
    }
    public void walk()
    {
        System.out.println("Walk on two legs");
    }
}
public class Abstract {
    public static void main(String[] args)
    {
        Horse horse1 = new Horse();
        horse1.walk();
    }
}
