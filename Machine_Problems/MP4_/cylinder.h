// Cylinder Header File
// Created by: Matt Hole
// Octobermber 20th, 2020
#pragma once

#include "circle.h"
#include "point.h"

class Cylinder : public Circle
{
private:
	int height;
	double volume;
	double surfaceArea;
	void calcVol();
	void calcSur();

public:
	Cylinder();
	Cylinder(int r, Point cP, int h);
	void printVol();
	void printSur();
	void setHeight(int h);
	void setRad(int r);
	void setCenter(Point cP);
	void printCyl();
};

