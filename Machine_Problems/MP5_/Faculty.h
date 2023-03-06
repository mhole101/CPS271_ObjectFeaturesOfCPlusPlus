// Faculty header file
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _FACULTY_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _FACULTY_H_

#include<vector>

#include "Employee.h"

using namespace std;

class Faculty :
	public Employee
{
	int officeRoomNum;
	bool tenure;
	vector<MyDate> officeHours;

public:
	Faculty();
	Faculty(const Faculty& e);
	Faculty& operator = (const Faculty& e);
	virtual ~Faculty();
	void Print();
	void Input();
};
#endif

