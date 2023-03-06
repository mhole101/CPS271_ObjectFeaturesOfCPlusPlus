// MyDate Header File
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _MYDATE_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _MYDATE_H_

class MyDate
{
	int year;
	int month;
	int day;
	
public:
	MyDate();
	MyDate(const MyDate& d);
	MyDate&  operator = (const MyDate& d);
	virtual ~MyDate();
	virtual void Input();
	virtual void Print();
	void SetDate(int y, int m, int d);
	void SetYear(int y);
	void SetMonth(int m);
	void SetDay(int d);
	int GetYear();
	int GetMonth();
	int GetDay();
	



};

#endif

