import java.io.*;
import java.util.*;
class oop3b{
	public static void main(String args[])
	{
       String str;
	   int vowels = 0, digits = 0, conso = 0;
	   char ch;
	   Scanner scanner = new Scanner( System.in );
	   System.out.print("Enter a String : ");
	   str = scanner.nextLine();
		int i=0;
		for(i=0;i<str.length();i++)
		{
		  ch=str.charAt(i);
		  switch (ch) {
		  	case 'A':
		  		vowels++;break;
		  	case 'E':
		  		vowels++;break;
		  	case 'I':
		  		vowels++;break;
		  	case 'O':
		  		vowels++;break;
		  	case 'U':
		  		vowels++;break;
            default :
             {
                if(Character.isDigit(ch))
                {
                	digits++;
                }
                else
                {
                   conso++;
                }
             }
		    }


		}

		System.out.println("Vowels : " + vowels);
		System.out.println("Digits : " + digits);
		System.out.println("Consonants : " + conso);
	}
}

