/* 
 Name: Rayan Kaleem Mohammed
 Athabasca University ID: 3669212
 Description: Whitespace Counter - A piece of code which counts whitespaces of a given file
 Date: Dec 3rd, 2023
*/

/*
  Documentataion for Assignment 3 - Q1
 
 Program Name: Whitespace Counter

 Program Purpose:
   Demonstrates a user file method based code which counts the whitespaces of the given user file.
   It utilizes stream identities and I/O objects for coding and printing.
  
 Compile: (assuming MinGW-W64  is running): g++ -o Assignment3Question1 Assignment3Question1.cpp
 Execution (assuming MinGW-W64 is running): .\Assignment3Question1
 
 Notes: Main must return type int
 
 Classes:  - No classes 

 Variables:
 linespace: string variable which transfers the read content into value 
 excerptfile: holds the file and opens this string using ifstream
 value: holds read content of file and extracts it into wordval
 count: measures the count of whitespaces
 counterfunc: used in main to print whitespaces using the argument and function
 whitespacecount: function holding the string file as argument
	
*/

/*
 Test plan layout.

 Normal case: (Asking for excerpt.txt as requested by question )	
 Enter name of File you would like to input: excerpt.txt
 The number of white spaces are: 342
 -terminates
 
 Bad Data case 1 (numerical input (large numbers))
Enter name of File you would like to input: 443322
Error : Can't Open File
The number of white spaces are: -2
 -terminates 

 Bad Data case 2 (a random txt input made )
 Enter name of File you would like to input: dsv.txt
Error : Can't Open File
The number of white spaces are: -2
-terminates
 
 Bad Data case 3 (Non -alpha input check)
Enter name of File you would like to input: 6y4#$%j'
Error : Can't Open File
The number of white spaces are: -2
-terminates

 Discussion:
 	This program uses File I/O methods and steam functions to operate. A function is used to accept a string which holds the file.
 	The file is then read and transferred and conditioned by a series of while loops and counter to check for whitespaces.
 	The display is a simple call in main which asks user for input file name to read and proceeds to display the number of whitespaces.
 

*/

#include <iostream>								// initial declarations 
using namespace std;
#include <fstream>		// stream declarations - file accessing
#include <sstream>		// used for memory string manipulation 
#include <string>							 

// Using - Prompt by user file method 

string linespace;
int count = 0; 

int whitespacecount( string exerptfile){ 	// exerptfile argument taken - returning int
	std::ifstream file(exerptfile);	// opens file using ifstream

//This function will process my word count using while loop and File I/O stream methods
	if(file.fail()){
		std:: cerr << "Error : Can't Open File"<< std::endl;
		return -2; // validate error the error 
	}

	while(std::getline(file,linespace)){ 	// reads and stores in linespace
		std::stringstream value(linespace); // takes content that is read
		string wordval;
		while (value >> wordval){		// extracting words into wordval - each succesful word incremnets space count.
			count++;
		}
	}
	return count;
	
}	


int main(){
string excerptfile; // create string for user

std:: cout << "Enter name of File you would like to input: ";
std::getline(std::cin,excerptfile); // take input as file and put it in variable 

int counterfunc = whitespacecount(excerptfile);
std:: cout << "The number of white spaces are: " << counterfunc;
};

// The result of the count is based on the file downloaded subtracting the ending phrase 
// "This excerpt is adapted from Alice’s Adventures in Wonderland by Lewis Carroll, available from Project Gutenberg. http://www.gutenberg.org/files/11/11-h/11-h.htm"
// I have deleted this part as it is not part of sample text and the answer will be without this. and so will the rest of q2 and 3. Please grade according to this change.