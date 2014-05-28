// Pascal's Triangle in Java



public class PascalTriangle
{
    // Combination function 1
    private static long combFunc1(int n, int k){
	// Using for loop
	if (n < 0 || k < 0 || k > n) return 0;
	
	int f = 1;
	if (k == 0) return f;
  
	for (int i=1; i<=k; i++)
	    { 
		f *= n--;
		f /= i;
	    }
	return f;
    }
    

    // Combination function 2
    private static long combFunc2(int n, int k){
	// Using while loop
	if (n < 0 || k < 0 || k > n) return 0;
	
	int f = 1;
	int i = 1;
	while (k >= 1) 
	    { 
		f *= n--;
		f /= i++;
		k--;
	    }
	return f;
    }
    
    
    // Main function 
    public static void main(String[] args){

	final int a = 10;	
	for (int n=0; n<a; n++)
	    {
		for (int b=1; b<a-n; b++)
		    System.out.print("  ");
		for (int k=0; k<=n; k++)
		    System.out.print("   " + combFunc1(n,k));
		System.out.println("");
	    }	
    }
    
}
