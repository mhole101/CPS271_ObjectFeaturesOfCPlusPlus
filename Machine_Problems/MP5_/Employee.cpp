// Employee Implementation File
// By: Matt Hole

#include<iostream>
#include <string>

#include "Person.h"
#include "Employee.h"

using namespace std;


Employee::Employee()
{
	salary = NULL;
	dateOfHire.SetDate(11, 7, 2020);
}

Employee::Employee(const Employee& e) : Person(e)
{
	*this = e;
}

Employee& Employee::operator=(const Employee& e)
{
	Person::operator=(e);
	salary = e.salary;
	dateOfHire = e.dateOfHire;
	return *this;
}

Employee::~Employee()
{

}

void Employee::Input()
{
	int month, day, year;
	Person::Input();
	cout << "Employee Salary: ";
	cin >> salary;
	cout << "Date Hired" << "\nMonth: ";
	cin >> month;
	dateOfHire.SetMonth(month);
	cout << "Day: ";
	cin >> day;
	dateOfHire.SetDay(day);
	cout << "Year: ";
	cin >> year;
	dateOfHire.SetYear(year);
	
}

void Employee::Print()
{
	Person::Print();
	cout << "\nSalary: " << salary
		<< "\nDate hired: " << dateOfHire.GetMonth() << "/" << dateOfHire.GetDay() << "/" << dateOfHire.GetYear();
}



