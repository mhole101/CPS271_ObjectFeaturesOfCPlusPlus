// Fractions Implementation File
// Created by: Matt Hole
// Created on: September 13th, 2020

#include<string>
#include<iostream>
#include<iomanip>
#include<cmath>
#include "Fraction.h"

using namespace std;

void Fraction::Input()
{
	char sepChar;
	cout << "Input a fraction in the form of x/y and press enter." << endl << "The denominator (y) cannot be equal to 0" << endl;
	cin >> numer >> sepChar >> denom;
	while (denom == 0)
	{
		cout << "\nDenominator cannot equal 0 please enter fraction again.\n" << endl;
		cin >> numer >> sepChar >> denom;
	}
}


void Fraction::Print() const
{
	cout << "The solution is: " << Fraction::numer << "/" << Fraction::denom << endl << endl;
}

Fraction::Fraction()
{
	numer = 0;
	denom = 1;
}

Fraction::Fraction(int funcNumer)
{
	numer = funcNumer;
	denom = 1;
}

Fraction::Fraction(double decNumer)
{
	numer = decNumer*100000;
	denom = 100000;
}

Fraction::Fraction(int funcNumer, int funcDenomer)
{
	numer = funcNumer;
	denom = funcDenomer;
}

Fraction Fraction::Add(Fraction addFrac)
{
	Fraction funcFract;
	if (denom == addFrac.denom)
	{
		funcFract.numer = numer + addFrac.numer;
		funcFract.denom = denom;
	}
			
	else
	{
		funcFract.denom = denom * addFrac.denom;
		funcFract.numer = numer * addFrac.denom + addFrac.numer * denom;
	}

	if (numer == 0)
		denom = 1;

	return funcFract;
}

Fraction Fraction::Sub(Fraction subFrac)
{
	Fraction funcFract;
	if (denom == subFrac.denom)
	{
		funcFract.numer = numer - subFrac.numer;
		funcFract.denom = denom;
	}

	else
	{
		funcFract.denom = denom * subFrac.denom;
		funcFract.numer = numer * subFrac.denom - subFrac.numer * denom;
	}

	if (numer == 0)
		denom = 1;

	return funcFract;
}


Fraction Fraction::Mul(Fraction mulFrac)
{
	Fraction funcFract;
	funcFract.numer = numer * mulFrac.numer;
	funcFract.denom = denom * mulFrac.denom;

	if (numer == 0)
		denom = 1;

	return funcFract;		
}

Fraction Fraction::Div(Fraction divFrac)
{
	Fraction funcFract;
	funcFract.numer = numer * divFrac.denom;
	funcFract.denom = denom * divFrac.numer;

	if (numer == 0)
		denom = 1;

	return funcFract;
}


void Fraction::Add(Fraction addFrac1, Fraction addFrac2)
{
	
	if (addFrac1.denom == addFrac2.denom)
	{
		numer = addFrac1.numer + addFrac2.numer;
		denom = addFrac1.denom;
	}
		

	else
	{
		numer = addFrac1.numer * addFrac2.denom + addFrac2.numer * addFrac1.denom;
		denom = addFrac1.denom * addFrac2.denom;		
	}

	if (numer == 0)
		denom = 1;
}

void Fraction::Sub(Fraction subFrac1, Fraction subFrac2)
{
	if (subFrac1.denom == subFrac2.denom)
	{
		numer = subFrac1.numer - subFrac2.numer;
		denom = subFrac1.denom;
	}
		
	else
	{
		numer = subFrac1.numer * subFrac2.denom - subFrac2.numer * subFrac1.denom;
		denom = subFrac1.denom * subFrac2.denom;		
	}
	
	if (numer == 0)
		denom = 1;
}

void Fraction::Mul(Fraction mulFrac1, Fraction mulFrac2)
{
	numer = mulFrac1.numer * mulFrac2.numer;
	denom = mulFrac1.denom * mulFrac2.denom;

	if (numer == 0)
		denom = 1;	
}

void Fraction::Div(Fraction divFrac1, Fraction divFrac2)
{
	numer = divFrac1.numer * divFrac2.denom;
	denom = divFrac1.denom * divFrac2.numer;
	
	if (numer == 0)
		denom = 1;
	
}






