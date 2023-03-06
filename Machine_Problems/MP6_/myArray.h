#pragma once

class myArray
{
private:
	int arrLength;
	int arrStart;
	int arrEnd;
	int arrOffset;
	int intArray[1000];
	int* intPtr;
	// add pointer and dynamic array using pointer/arrLength


public:

	void initArray();
	myArray();
	myArray(int n);
	myArray(int s, int e);
	~myArray();
	int& operator[] (int index);
	const int& operator[] (int index) const;

};
