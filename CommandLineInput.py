# Command Line Input in Python 

# To run the code, type in the shell: 
# python CommandLineInput.py arg1 arg2 333 333.0
# Note that arg1 and arg2 are two dummy variables



# import sys module 
import sys

# Get the total number of args passed to the demo.py
totargs  = len(sys.argv)
 
# Get the arguments list 
listargs = str(sys.argv)


print '                 '
print 'The Number of arguments passed: %d' %totargs
print 'Argument List: %s' %listargs
print '                 '


# Pharsing args one by one 
print ("Script name:     %s" % str(sys.argv[0]))
print ("First argument:  %s" % str(sys.argv[1]))
print ("Second argument: %s" % str(sys.argv[2]))
print ("Third argument:  %d" % int(sys.argv[3]))
print ("Fourth argument: %f" % float(sys.argv[4]))
