# Pascal's Triangle in R


# Reference:
# http://rosettacode.org/wiki/Pascal's_triangle#R
#
pascalTriangle <- function(x) {
  z=seq(0,x)
  lapply(z, function(i) choose(i, 0:i))
}



a=10

cat('From reference code :  \n')
print( pascalTriangle(a) )

cat('\n');
cat('From package \'base\': \n')
for (n in 0:n) cat(choose(n, k = 0:n), '\n')