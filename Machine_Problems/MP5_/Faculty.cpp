// Employee Implementation File
// By: Matt Hole

#include<iostream>
#include <string>
#include <cstring>

//#include "Person.h"
//#include "MyDate.h"
//#include "Employee.h"
#include "Faculty.h"

using namespace std;



Faculty::Faculty()
{
	officeRoomNum = 0;
	tenure = false;
	officeHours.push_back(MyDate::MyDate());

}

Faculty::Faculty(const Faculty& e) : Employee(e)
{
	*this = e;
}

Faculty& Faculty::operator=(const Faculty& e)
{
	Employee::operator=(e);
	officeRoomNum = e.officeRoomNum;
	tenure = e.tenure;
	officeHours = e.officeHours;
	return *this;
}

Faculty::~Faculty()
{

}

void Faculty::Print()
{
	unsigned int vecSize;
	vecSize = officeHours.size();
	string tenureStr;
	if (tenure == true)
		tenureStr = "Yes";
	else 
		tenureStr = "No";
	Employee::Print();
	cout << "\nOffice Room Number: " << officeRoomNum
		<< "\nTenure: " << tenureStr
		<< "\nOffice Hours:\n";
	if (vecSize > 0)
	{
		for (int i = 0; i < vecSize; i++)
		{
			officeHours[i].Print();
			cout << endl;
		}
			
	}

}

void Faculty::Input()
{
	char tenureChar;
	string oHoursStr;
	unsigned int oHoursStrLen;
	Employee::Input();
	cout << "Please type Faculty memebers office number: ";
	cin >> officeRoomNum;
	cout << "Does this Faculty member have tenure? Type Y or N: ";
	cin >> tenureChar;
	switch (tenureChar)
	{
	case 'y':
	case 'Y':
		tenure = true;
		break;
	case 'n':
	case 'N':
		tenure = false;
		break;
	default:
		cout << "Did not type y or n";
		break;
	}
	officeHours.clear();
	cout << "Would you like to add available office dates to this faculty?\n"
		<< "If yes press Y then enter, if no type any key then enter\n";
	cin >> oHoursStr;
	
	while (oHoursStr == "Y" || oHoursStr == "y")
	{
		
		if (oHoursStr == "Y" || oHoursStr == "y")
		{
			MyDate oHoursTemp;
			oHoursTemp.Input();
			officeHours.push_back(oHoursTemp);

		}
		
		cout << "Would you like to add available office dates to this faculty? If yes press Y, type any key\n";
		cin >> oHoursStr;
			

	}

}