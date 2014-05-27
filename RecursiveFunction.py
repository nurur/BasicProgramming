# Recursive function implementation in Python 


import sys

# Power function 
def powFunc(base, power):
    if (base < 0):
        print "Error! negative base for power!";
        sys.exit(1) 
    else:
        if (power == 0): return 1;
        return ( powFunc(base, power-1) * base); #if (power > 0)


# Factorial function 
def factFunc(n): 
    if (n < 0):
        print 'Error! negative argument for factorial!';
        sys.exit(1);
    else:
        if (n == 0 or n == 1): return 1; 
        return (n*factFunc( n-1 )); #if (n > 1)



# Main function  
def main():
    # Power function 
    m=3
    print 'Recursive Func. with Return Value: Power Function    '
    for i in range(10):
        print m, 'to the power ',i ,'', powFunc(m,i)

    print '            '

    # Factorial function     
    n=4
    print 'Recursive Func. with Return Value: Factorial Function'
    print 'Factorial of', n, 'is:', factFunc(n);   
    print '          '


if __name__=='__main__':
    main()
