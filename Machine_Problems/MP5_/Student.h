// Student header file
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _STUDENT_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _STUDENT_H_

#include "Person.h"

enum gradeStatus { NONE, FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };
const string gradeStatStr[] = { "NOT SELECTED", "FRESHMEN", "SOPHOMORE", "JUNIOR", "SENIOR" };

class Student :
	public Person
{
	double GPA;
	gradeStatus sGradeStat;

public:
	Student();
	Student(const Student& e);
	Student &operator = (const Student& e);
	virtual ~Student();
	void Input();
	void Print();

};
#endif
