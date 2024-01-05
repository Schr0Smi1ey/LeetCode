package Inheritance;

import javax.swing.plaf.basic.BasicSliderUI.TrackListener;

class Shape
{
    public void Area(){
        System.out.println("Displaying Area");
    }
}

class Triangle extends Shape{
    private int l,h;
    Triangle(int l,int h)
    {
        this.l = l;this.h = h;
    }
    public void Area (){
        System.out.println(1/2 * l * h);
    }
}

class equilateral extends Triangle
{
    public void Message()
    {
        System.out.println("I am equilateral Triangle");
    }
}
public class Inheritance {
    
}
