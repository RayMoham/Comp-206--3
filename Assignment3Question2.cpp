/* 
 Name: Rayan Kaleem Mohammed
 Athabasca University ID: 3669212
 Description: (Enter -based) - File printer - Prints the file using user method which continues only based on enter key
 Date: Dec 10th, 2023
*/

/*
  Documentataion for Assignment 3 - Q2
 
 Program Name: (Enter -based) - File printer

 Program Purpose:
   Demonstrates a file given by the user which prints each line by user pressing the enter key.
   It utilizes File manipulation and streaming methods.

 Compile: (assuming MinGW-W64  is run	ning): g++ -o Assignment3Question2 Assignment3Question2.cpp
 Execution (assuming MinGW-W64 is running): .\Assignment3Question2 
 Notes: Main must return type int
 
 Classes: No classes

 Variables:
inputfile - holds the file and opens this string using ifstream
linespace - string variable which transfers the read content into the variable
enter - code the permits only enter key manipulation 

/*
 Test plan layout:
 Normal case: (Asking for excerpt.txt as requested by question )	
 
Enter the name of input file: excerpt.txt
There was nothing so VERY remarkable in that; nor did Alice

think it so VERY much out of the way to hear the Rabbit say to

itself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought

it over afterwards, it occurred to her that she ought to have

wondered at this, but at the time it all seemed quite natural);

but when the Rabbit actually TOOK A WATCH OUT OF ITS WAISTCOAT-

POCKET, and looked at it, and then hurried on, Alice started to

her feet, for it flashed across her mind that she had never

before seen a rabbit with either a waistcoat-pocket, or a watch to

take out of it, and burning with curiosity, she ran across the

field after it, and fortunately was just in time to see it pop

down a large rabbit-hole under the hedge.

In another moment down went Alice after it, never once

considering how in the world she was to get out again.

The rabbit-hole went straight on like a tunnel for some way,

and then dipped suddenly down, so suddenly that Alice had not a

moment to think about stopping herself before she found herself

falling down a very deep well.

Either the well was very deep, or she fell very slowly, for she

had plenty of time as she went down to look about her and to

wonder what was going to happen next. First, she tried to look

down and make out what she was coming to, but it was too dark to

see anything; then she looked at the sides of the well, and

noticed that they were filled with cupboards and bookshelves;

here and there she saw maps and pictures hung upon pegs. She

took down a jar from one of the shelves as she passed; it was

labelled `ORANGE MARMALADE', but to her great disappointment it

was empty: she did not like to drop the jar for fear of killing

somebody, so managed to put it into one of the cupboards as she

fell past it.

 Bad Data case 1 (numerical input (large numbers))
 Enter the name of input file: 34566543
 Error with file entry !
 -terminates

 Bad Data case 2 (pressing other keys with correct file )
Enter the name of input file: excerpt.txt
There was nothing so VERY remarkable in that; nor did Alice

- doesnt advance but accepts any key letter or number only with enter it will print next line 

 Bad Data case 3 (a random txt input made )
 Enter the name of input file: yts.txt
 Error with file entry !
 -terminates 

 Bad Data case 4 (Non -alpha input check)
 Enter the name of input file: 65h4^&
 Error with file entry !
-terminates


 Discussion:
 	This program uses File I/O methods and steam functions to operate. A function is used to accept a string which holds the file.
	With provided error checking, the file is read and printed to the display.
	The code uses a do while loop to  allow the enter key to be inputted solely and allow next lines of file.
	The code only accepts proper txt files in the computer and allows only enter key to output next lines of the file.
 
*/

#include <iostream>								// initial declarations 
using namespace std;
#include <string>							 
#include <fstream>		// stream declarations - file accessing
#include <sstream>		// used for memory string manipulation 

int main(){

string inputfile;
// asking user for file name and take file and put it in temp variable.
std::cout << "Enter the name of input file: ";
std:: getline(std::cin, inputfile);

// open file using ifstream:
std::ifstream filed(inputfile);
if(filed.fail()){					// error handling 
	std::cerr <<"Error with file entry !";

}
// read the file inputed and display each line using while loop
string linespace;
while (std::getline(filed,linespace)){
	std:: cout << linespace << std:: endl;

// code to specifically input new line by enter key
	char enter; 
	do{		// do while 
		enter = std::cin.get();	// feature allows new charcter input from user
	}while(enter != '\n'); 	// new line character == enter key 
	}

}




