
//inherit2i.cpp implementation file for the PersonType class#include <iostream>
using namespace std;
#include <string>
#include "inherit2.h"
using namespace std;

/**< The print function prints the name of a person to the console. There are no parameters.
	 Input: None
	 Output: firstName, lastName */
void personType::print() const
{
	cout << firstName << " " << lastName;
}

/**< The setName function assigns the first and last names of a person to the corresponding
	 variables. The first name is passed through the string parameter first and the last
	 name is passed through the string parameter last.
	 Input: None
	 Output: None */
void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

/**< The getName function returns the first and last names of a person. The first name is
	 passed by reference with the string parameter first and the last name is passed by
	 reference with the string parameter last.
	 Input: None
	 Output: None */
void personType::getName(string& first, string& last)
{
	first = firstName;
	last = lastName;
}
	//constructor with parameters
personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}
personType::personType() //default constructor
{
	firstName = "";
	lastName = "";
}
