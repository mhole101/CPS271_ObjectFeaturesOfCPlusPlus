// Fraction Header File
// Created by: Matt Hole
// September 13th, 2020
#include<iostream>
#include<string>
#pragma once

using namespace std;

class Fraction
{	
public:

	void Input();
	//No parameter function
	//This function prompts the user to input a fraction.
	//It will prevent the user from putting in a fraction with 0 in the denominator
	void Print() const;
	//Constant function
	//This function is used to print the member variables in the form of:
	//"The solution is: numer/denom"
	Fraction();
	//Empty constructor (Default)
	//This constructor initializes the fraction to zero
	//Postcondition: numer = 0; denom =1; fraction = "numer/denom"
	Fraction(int numerator); 
	//One parameter int constructor
	//Parameter is the numerator,  and will make the faction a whole number
	//Postcondition: numer = numerator; denom = 1; fraction = "numer/denom"
	Fraction(double decimalNumerator);
	//One parameter double constructor
	//Parameter is multiplied by 100000 then becomes the numberator and creates a fraction
	//Postcondition: numer = decimalNumerator*100000; denom = 100000; fraction = "numer/denom"
	Fraction(int numerator, int denominator);
	//Two parameter int constructor
	//First parameter is numerator;  second is denominator; both parameters create a fraction
	//Postconditions: number = numerator; denom = denominator; fraction= "numer/denom"
	Fraction Add(Fraction addFrac);
	//One parameter add function
	//Parameter is added to member then answer is  output to another object
	//
	Fraction Sub(Fraction subFrac);
	//One parameter add function
	//Parameter is subtracted from member then answer is output to another object 
	//
	Fraction Mul(Fraction mulFrac);
	//One parameter add function
	//Parameter is multiplied by member then answer is output to another object 
	//
	Fraction Div(Fraction divFrac);
	//One parameter add function
	//Parameter is used to divide member then answer is output to another object 
	//
	void Add(Fraction addFrac1, Fraction addFrac2);
	//Two parameter function
	//Both parameters are added together then answer is used to update current object
	//
	void Sub(Fraction subFrac1, Fraction subFrac2);
	//Two parameter function
	//The first parameter is subtracted by the second parameter then answer is used to update current object
	//
	void Mul(Fraction mulFract1, Fraction mulFrac2);
	//Two parameter function
	//Both parameters are multiplied together then answer is used to update current object
	//
	void Div(Fraction divFract1, Fraction divFrac2);
	//Two parameter function
	//The first parameter is divided by the second parameter then answer is used to update current object
	//
	
private:
	
	int numer; // numerator
	int denom; // denominator
	
};
