import java.util.*;
class Student{
	int roll_number;
	String name;
	Student(int rn,String n)
	{
		roll_number=rn;
		name=n;
	}
}
 class Exam extends Student{
	public int mark[]=new int[6];
	Exam(int rn,String n,int marks[])
	{
		super(rn,n);
		mark=marks;
		
	}

}
class Result extends Exam{
	int tot_marks=0;
	Result(int rn,String n,int marks[])
	{
		super(rn,n,marks);
		for(int i=0;i<marks.length;i++)
		{
			tot_marks+=marks[i];
		}
	}
	void printtotal(){
		System.out.println("Total marks of "+name+" is "+tot_marks);
	}

}

public class oop6{
	public static void main(String args[])
	{   //Insert a scanner here
		Scanner sc= new Scanner(System.in); 
		int roll_num=1;
		String namedAs="ABC";
		int m[]=new int[6];
		for(int i=0;i<6;i++)
		{
			System.out.println("Enter makrs of "+(i+1)+"th subject"); //purely decorational purposes
			m[i]=sc.nextInt();  //Just to know where things are going
		}
		Result res=new Result(roll_num,namedAs,m);
		res.printtotal();

	}
}
