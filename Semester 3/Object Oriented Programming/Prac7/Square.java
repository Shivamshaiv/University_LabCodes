 package polygons;
 //import Polygon.*;
 class Square implements Polygon{
     float l;
    float area;
    float perimeter;
     Square(float s)
     {
     	l=s;
     }
     public void calcArea()
     {
     	 area=l*l;
     }
     public void calPeri()
     {
     	 perimeter=4*l;
     }
     public void display()
     {
     	System.out.println("The Square is with Area "+area+" and perimeter "+perimeter);
     }
}
