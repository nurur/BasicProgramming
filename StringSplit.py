# Split a String in Python


# Split all elements 
x = "a,b,,, c ,,d,f"
print x.split(',')

x = "a.b.c.d.f"
print x.split('.')

x = "a\\b\\c\\d\\f"
print x.split('\\')

x = "a     b  c  d         f"
print x.split()

# Use 're' module 
import re; print re.split(r'\s+', x)


# Split only the first two elements 
x = "a     b  c  d         f"
print x.split(None, 2)




