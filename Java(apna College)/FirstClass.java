import java.util.*;
public class FirstClass
{
    public static void main(String[] args)
    {
        System.out.println("Hello World!");
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = scan.nextLine();
        System.out.println("name : "+name);

        System.out.println("Enter Your age : ");
        int a = scan.nextInt();
        System.out.println("Age : "+ a);

        System.out.println("Enter Your Balance : ");
        double c = scan.nextDouble();
        System.out.println("Your Balance : " + c);
        scan.close();
    }
}