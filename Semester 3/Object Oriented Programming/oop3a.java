import java.util.Scanner;  
class oop3a{
	public static void main(String args[])
	{
      Scanner sc=new Scanner(System.in);
      System.out.println("Please Enter the desired number");
      int n=sc.nextInt();
      int i=0;
      for(i=0;i<=n;i=i+2)
      {
      System.out.print(i+", ");
      }
	}
}