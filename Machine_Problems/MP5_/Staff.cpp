// Staff Implementation File
// By: Matt Hole

#include<iostream>
#include <string>

#include "Staff.h"

using namespace std;


Staff::Staff()
{
	title = "No Title";
}

Staff::Staff(const Staff& e) : Employee(e)
{
	*this = e;
}

Staff& Staff::operator=(const Staff& s)
{
	Employee::operator=(s);
	title = s.title;
	return *this;
}

Staff::~Staff()
{

}

void Staff::Print()
{
	Employee::Print();
	cout << "\nTitle: " << title << endl;
	

}

void Staff::Input()
{
	Employee::Input();
	cout << "Please input employee title. \nIf title is more than one word use underscore between words\n";
	cin >> title;
	
}