// Java script to print Fizz or Buzz or FizzBuzz
// Fizz if an integer is divided by 3
// Buzz if an integer is divided by 5
// FizBuzzz if an integer is divided by 3 or 5


class FizzBuzz
{
    public static void main(String[] args) 
    {
	int n = 101;
	for (int i=1; i < n; i=i+1)
	    {
		if (i % 3 == 0 && i % 5 == 0)
		    { System.out.println(i + "  FizzBuzz"); }
		else if (i % 3 == 0)     
		    { System.out.println(i + "      Fizz"); }
		else if (i % 5 == 0) 
		    { System.out.println(i + "      Buzz"); }
		else    
		    { System.out.println(i + "  --------"); }
	    }
    }
}
