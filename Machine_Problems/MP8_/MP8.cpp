// CPS 271 MP8
// Created by: Matt Hole
// 18DEC2020

#include <algorithm> // added for search, sort functions
#include <fstream> //  added for file streams
#include <iostream> // added for i/o streams
#include <list> //  added to use lists
#include <vector>  // added to use vectors
#include <stdio.h> // added for exit
#include <stdlib.h> // added for exit
#include "Fraction.h"


using namespace std;

ifstream in;
vector<Fraction> inAndSortVector();
list<Fraction> inAndSortList();
vector<Fraction> mergeListAndVector(vector<Fraction> &fracVector, list<Fraction> &fracList);
void displayVector(vector<Fraction> &dispVect);
void displayList(list<Fraction> &dispList);

int main()
{
	vector<Fraction> inputVector, mergedVector;
	list<Fraction> inputList;

	inputVector = inAndSortVector();
	inputList = inAndSortList();
	mergedVector = mergeListAndVector(inputVector, inputList);
	cout << "Fraction Vector:" << endl;
	displayVector(inputVector);
	cout << endl;
	cout << "Fraction List:" << endl;
	displayList(inputList);
	cout << endl;
	cout << "Merged Vector:" << endl;
	displayVector(mergedVector);
	

	return 0;
}

vector<Fraction> inAndSortVector()
{
	vector<Fraction> buildVector;
	Fraction buildFrac;
	in.open("FractsToVector.txt");
	if (!in.is_open()) // checks to see if file opened
	{
		cout << "File did not open" << endl;
		exit(1); // exit program and return a value of 1

	}
	else
	{
		while (!in.eof())
		{
			if (in.eof()) // exits loop after eof
				break;
			in >> buildFrac;
			buildVector.push_back(buildFrac); // adds fraction to vector
		}
		in.close();
		sort(buildVector.begin(), buildVector.end());
		return buildVector;		
	}


}

list<Fraction> inAndSortList()
{
	list<Fraction> buildList;
	Fraction buildFrac;
	in.open("FractsToList.txt");
	if (!in.is_open()) // checks to see if file opened
	{
		cout << "File did not open" << endl;
		exit(2); // exit program and return a value of 1

	}
	else
	{
		while (!in.eof())
		{
			if (in.eof()) // exits loop after eof
				break;
			in >> buildFrac;
			buildList.push_back(buildFrac); // adds fraction to list
		}
		in.close();
		buildList.sort(); // sorts list
		return buildList;
	}
}

vector<Fraction> mergeListAndVector(vector<Fraction> &fracVector, list<Fraction>& fracList)
{
	vector<Fraction> mergedVector;
	for (auto i = fracList.begin(); i != fracList.end(); i++) // inserts list into vector
		mergedVector.push_back(*i);

	for (auto j = fracVector.begin(); j != fracVector.end(); j++) // inserts list into vector
		mergedVector.push_back(*j);

	sort(mergedVector.begin(), mergedVector.end()); // sorts vector
	mergedVector.erase(unique(mergedVector.begin(), mergedVector.end()), mergedVector.end()); // erases duplicates

	return mergedVector;
}

void displayVector(vector<Fraction> &dispVect)
{
	for (unsigned int i = 0; i < dispVect.size(); i++)
	{
		cout << dispVect[i] << endl;
	}
}

void displayList(list<Fraction> &dispList)
{
	for (auto j = dispList.begin(); j != dispList.end(); j++)
		cout << *j << endl;
}