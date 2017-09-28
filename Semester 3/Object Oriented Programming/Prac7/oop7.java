package polygons;
//import polygons.*;
//Square
/*
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
*/
//Rectangle
/*
 class Rectangle implements Polygon{
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
*/


public class oop7{
	public static void main(String args[])
	{
          Polygon sq;
          Polygon rec;
		sq=new Square((float)4.56);
		sq.calPeri();
		sq.calcArea();
		sq.display();
		rec=new Rectangle((float)34.24,(float)89.56);
		rec.calcArea();
		rec.calPeri();
		rec.display();
	}
}