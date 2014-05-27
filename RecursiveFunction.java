// Recursive function implementation in Java


import java.io.*;
import java.util.*;


public class RecursiveFunction 
{
    // Power function 
    private static int powFunc(int base, int power){
	if (base < 0)
	    { 
		print("Error! negative base for power!");
		System.exit(1); 
	    }
	
	if (power == 0) return 1;
	return ( powFunc(base, power-1) * base); //if (power > 0)
    }    
    

    // Factorial function 
    private static int factFunc(int n){
	if (n < 0)
	    { 
		print("Error! negative argument for factorial!");
		System.exit(1);
	    }

	if (n == 0 || n == 1) return 1; 
	return ( n*factFunc(n-1) ); //if (n > 1) 
    }
    

    // Print function  
    private static void print(Object message){
	System.out.println(String.valueOf(message));
    }


    // Main function 
    public static void main(String[] args){ 
	// Power function
	int m = 3;
	print("Recursive Func. with Return Value: Power Function    ");
	for (int i = 0; i < 10; i++) 
	    System.out.println(m + " to the power " +i+ " is " + powFunc(m,i));
	print("   ");
	
	// Factorial function
	int n = 4;
	print("Recursive Func. with Return Value: Factorial Function");
	System.out.println("Factorial of " + n + " is: " + factFunc(n));   
	print("   ");
	
    }

}
