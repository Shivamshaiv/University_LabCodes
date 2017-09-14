import java.*;
class oop5b{
	public static void main(String args[])
	{
		StringBuffer s1=new StringBuffer("Nirma University");
		//a)Reverse the string
		s1.reverse();
		System.out.println(s1);
		s1.reverse(); //Back to where it was
		//(b) Replace Ni with Ab
		 System.out.println("");
         StringBuffer str_copy=s1.replace(0,1,"Ab");
         System.out.println(str_copy);
         //(c)Find if substrings are there
          if(s1.indexOf("rma")!=-1 && s1.indexOf("Uni")!=-1)
       {
              System.out.println("Both the Substrings Occur.");
       }
	}
}