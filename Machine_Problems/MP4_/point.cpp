// Point Implementation File
// Created by: Matt Hole
// Created on: October 17th, 2020

#include<string>
#include<iostream>
#include<iomanip>
#include<cmath>


using namespace std;

#include "point.h"

Point::Point()
{
	X = 0;
	Y = 0;
}

Point::Point(int x, int y)
{
	X = x;
	Y = y;
}

void Point::SetPoint(int x, int y)
{
	X = x;
	Y = y;
}

void Point::PrintPoint()
{
	cout << "The point is (" << X << "," << Y << ")\n";
}

int Point::GetX()
{
	return X;

}

int Point::GetY()
{
	return Y;
}

void Point::SetX(int x)
{
	X = x;
}

void Point::SetY(int y)
{
	Y = y;
}