# Script to read CSV File in Python 


#Method 1
#Open and Read csv file using csv module 
print 'Open and Read csv file using csv module'
import csv

#Create an empty list to save the input file rows in the list  
data = [];

with open('inputCsvFile.csv', 'rb') as csvfile:
      reader = csv.reader(csvfile, delimiter=',')  
      for row in reader:
            print 'CARS', row
            data.append(row)


print '                                          '
print 'Printing input file as a long list ...'
print data
print '                                          '




#Method 2
#Open and Read csv file using pnadas module
print 'Open and Read csv file using pandas module'
import pandas as pd
df = pd.read_csv('inputCsvFile.csv', sep=',')
print df
