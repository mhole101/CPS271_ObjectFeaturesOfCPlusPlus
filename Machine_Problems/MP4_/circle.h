// Circle Header File
// Created by: Matt Hole
// Octobermber 18th, 2020
#pragma once

#include "point.h"

class Circle
{
protected:
	Point centerPoint;
	int radius;
	double area;
	double circum;
	void calcArea();
	void calcCircum();

public:
	Circle();
	Circle(int r, Point cP);
	void setRadius(int r);
	void setCenter(Point cP);
	void printRadius();
	void printArea();
	void printCircum();
	double getArea() const;
	double getCircum() const;
	void print();



};

