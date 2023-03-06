// Staff header file
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _STAFF_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _STAFF_H_

#include "Employee.h"

class Staff :
	public Employee
{
	string title;

public:
	Staff();
	Staff(const Staff& e);
	Staff& operator = (const Staff& e);
	virtual ~Staff();
	void Print();
	void Input();

};
#endif


