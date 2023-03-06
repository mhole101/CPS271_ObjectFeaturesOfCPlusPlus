// Person Implementation File
// By: Matt Hole

#include<iostream>
#include <string>

#include "Person.h"

using namespace std;



Person::Person()
{
	name = "No Name";
	phoneNumber = "No Number";
	email = "No Email";
}

Person::Person(const Person& p)
{
	*this = p;
}

Person& Person::operator=(const Person& p)
{
	name = p.name;
	birthDate = p.birthDate;
	phoneNumber = p.phoneNumber;
	email = p.email;
	return *this;
}

Person::~Person()
{

}

void Person::Print()
{
	cout << "\nName: " << name
		<< "\nBirthdate: " << birthDate.GetMonth() << "/" << birthDate.GetDay() << "/" << birthDate.GetYear()
		<< "\nPhone Number: " << phoneNumber
		<< "\nEmail: " << email;
}

void Person::Input()
{
	string fName;
	string lName;
	cout << "\nInput name: ";
	cin >> fName;
	cin >> lName;
	name = fName + " " + lName;
	cout << "Input birthday\n";
	birthDate.Input();
	cout << "Input phone number: ";
	cin >> phoneNumber;
	cout << "Input email: ";
	cin >> email;
	
	

}

