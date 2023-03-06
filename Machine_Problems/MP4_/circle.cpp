// Circle Implementation File
// Created by: Matt Hole
// Octobermber 19th, 2020

#include<cmath>
#include<iostream>

using namespace std;

#include "circle.h"
#include "point.h"


void Circle::calcArea()
{
	area = 3.14 * radius * radius;
}

void Circle::calcCircum()
{
	circum = 2 * 3.14 * radius;
}

Circle::Circle()
{
	Point temp;
	centerPoint = temp;
	radius = 0;
	calcArea();
	calcCircum();
}

Circle::Circle(int r, Point cP)
{
	radius =r;
	centerPoint = cP;
	calcArea();
	calcCircum();

}

void Circle::setRadius(int r)
{
	radius = r;
	calcArea();
	calcCircum();
}

void Circle::setCenter(Point cP)
{
	centerPoint = cP;
}

void Circle::printRadius()
{
	cout << "The radius of the circle is " << radius << endl;
}

void Circle::printArea()
{
	cout << "The area of the circle is " << area << endl;
}

void Circle::printCircum()
{
	cout << "The circumference of the circle is " << circum << endl;
}

double Circle::getArea() const
{
	return area;
}

double Circle::getCircum() const
{
	return circum;
}

void Circle::print()
{
	cout << "Centerpoint is (" << centerPoint.GetX() << "," << centerPoint.GetY() << ")" << endl
		<< "Radius is " << radius << endl
		<< "Area is " << area << endl
		<< "Circumference is " << circum << endl;
}



