# Python script to print Fizz or Buzz or FizzBuzz
# Fizz if an integer is divided by 3
# Buzz if an integer is divided by 5
# FizBuzzz if an integer is divided by 3 or 5


n = 101;

for i in range(1, n):
    if (i % 3 == 0 and i % 5 == 0):  
        print i, 'FizzBuzz'
    elif (i % 3 == 0):     
        print i, '    Fizz'
    elif (i % 5 == 0): 
        print i, '    Buzz' 
    else:    
        print i, '--------'
