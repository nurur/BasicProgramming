# Pascal's Triangle in Python


# Reference:
# http://rosettacode.org/wiki/Pascal's_triangle#Python
def pascalTriangle(n):
    """ Prints out n rows of Pascal's triangle
    It returns False for failure and True for success """
    row = [1]
    k   = [0]
    for x in range(max(n,0)):
        #print row
        print " ".join(repr(i) for i in row)
        row=[l+r for l,r in zip(row+k, k+row)]
    return n >= 1



# 
def combFunc1(n, k):
    """ Pascal's triangle """
    if (n < 0 or k < 0 or k > n): 
        return 0
    f = 1
    if (k == 0): 
        return f
    else:
        for i in range(1,(k+1)):
            f  = f*n
            f  = f/i
            n -= 1
        return f




# Main function 
def main():
    
    a=10

    print 'Pascal\'s Triangle from Reference code:'
    pascalTriangle(a)
    print ' '


    print 'Pascal\'s Triangle:'
    for n in range(a):
        LIST = []
        for k in range((n+1)):
            LIST.append(combFunc1(n,k))
        print(" ".join( repr(i) for i in LIST ) )


if __name__ == '__main__':
    main() 




