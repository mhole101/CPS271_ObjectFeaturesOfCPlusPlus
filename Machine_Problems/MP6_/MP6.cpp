// MP6
// By: Matt Hole

#include<iostream>
#include"myArray.h"

using namespace std;

int main()
{
	myArray list(5);       //Line 1            0..4
	myArray myList(2, 13);   //Line 2            2..12
	myArray yourList(-5, 9);   //Line 3            -5..8

	list[3] = 10;
	list[7] = 20;

	//cout << "List 1" << endl;
	for (int x = -10; x < 20; x++)
		list[x] = 0;

	cout << "List 2" << endl;
	for (int x = -10; x < 20; x++)
		myList[x] = 0;

	cout << "List 3" << endl;
	for (int x = -10; x < 20; x++)
		yourList[x] = 0;

	cout << list[3] << endl;
	cout << list[1] << endl;
	cout << list[8] << endl;

	cout << myList[4] << endl;
	cout << myList[0] << endl;
	cout << myList[42] << endl;

	cout << myList[4] << endl;
	cout << myList[-10] << endl;
	cout << myList[-2] << endl;
	cout << myList[12] << endl;


	return 0;

}