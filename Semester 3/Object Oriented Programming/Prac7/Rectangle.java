package polygons;
//import Polygon.*;
public class Rectangle implements Polygon{
     float l;
     float b;
    float area;
    float perimeter;
     Rectangle(float len,float bre)
     {
     	l=len;
     	b=bre;
     }
     public void calcArea()
     {
     	 area=l*b;
     }
     public void calPeri()
     {
     	 perimeter=2*(l+b);
     }
     public void display()
     {
     	System.out.println("The Rectangle is with Area "+area+" and perimeter "+perimeter);
     }
}
