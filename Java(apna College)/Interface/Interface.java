package Interface;

interface Animal{
    int eyes = 2;
    public void walk();
}
interface Herbivore{

}
class Horse implements Animal{
    public void walk(){
        System.out.println("Walk on 4 legs");
    }
}
class Chicken implements Animal,Herbivore{ // multiple inheritance
    public void walk(){
        System.out.println("Walk on 2 legs");
    }
}
public class Interface {
    
}
