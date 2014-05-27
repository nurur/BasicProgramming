// Generating Fibonacci numbers in Java  
// Algorithm : F_n = F_(n-1) + F_(n-2)


import java.io.*;
//java.io.IOException


public class FibonacciNumbers 
{
    public static void main(String[] args) throws IOException 
    {
	String inputLong;
        InputStreamReader isr = new InputStreamReader(System.in);
	BufferedReader    inp = new BufferedReader(isr) ;

	long bound;
	System.out.print("Enter a positive number: ");
	inputLong = inp.readLine();	
	bound = Long.parseLong(inputLong);

	// Print first two numbers of the series 
	System.out.print("Fibonacci numbers " + bound + " :\n0, 1");
	// Print rest of the number that are less than bound  
	long f0=0, f1=1;
	while(true)
	    {
		long f2 = f0 + f1;
		if (f2 > bound) { System.out.println(" "); System.exit(1); }
		System.out.print(", " + f2); 
		f0 = f1;  f1 = f2;
	    }
    }
}
