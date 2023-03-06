// Circle Implementation File
// Created by: Matt Hole
// Octobermber 21st, 2020

#include<cmath>
#include<iostream>

using namespace std;

#include "circle.h"
#include "point.h"
#include "cylinder.h"

void Cylinder::calcVol()
{
	double area = getArea();
	volume = area * height;
		 
}
void Cylinder::calcSur()
{
	surfaceArea = (getArea() * 2) + (getCircum() * height);
}

Cylinder::Cylinder()
{
	height = 0;
	calcVol();
	calcSur();
}
Cylinder::Cylinder(int r, Point cP, int h) : Circle(r, cP)
{
	height = h;
	calcVol();
	calcSur();
}
void Cylinder::printVol()
{
	cout << "The volume of the cylinder is " << volume << endl;
}
void Cylinder::printSur()
{
	cout << "The surface area of the cylinder is " << surfaceArea << endl;
}
void Cylinder::setHeight(int h)
{
	height = h;
	calcVol();
	calcSur();
}

void Cylinder::setRad(int r)
{
	setRadius(r);
	calcVol();
	calcSur();
}
void Cylinder::setCenter(Point cP)
{
	Circle::setCenter(cP);
}

void Cylinder::printCyl()
{
	print();
	cout << "Height is " << height << endl
		<< "Volume is " << volume << endl
		<< "Surface area is " << surfaceArea << endl;

}
