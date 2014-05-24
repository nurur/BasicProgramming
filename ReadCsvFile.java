// Script to read CSV file in Java 


/* Import Classes from java.io Package*/
import java.io.*;
//java.io.IOException
//java.io.FileReader
//java.io.BufferReader
import java.util.*;


public class ReadCsv { 

    public static void main(String[] args) throws IOException 
    {
	
	String csvFileToRead = "inputCsvFile.csv";  
	String line = "";  
	String splitBy = ",";


	//Open input file and print data on the terminal 
	FileReader ifr     = new FileReader(csvFileToRead);
	BufferedReader inp = new BufferedReader(ifr);

	while ((line = inp.readLine()) != null) {  	    
	    String[] object = line.split(splitBy);  
	    System.out.println("CARS [year= "    + object[0] + 
                               " , make="        + object[1] + 
                               " , model="       + object[2] +  
                               " , description=" + object[3] + 
                               " , price="       + object[4] + "]"); 
	}  


	System.out.println("                         ");


	//Save data in a list using generic class String 
	FileReader ifr2     = new FileReader(csvFileToRead);
	BufferedReader inp2 = new BufferedReader(ifr2);

	ArrayList<String> lines = new ArrayList<String>();
	while ((line = inp2.readLine()) != null) {
	    lines.add(line);
	}

	System.out.println(lines.get(0));
	int d = lines.size();
	System.out.println(lines.get(d-1));



	//Close the file
	inp.close();
	inp2.close();
    }
}

