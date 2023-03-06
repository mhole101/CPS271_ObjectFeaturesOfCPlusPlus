// Employee header file
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _EMPLOYEE_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _EMPLOYEE_H_

#include<iostream>

#include "Person.h"

using namespace std;


class Employee :
	public Person
{
	long salary;
	MyDate dateOfHire;

public:

	Employee();
	Employee(const Employee& e);
	Employee& operator = (const Employee& e);
	virtual ~Employee();
	virtual void Input();
	virtual void Print();

};

#endif
