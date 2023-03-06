// myArray implementation file
// By: Matt Hole

#ifndef _MYARRAY_H_ // Standard preprocessor directive.  Supports legacy compilers.
#define _MYARRAY_H_

#include<iostream>

#include "myArray.h"

using namespace std;

void myArray::initArray()
{
	for (int i = 0; i < 1000; i++)
		intArray[i] = 0;
}
myArray::myArray()
{
	arrLength = 0;
	arrStart = 0;
	arrEnd = 0;
	arrOffset = 0;
	initArray();

}

myArray::myArray(int n)
{
	arrLength = n;
	arrStart = 0;
	arrEnd = n - 1;
	arrOffset = 0;
	initArray();
}

myArray::myArray(int s, int e)
{
	arrLength = e - s;
	arrStart = s;
	arrEnd = e - 1;
	arrOffset = 0 - s;
	initArray();
}

myArray::~myArray()
{

}

int&  myArray::operator[] (int index)
{
	int retVal = index+ arrOffset;
	if (index < arrStart)
		cout << "Index out of bounds (low): " << index << endl;
	else if (index > arrEnd)
		cout << "Index out of bounds (high): " << index << endl;
	else
	{
		intArray[index];
		return retVal;

	}
		

}

const int& myArray::operator[] (int index) const
{
	int retVal = index + arrOffset;
	if (index < arrStart)
		cout << "Index out of bounds (low): " << index << endl;
	else if (index > arrEnd)
		cout << "Index out of bounds (high): " << index << endl;
	else
	{
		intArray[index];
		return retVal;

	}
		
}




#endif