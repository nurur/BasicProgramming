// Interactive Command Line Input in Java 

// Part 1: Read String input and Print as String 
// Part 2: Convert String Input and Print as Integer
// Part 3: Convert String Input and Print as Float


/* Import Classes from java.io Package */
import java.io.*;
//java.io.IOException
//java.io.InputStreamReader
//java.io.BufferReader


public class InteractiveInput 
{
    //Main Method  
    public static void main(String[] args) throws IOException 
    {
	//Input String Variables 
	String inputString, inputInt, inputReal;


        InputStreamReader isr = new InputStreamReader(System.in);
	BufferedReader    inp = new BufferedReader(isr) ;


	//Read String input and Print as String 
	System.out.print("Enter a String      : ");
	inputString = inp.readLine();	
	System.out.println("You Entered a String: " + inputString);

	System.out.println("              ");

	//Read String Input, Convert, and Print as Integer
	System.out.print("Enter an Integer Number: ");
	inputInt = inp.readLine();	
	int numInt = Integer.parseInt(inputInt);
	System.out.println("You Entered an Integer : " + numInt);

	System.out.println("              ");

	//Read String Input, Convert, and Print as Double
	System.out.print("Enter a Real Number       : ");
	inputReal = inp.readLine();	
	float numFloat = Float.parseFloat(inputReal);
	System.out.println("Your Entered a Real Number: " + numFloat);
	
    }
}
