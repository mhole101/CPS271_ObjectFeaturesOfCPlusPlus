// Person header file
// By: Matt Hole

#pragma once // Non standard preprocessor directive.  
             // Causes the current source file to be included only once in a single compilation.
#ifndef _PERSON_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _PERSON_H_

#include <string>

#include "MyDate.h"

using namespace std;

class Person
{
	string name;
	MyDate birthDate;
	string phoneNumber;
	string email;

public:
	Person();
	Person(const Person& p);
	Person& operator = (const Person& p);
	virtual ~Person();
	virtual void Print();
	virtual void Input();


};
#endif
