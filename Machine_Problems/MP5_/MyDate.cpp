// MyDate Implementation File
// By: Matt Hole


#include<iostream>

#include "MyDate.h"

using namespace std;

MyDate::MyDate()
{
	year = 1;
	month = 1;
	day = 1;
}

MyDate::MyDate(const MyDate& d)
{
	*this = d; 
}

MyDate& MyDate::operator=(const MyDate& d)
{
	year = d.year;
	month = d.month;
	day = d.day;

	return *this;

}

MyDate::~MyDate()
{

}

void MyDate::Input()
{
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;
	cout << "Year: ";
	cin >> year;
	
	
}

void MyDate::Print()
{
	cout << month << "/" << day << "/" << year;
}

void MyDate::SetDate(int m, int d, int y)
{
	year = y;
	month = m;
	day = d;
}

void MyDate::SetYear(int y)
{
	year = y;
}

void MyDate::SetMonth(int m)
{
	month = m;
}

void MyDate::SetDay(int d)
{
	day = d;
}

int MyDate::GetYear()
{
	return year;
}

int MyDate::GetMonth()
{
	return month;
}

int MyDate::GetDay()
{
	return day;
}

