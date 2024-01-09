/* 
 Name: Rayan Kaleem Mohammed
 Athabasca University ID: 3669212
 Description: Bookshelf project - This is a source of a few books initally and then combiniing a combinatioin 12 books and outputting their information normally then sorted accordingly.
 Date: Dec 19th, 2023
*/

/*
  Documentataion for Assignment 3 - Q5
 
 Program Name:  Bookshelf project

 Program Purpose:
   Demonstrates a series of 12 books with thier information, then the sorted version of the books based on Name then year of publication
   This code utilizes get/set methods, and classes, functions and sorting methods.
  
 Compile: (assuming MinGW-W64  is running): g++ -o Assignment3Question5 Assignment3Question5.cpp
 Execution (assuming MinGW-W64 is running): .\Assignment3Question5
 
 Notes: Main must return type int
 
 Classes: 
 Book class - Holds the crieria of each book examined in private , and holds all the get/set methods
 Bookshelf - Holds a vector container of book class elements and utilizes them to
 create 3 methods. Sorting method, original order method, and adding book to shelf container method.
 Comparator - A class that compares the titles and years of the books to set the correct order and allows the sort method to 
 print based on it's decision.

 Variables: These are main variables used for each book 
string title;                   
long long IsbnNuM;				
string author;
int edition;
string publisher;
int year;

bookvar - vector container for the bookshelf class.
orderbook - book object which set the book's get/set methods in a order with the methods and information.
add - takes book object for adding a book
createbookshelf - arraylist for the bookshelf and what is outputted in main

Thereare also more minor variables which are used and are self explanatory if not similar.


*/

/*
 Test plan layout:

 Normal Case:(No user input required ):

The Divergent series: 

 Book 1:
 Title : Divergent
 Author : Veronica Roth
 Edition : 1
 Publisher : Harper Collins Children Books
 Year Published : 2011
 ISBN Number : 9780062024022

 Book 2:
 Title : Insurgent
 Author : Veronica Roth
 Edition : 1
 Publisher : Katherine Tegen Books
 Year Published : 2012
 ISBN Number : 9780062024046

 Book 3:
 Title : Allegiant
 Author : Veronica Roth
 Edition : 1
 Publisher :  Harper Collins Children Books
 Year Published : 2013
 ISBN Number : 9780062287335

Books entered in the way there originally entered:
(Title: Divergent) , (Author: Veronica Roth) , (Edition: 1) , (Publisher: Harper Collins Children Books) , (Year Published: 2011) , (ISBN Number: 9780062024022)
(Title: Insurgent) , (Author: Veronica Roth) , (Edition: 1) , (Publisher: Katherine Tegen Books) , (Year Published: 2012) , (ISBN Number: 9780062024046)
(Title: Allegiant) , (Author: Veronica Roth) , (Edition: 1) , (Publisher:  Harper Collins Children Books) , (Year Published: 2013) , (ISBN Number: 9780062287335)
(Title: The Last Heroes) , (Author: Palagummi Sainath ) , (Edition: 1) , (Publisher: India Viking) , (Year Published: 2023) , (ISBN Number: 9760062022522)
(Title: Victory City) , (Author: Salman Rushdie) , (Edition: 1) , (Publisher: Random House) , (Year Published: 2023) , (ISBN Number: 7660062024046)
(Title: Oath and Honor: A Memoir and a Warning) , (Author: Liz Cheney) , (Edition: 1) , (Publisher: Hachette Book Club) , (Year Published: 2023) , (ISBN Number: 8960067654335)
(Title: The Exchange: After the Firm) , (Author: John Grisham) , (Edition: 1) , (Publisher: Doubleday) , (Year Published: 2023) , (ISBN Number: 8562432024022)
(Title: How the Grinch Stole Christmas!) , (Author: Dr Seuss) , (Edition: 1) , (Publisher: Random House) , (Year Published: 1957) , (ISBN Number: 876234024046)
(Title: Never Lie) , (Author: Freida McFadden) , (Edition: 1) , (Publisher: Hollywood Upstairs Press) , (Year Published: 2022) , (ISBN Number: 9870062287615)
(Title: Judgment Prey) , (Author: John Sandford) , (Edition: 1) , (Publisher: G.P. Putnam's Sons) , (Year Published: 2023) , (ISBN Number: 9787865224022)
(Title: Pestilence) , (Author: Laura Thalassa) , (Edition: 1) , (Publisher: Bloom Books ) , (Year Published: 2023) , (ISBN Number: 9007062024046)
(Title: Elon Musk) , (Author: Walter Isaacson) , (Edition: 1) , (Publisher: Simon & Schuster) , (Year Published: 2023) , (ISBN Number: 9876534567335)

Books sorted by name , then by publication :
(Title: Allegiant) , (Author: Veronica Roth) , (Edition: 1) , (Publisher:  Harper Collins Children Books) , (Year Published: 2013) , (ISBN Number: 9780062287335)
(Title: Divergent) , (Author: Veronica Roth) , (Edition: 1) , (Publisher: Harper Collins Children Books) , (Year Published: 2011) , (ISBN Number: 9780062024022)
(Title: Elon Musk) , (Author: Walter Isaacson) , (Edition: 1) , (Publisher: Simon & Schuster) , (Year Published: 2023) , (ISBN Number: 9876534567335)
(Title: How the Grinch Stole Christmas!) , (Author: Dr Seuss) , (Edition: 1) , (Publisher: Random House) , (Year Published: 1957) , (ISBN Number: 876234024046)
(Title: Insurgent) , (Author: Veronica Roth) , (Edition: 1) , (Publisher: Katherine Tegen Books) , (Year Published: 2012) , (ISBN Number: 9780062024046)
(Title: Judgment Prey) , (Author: John Sandford) , (Edition: 1) , (Publisher: G.P. Putnam's Sons) , (Year Published: 2023) , (ISBN Number: 9787865224022)
(Title: Never Lie) , (Author: Freida McFadden) , (Edition: 1) , (Publisher: Hollywood Upstairs Press) , (Year Published: 2022) , (ISBN Number: 9870062287615)
(Title: Oath and Honor: A Memoir and a Warning) , (Author: Liz Cheney) , (Edition: 1) , (Publisher: Hachette Book Club) , (Year Published: 2023) , (ISBN Number: 8960067654335)
(Title: Pestilence) , (Author: Laura Thalassa) , (Edition: 1) , (Publisher: Bloom Books ) , (Year Published: 2023) , (ISBN Number: 9007062024046)
(Title: The Exchange: After the Firm) , (Author: John Grisham) , (Edition: 1) , (Publisher: Doubleday) , (Year Published: 2023) , (ISBN Number: 8562432024022)
(Title: The Last Heroes) , (Author: Palagummi Sainath ) , (Edition: 1) , (Publisher: India Viking) , (Year Published: 2023) , (ISBN Number: 9760062022522)
(Title: Victory City) , (Author: Salman Rushdie) , (Edition: 1) , (Publisher: Random House) , (Year Published: 2023) , (ISBN Number: 7660062024046)
 
Other Cases: This will depend on the output of books created by creator

 Discussion:
 From Q2 of A2: Covers the first display of 3 books with get/set methods 
	This program utilizes classes and get/set methods to create a a series of books with their updated information.
	The program will display 3 books (or as many books dependant on the creator) with all the provided information of the private variables.
	This code displays the divergent series of books and takes no input from user.
The next output is based on vector libraries, vectors of objects; comparator class (if–else); display to standard output aswell as class instances.
	This program includes a Bookshelf class which creates a vetor container of the book class and it's variables for use. 
	Utilizing this it createsmethods to add books, sort, order books all using basic vector objects calls and output statements.
	Another class is created to check/modify the order and the sort function is used to finsish 
	The display incorates a list of 12 book elemnts added to shelf and 1st printed based on methods called in main, then by sorting order
	No user input needed for either.

*/

#include <iostream>								// initial declarations 
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


// Extracted from Assignment 2 Q2: 

class Book{             // Book class defined 

private:                // Declarations of attributes with according data types 
string title;                   //  (Under private class)
long long IsbnNuM;				// for larger number use
string author;
int edition;
string publisher;
int year;

public:

// Getter Methods -Retrive private value  
string gettitle() const{		//  const keword -> to avoid modifying object 
    return title;						 
}
string getauthor() const{			
    return author;						 
}
string getpublisher() const{			
    return publisher;						 
}
long long  getIsbnNuM() const{		
    return IsbnNuM;						 
}					 
int getedition() const{			
    return edition;						 
}
int getYear() const {
	return year;
}
 
// Setter Methods - Modify vlaue of the private

void settittle(string newertitle){
	title = newertitle;
}
void setauthor(string newerauthor){
	author = newerauthor;
}
void setpublisher(string newerpublisher){
	publisher = newerpublisher;
}
void setIsbnNuM( long long newerIsbnNuM){ 	// For really long numbers - long long - can strore 64bits rather then 32 like int
	IsbnNuM = newerIsbnNuM;
}
void setedition(int neweredition){
	edition = neweredition;
}
void setYear( int newerYear){
	year = newerYear;
}

};

// https://www.geeksforgeeks.org/vector-in-cpp-stl/

class Bookshelf{
	private:
		std::vector<Book> bookvar; // bookvar is a vector container holding objects from the Book class 

	public:
		void addingbook( Book& add){ // function creating a variable linking to Book object
			bookvar.push_back(add); // adding book element using push_back method to the bookvar vector 
		}

		// First Display - order when entered

		void originalorder(){
			for(const auto& orderbook : bookvar){ // using const auto& to reference (Book class type ) iterates over orderbook object of bookvar vector 
				std:: cout << "(Title: "<< orderbook.gettitle() << ") , (Author: " << orderbook.getauthor() << ") , (Edition: " << orderbook.getedition() << ") , (Publisher: " << orderbook.getpublisher() << ") , (Year Published: "<< orderbook.getYear() << ") , (ISBN Number: " << orderbook.getIsbnNuM() << ") " << std::endl;
			} 	// This order is seen through methods called in main of Book class testing books 
		}

		void sort(){
			std::sort(bookvar.begin(), bookvar.end(), Comparator()); 		// using std::sort for sorting range and begin and end methods for elements range.
			// call the comparator in the end to allow sorting properly aswell
		}

		class Comparator{
			public:
				bool operator()( Book bookA , Book bookB){ 	// utilized operator() to allow class to be used as function and parameterized 2 objecft to compare
				// 1. compare names first

				int comparetTo = bookA.gettitle().compare(bookB.gettitle()); // using compare() method to compare. names will return integer and will be less, equal or greater then zero.
				if(comparetTo < 0){
					return true; // means bookA has title that comes first 
				}else if(comparetTo == 0){
					// compare publication
					return bookA.getYear() < bookB.getYear();  // comparing booA and BookB year of publications: it will return true if bookA < bookB
				}
				return false; // return false otherwise and mans bookB comes in the order first then BookA.
				}

		};

};


// Output statements: (Created) 3 books with attributes

int main(){

// Below I have my 12 instances of books - first 3 are for testing the Book class and the extra 9 and the previos 3 will be added to the shelf for testing

Book bookA;							// Book A - objects created and setted the values 
bookA.settittle("Divergent");
bookA.setauthor("Veronica Roth");
bookA.setpublisher("Harper Collins Children Books");
bookA.setIsbnNuM(9780062024022); 
bookA.setedition(1);
bookA.setYear(2011);

Book bookB;							// Book B - objects created and setted the values 
bookB.settittle("Insurgent");
bookB.setauthor("Veronica Roth");
bookB.setpublisher("Katherine Tegen Books");
bookB.setIsbnNuM(9780062024046); 
bookB.setedition(1);
bookB.setYear(2012);

Book bookC;							// Book C - objects created and setted the values 
bookC.settittle("Allegiant");
bookC.setauthor("Veronica Roth");
bookC.setpublisher(" Harper Collins Children Books");
bookC.setIsbnNuM(9780062287335); 
bookC.setedition(1);
bookC.setYear(2013);

Book bookD;							// Book D - objects created and setted the values 
bookD.settittle("The Last Heroes");
bookD.setauthor("Palagummi Sainath ");
bookD.setpublisher("India Viking");
bookD.setIsbnNuM(9760062022522); 
bookD.setedition(1);
bookD.setYear(2023);

Book bookE;							// Book E - objects created and setted the values 
bookE.settittle("Victory City");
bookE.setauthor("Salman Rushdie");
bookE.setpublisher("Random House");
bookE.setIsbnNuM(7660062024046); 
bookE.setedition(1);
bookE.setYear(2023);

Book bookF;							// Book F - objects created and setted the values 
bookF.settittle("Oath and Honor: A Memoir and a Warning");
bookF.setauthor("Liz Cheney");
bookF.setpublisher("Hachette Book Club");
bookF.setIsbnNuM(8960067654335); 
bookF.setedition(1);
bookF.setYear(2023);

Book bookG;							// Book G - objects created and setted the values 
bookG.settittle("The Exchange: After the Firm");
bookG.setauthor("John Grisham");
bookG.setpublisher("Doubleday");
bookG.setIsbnNuM(8562432024022); 
bookG.setedition(1);
bookG.setYear(2023);

Book bookH;							// Book H  - objects created and setted the values 
bookH.settittle("How the Grinch Stole Christmas!");
bookH.setauthor("Dr Seuss");
bookH.setpublisher("Random House");
bookH.setIsbnNuM(876234024046); 
bookH.setedition(1);
bookH.setYear(1957);

Book bookI;							// Book I - objects created and setted the values 
bookI.settittle("Never Lie");
bookI.setauthor("Freida McFadden");
bookI.setpublisher("Hollywood Upstairs Press");
bookI.setIsbnNuM(9870062287615); 
bookI.setedition(1);
bookI.setYear(2022);

Book bookJ;							// Book J - objects created and setted the values 
bookJ.settittle("Judgment Prey");
bookJ.setauthor("John Sandford");
bookJ.setpublisher("G.P. Putnam's Sons");
bookJ.setIsbnNuM(9787865224022); 
bookJ.setedition(1);
bookJ.setYear(2023);

Book bookK;							// Book K - objects created and setted the values 
bookK.settittle("Pestilence");
bookK.setauthor("Laura Thalassa");
bookK.setpublisher("Bloom Books ");
bookK.setIsbnNuM(9007062024046); 
bookK.setedition(1);
bookK.setYear(2023);

Book bookL;							// Book L - objects created and setted the values 
bookL.settittle("Elon Musk");
bookL.setauthor("Walter Isaacson");
bookL.setpublisher("Simon & Schuster");
bookL.setIsbnNuM(9876534567335); 
bookL.setedition(1);
bookL.setYear(2023);

// Displayed books atrributes - utilized get methods - as they are read-only and work better - Testing book class display
//This is the order they were put in array list for bookshelf portion
std:: cout << " The Divergent series: " << std::endl;
std::cout << endl;
std:: cout <<" Book 1: "<< std::endl;
std:: cout <<" Title : "<< bookA.gettitle() << std::endl;
std:: cout <<" Author : "<< bookA.getauthor() << std::endl;
std:: cout <<" Edition : "<< bookA.getedition() << std::endl;
std:: cout <<" Publisher : "<< bookA.getpublisher() << std::endl;
std:: cout <<" Year Published : " << bookA.getYear() << std::endl;
std:: cout <<" ISBN Number : " << bookA.getIsbnNuM() << std::endl;

std::cout << endl;
std:: cout <<" Book 2: "<< std::endl;
std:: cout <<" Title : "<< bookB.gettitle() << std::endl;
std:: cout <<" Author : "<< bookB.getauthor() << std::endl;
std:: cout <<" Edition : "<< bookB.getedition() << std::endl;
std:: cout <<" Publisher : "<< bookB.getpublisher() << std::endl;
std:: cout <<" Year Published : " << bookB.getYear() << std::endl;
std:: cout <<" ISBN Number : " << bookB.getIsbnNuM() << std::endl;

std::cout << endl;
std:: cout <<" Book 3: "<< std::endl;
std:: cout <<" Title : "<< bookC.gettitle() << std::endl;
std:: cout <<" Author : "<< bookC.getauthor() << std::endl;
std:: cout <<" Edition : "<< bookC.getedition() << std::endl;
std:: cout <<" Publisher : "<< bookC.getpublisher() << std::endl;
std:: cout <<" Year Published : " << bookC.getYear() << std::endl;
std:: cout <<" ISBN Number : " << bookC.getIsbnNuM() << std::endl;




// Create the arraylist --> bookshelf
Bookshelf createbookshelf;
// add to list --> bookshelf
createbookshelf.addingbook(bookA);
createbookshelf.addingbook(bookB);
createbookshelf.addingbook(bookC);
createbookshelf.addingbook(bookD);
createbookshelf.addingbook(bookE);
createbookshelf.addingbook(bookF);
createbookshelf.addingbook(bookG);
createbookshelf.addingbook(bookH);
createbookshelf.addingbook(bookI);
createbookshelf.addingbook(bookJ);
createbookshelf.addingbook(bookK);
createbookshelf.addingbook(bookL);

//list the original order first:
std::cout<< std::endl;
std::cout<< "Books entered in the way there originally entered: "<< std::endl;
createbookshelf.originalorder();

// now sort them:
createbookshelf.sort();

// now display the sorted books:
std::cout<< std::endl;
std::cout<< "Books sorted by name , then by publication : "<< std::endl;
createbookshelf.originalorder();


};
