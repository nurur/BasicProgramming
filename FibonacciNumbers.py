# Generating Fibonacci numbers in Python  
# Algorithm : F_n = F_(n-1) + F_(n-2)


import sys

def fibonacciNumber(n):    # write Fibonacci series up to n
    a, b = 0, 1
    print 'Fibonacci numbers', n, ':' 
    while a < n:
        print a,
        a, b = b, a+b



# Main function 
def main():
    print 'Enter a positive number: '
    inp = int(raw_input())
    fibonacciNumber(inp)


if __name__ == '__main__':
    main() 
