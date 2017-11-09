
import java.util.*;
class Notneg extends Exception 
{
	Notneg(String s)
	{
		super(s);
	}
}
 class MYSQRT {

	public double sqrtcomp(int number) throws Notneg{
		double squareRoot = number/2;
		if(number<0)
		{
			throw new Notneg(" ");	
		}
		else
		{
		
		double g1=0;
    	do
    	{
        g1=squareRoot;
        squareRoot = (g1 + (number/g1))/2;
    	}
    	while((g1-squareRoot)!=0);
		}
		return squareRoot;
	}
}

public class oop8a{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number!");
		int num=sc.nextInt();
		MYSQRT sqrt = new MYSQRT();
		try
		{
		System.out.println("SquareRoot is "+sqrt.sqrtcomp(num));
		}
		catch(Notneg e)
		{
			System.out.println("Input postive number please");
		}

	}
}