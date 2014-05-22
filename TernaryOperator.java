// Ternary Operator in Java
// Rule: testCondition ? a : b 


public class TernaryOperator {


    public static void main(String[] args) {

	int x,y,z;
	int m,n;
	
	x=1; y=2; z=4;

	m = x < y ? x : y;
	n = z < m ? z : m;
	System.out.println("x, y, z values are : " + x + " " + y + " " + z);
	System.out.println("Ternary operator result: " + n);


	System.out.println("                     ");


	m = x > y ? x : y;
	n = z > m ? z : m;
	System.out.println("x, y, z values are : " + x + " " + y + " " + z);
	System.out.println("Ternary operator result: " + n);
    }

}
