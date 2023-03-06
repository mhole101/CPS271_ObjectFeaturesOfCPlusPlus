// Point Header File
// Created by: Matt Hole
// Octobermber 16th, 2020
#pragma once


class Point
{
protected:
	int X;
	int Y;

public:
	Point();
	//
	Point(int x, int y);
	//
	void SetPoint(int x2, int y2);
	//
	void PrintPoint();
	//
	int GetX();
	//
	int GetY();
	//
	void SetX(int);
	//
	void SetY(int);
	//

};
