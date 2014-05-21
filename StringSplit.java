// Split a String in Java 

    
public class StringSplit {
    
    public static void main(String[] args) 
    {	
	/* String to split */
	String myString1 = "a,b,,, c ,,d,f";
	/* Demlimiter */
	String delim1 = "[,]";
	/* Split the string and Print it */
	String[] tmp1 = myString1.split(delim1);
	for(int i = 0; i < tmp1.length ; i++)
	    System.out.print(tmp1[i] + " ");

	
	System.out.println("              ");


	String myString2 = "a.b.c.d.f";
	String delim2 = "[\\.]";
	
	String[] tmp2 = myString2.split(delim2);
	for(int i = 0; i < tmp2.length ; i++)
	    System.out.print(tmp2[i] + " ");


	System.out.println("              ");


	String myString3 = "a\\b\\c\\d\\f";
	String delim3 = "[\\\\]";
	
	String[] tmp3 = myString3.split(delim3);
	for(int i = 0; i < tmp3.length ; i++)
	    System.out.print(tmp3[i] + " ");
	System.out.println("              ");


	System.out.println("              ");
	

	String myString4 = "a     b  c  d         f";
	String delim4 = "[ ]+";
	
	String[] tmp4 = myString4.split(delim4);
	for(int i = 0; i < tmp4.length ; i++)
	    System.out.print(tmp4[i] + " ");
	System.out.println("              ");
    }

}
