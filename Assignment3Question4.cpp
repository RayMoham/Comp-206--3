/* 
 Name: Rayan Kaleem Mohammed
 Athabasca University ID: 3669212
 Description: Array math formulation table - A table of 2 array elements being added - a normal array of 25 and an array of25 elements squared
Date: Dec 17th 2023
*/

/*
  Documentataion for Assignment 3 - Q4
 
 Program Name: Array math formulation table

 Program Purpose:
   Demonstrates a table addition statements betweeen a normal array and squared array. Each element is compared and added. This utilizes
   array manipulation and output statements.

 Compile: (assuming MinGW-W64  is running): g++ -o Assignment3Question4 Assignment3Question4.cpp
 Execution (assuming MinGW-W64 is running): .\Assignment3Question4
 
 Notes: Main must return type int
 
 Classes: No classes

 Arrays: These all hold 25 elements and are floats 
 arrayA
 arrayB
 arrayC

 Variables:
 k - int variable to iterate through each array 
	

/*
 Test plan layout:

 Normal Case(Just output) - No input needed

Float Array Table: 

0; 0 + 0 = 0
1; 1 + 1 = 2
2; 2 + 4 = 6
3; 3 + 9 = 12
4; 4 + 16 = 20
5; 5 + 25 = 30
6; 6 + 36 = 42
7; 7 + 49 = 56
8; 8 + 64 = 72
9; 9 + 81 = 90
10; 10 + 100 = 110
11; 11 + 121 = 132
12; 12 + 144 = 156
13; 13 + 169 = 182
14; 14 + 196 = 210
15; 15 + 225 = 240
16; 16 + 256 = 272
17; 17 + 289 = 306
18; 18 + 324 = 342
19; 19 + 361 = 380
20; 20 + 400 = 420
21; 21 + 441 = 462
22; 22 + 484 = 506
23; 23 + 529 = 552
24; 24 + 576 = 600


 Discussion:
	This program uses 3 seperate array creation with 25 elements. Each array runs through a for loop and 
	outputs it's change. 
	1st - normal float values, 2nd - to the power of 2, 3rd is the addition of both.
	The display demonstrates the 1st array number + the 2nd array number = the combined value which is stored in 3rd array.
	No input needed.
 	
*/

#include <iostream>								// initial declarations 
using namespace std;
#include <string>	
#include <cmath> // math squared details	


int main(){
// 3 arrays of 25 elements:
float arrayA[25];
float arrayB[25];
float arrayC[25];

// first Array - loop counter value

for(int k = 0; k < 25; k++){ 	// run through 25 elements 
	arrayA[k] = float(k); 		// fill vlues of array with loop counter and convert to float 
}

// 2nd Array - loop counter value squared

for(int k = 0; k < 25; k++){ 	// run through 25 elements 
	arrayB[k] = float(std::pow(k,2)); 		// fill vlues of array with loop counter squared using c math library and convert to float 
}

// Add arrays 

for(int k = 0; k < 25; k++){ 	// run through 25 elements 
	arrayC[k]  = arrayA[k] + arrayB[k]; 		// fill vlues of array with loop counter and convert to float 
}


// Display :

std:: cout << "Float Array Table: " << std:: endl;
std:: cout << endl;
for(int k = 0; k < 25; k++){ 	// run through 25 elements 
	std:: cout << k << "; " << arrayA[k] << " + " << arrayB[k] << " = " << arrayC[k] << std:: endl;
}

return 0;
}
// Simple program using looping mechnism and array manipulation to store and add elements