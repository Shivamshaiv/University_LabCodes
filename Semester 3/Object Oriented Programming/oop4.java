class Complex{
	int x;
	int y;
	Complex(int a,int b)
	{
		x=a;
		y=b;
	}
	Complex add(Complex c2)
	{
		int newx=x+c2.x;
		int newy=y+c2.y;
		Complex newcom=new Complex(newx,newy);
		System.out.println("Sum of "+x+"+"+y+"i"+" and "+c2.x+"+"+c2.y+"i"+" is "+newx+"+"+newy+"i");
		return newcom;
	}
}

class oop4{
	public static void main(String args[]){


	Complex n1=new Complex(2,7);
	Complex n2=new Complex(6,9);
    Complex sum=n1.add(n2);
   }
}