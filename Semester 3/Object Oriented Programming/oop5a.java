import java.*;
class oop5a{
	public static void main(String args[])
	{
       char testst[]={'N','i','r','m','a',' ','U','n','i','v','e','r','s','i','t','y'};
       String str=new String(testst);
       String str_copy=str;
       String sc1="rma";
       String sc2="Uni";
       //a)Reverse the String
       
       System.out.println("");
       System.out.print("Reverse is: ");
       for (int i=testst.length-1;i>=0;i--)
       {
       	System.out.print(str.charAt(i));
       }
       System.out.println("");
       //b)To replace Char Ni with Ab
       str_copy=str.replace("Ni","Ab");
       System.out.println(str_copy);
       System.out.println("");
       //c)Check whether rma and Uni occur in the main string;
       if(str.indexOf(sc1)!=-1 && str.indexOf(sc1)!=-1)
       {
              System.out.println("Both the Substrings Occur.");
       }
       
	}
}