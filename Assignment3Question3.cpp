/* 
 Name: Rayan Kaleem Mohammed
 Athabasca University ID: 3669212
 Description: TextFile Reader - Given the content of a file, breakdown each line and print the contents of the file and match it with each line.
 Date: December 14th, 2023
*/

/*
  Documentataion for Assignment 3 - Q3
 
 Program Name: TextFile Reader

 Program Purpose:
   Demonstrates a command-line argument coding algorith which takes a given file and prints the contents of the file along with the repeated content with
   line arguments - each line is specified. 2 classes aswell and i/o methods and array manipulation was used. 

 Compile: (assuming MinGW-W64  is running): g++ Assignment3Question3.cpp -o Assignment3Question3
 Execution (assuming MinGW-W64 is running): .\Assignment3Question3 excerpt.txt
 
 Notes: Main must return type int
 
 Classes: 
 TextFileReader - Class that contains array of 100 elements and holds 3 main functions which reads the file
 and keeps track of lines in the file always under 100.
 and has 2 methods - display and contents which concatenates the non-string elements into one line and then will create the 
 display function.

 TextFileReaderDemo - a class which displays the contents  and line display of file by creating an instance to the previous class.
 It utilizes command line- chceks to find the file name and undergoes the printing in main.

 Variables:
 variable: holds the array of 100 elements.
 exerptfile - holds the file and opens this string using ifstream
 num - keeps track of lines in file
 currentline - file is inputted into this string after it is read by getline

 the functions, display and contents:
 k = iteration variable for array
 buffervar - creates the line of strings so it can be outputted properly.

Thereare also more minor variables which are used and are self explanatory if not similar.
	
*/

/*
 Test plan layout:

It is important this Test plan is used with commandline arguments not by simply running code 

 Normal Case: (Using command line arguments - exactly from compile and run above is tested.)

 Content of File:                 

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


Content with Line #:
line 1: There was nothing so VERY remarkable in that; nor did Alice
line 2: think it so VERY much out of the way to hear the Rabbit say to
line 3: itself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought
line 4: it over afterwards, it occurred to her that she ought to have
line 5: wondered at this, but at the time it all seemed quite natural);
line 6: but when the Rabbit actually TOOK A WATCH OUT OF ITS WAISTCOAT-
line 7: POCKET, and looked at it, and then hurried on, Alice started to
line 8: her feet, for it flashed across her mind that she had never
line 9: before seen a rabbit with either a waistcoat-pocket, or a watch to
line 10: take out of it, and burning with curiosity, she ran across the
line 11: field after it, and fortunately was just in time to see it pop
line 12: down a large rabbit-hole under the hedge.
line 13: In another moment down went Alice after it, never once
line 14: considering how in the world she was to get out again.
line 15: The rabbit-hole went straight on like a tunnel for some way,
line 16: and then dipped suddenly down, so suddenly that Alice had not a
line 17: moment to think about stopping herself before she found herself
line 18: falling down a very deep well.
line 19: Either the well was very deep, or she fell very slowly, for she
line 20: had plenty of time as she went down to look about her and to
line 21: wonder what was going to happen next. First, she tried to look
line 22: down and make out what she was coming to, but it was too dark to
line 23: see anything; then she looked at the sides of the well, and
line 24: noticed that they were filled with cupboards and bookshelves;
line 25: here and there she saw maps and pictures hung upon pegs. She
line 26: took down a jar from one of the shelves as she passed; it was
line 27: labelled `ORANGE MARMALADE', but to her great disappointment it
line 28: was empty: she did not like to drop the jar for fear of killing
line 29: somebody, so managed to put it into one of the cupboards as she
line 30: fell past it.
-terminates

Bad Case 1:(Numerical input as file name)
Error with entry!Content of File:



Content with Line #: 
(Error message is printed and no content is displayed)

Bad Case 2: (Non - alpha input check)
Error with entry!Content of File:



Content with Line #: 

Bad Case 3: multiple txt input
PS C:\Users\rayan\OneDrive\Desktop\Comp course\Comp 206 #3> ./Assignment3Question3 excerpt.txt test.txt
Error

This is because of error handling 

Bad Case 4: (null term)
Error
terminate called after throwing an instance of 'std::logic_error'
  what():  basic_string::_M_construct null not valid

 Discussion:
 	This program uses 2 classes - 1st class initilizes the array and has various constructors and methods for display.
	It reads the file and fills it with the content, creates stringbuffer, and display lines for each file line.
	The 2nd class Demo's the output statements with calling methods. It also error checks the command line usage.
	Finally output will display (if file is accepted), the content of file followed by each line of the content displayed accordingly.
	No user input required. and doesn't accept more than 2 command line prompts, and only valid txt files.
*/

#include <iostream>								// initial declarations 
using namespace std;
#include <string>	
#include <fstream>		// stream declarations - file accessing


class TextFileReader{

private:
	string variable[100];	// array of 100 elements

public: 
// deafult constructor 
	TextFileReader() {}

//parametrized constructor with opening file and reading the contents of the string and filling it 
	TextFileReader(string exerptfile){
		std::ifstream filed(exerptfile);	// open file
		if(filed.fail()){
			std::cerr << "Error with entry!";	// error handling
			
		}else{
			int num = 0;	// keep track of num in array
			string currentline; 	// extracting into this variable
			while (getline(filed, currentline) && num < 100){ // condition to be under 100 in array and grabbed line by line of file and input int string variable
				variable[num] = currentline; 	// assigning array to lines 
				num++;
			}
		}
	}

// member function contents()
// concatenating non-empty strings in array into single string with a space
	string contents(){
		string buffervar; 	// text from array will be incorporated
		for( string linespace : variable){	// iterate through each line in array
			if(linespace.size() > 0){		// checks if line is not empty using empty
				buffervar = buffervar + linespace + "\n"; 	// builds a string containing non-empty lines - (buffer string)
			}								//new line character after each line 
		}
		return buffervar;
	}

// Display function:

	void Display(){
		for(int k = 0; k < 100 && variable[k].size() > 0; k++){ // k is set to zero for array and iterates through array elements and increments after
			std:: cout << "line " << (k+1) << ": " << variable[k] << std::endl; 	// displays sentence with number and string content
		}
	}
};
// new class reader

class TextFileReaderDemo{

public: 
//  main method 
// https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
// Checking commnnad line compatibility to move on 
	static void main(int num, char* command[]){	// Num - # of arguments and command- array of strings of commandline arguments
		if(num != 2){	// if there is not 2 arguments like normal 
			std::cerr << "Error" << std::endl;
			 
		}

		std::string exerptfile = command[1];		// using to grasp filename from command line - 2nd argument
		TextFileReader read(exerptfile);		// creating instance of textfilereader class - helps reads file and puts in array of strings

		// Print info in sections:
		std:: cout << "Content of File:\n";
		std:: cout << endl;
		std:: cout << read.contents() << std::endl;
		std:: cout << endl;
	// display output 
		std::cout << "Content with Line #: " << std::endl;
		read.Display();

	}
};

int main(int num, char* command[]){	// representing command line signature argument variables
	if(num != 2){	// if there is not 2 arguments like normal 
		std::cerr << "Error" << std::endl;
	}else{
		TextFileReaderDemo::main(num, command); // calling method for output 
		return 0;
	}
	
}





