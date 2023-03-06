#include <iostream>

using namespace std;

#include "point.h"
#include "circle.h"
#include "cylinder.h"

// Function Prototypes


int main()
{

	// point testing
	Point p1;
	Point p2(5, 2);
	int p1x, p1y, p2x, p2y;

	p1.PrintPoint();
	p2.PrintPoint();
	p2x = p2.GetX();
	p2y = p2.GetY();

	cout << "\np2x = " << p2x
		<< "\np2y = " << p2y << endl << endl;

	p1.SetPoint(3, 3);
	p1.PrintPoint();
	p1.SetX(32);
	p1.SetY(45);
	p1.PrintPoint();
		
	//Circle testing
	double c1Area;
	double c1Circum;
	Circle c1;
	Circle c2(5, p2);

	cout << "\n c1 \n";
	c1.printRadius();
	c1.printCircum();
	c1.printArea();

	cout << "\n c2 \n";
	c2.printRadius();
	c2.printCircum();
	c2.printArea();

	cout << "\n c1 \n";
	c1.setRadius(5);
	c1.printRadius();
	c1.printCircum();
	c1.printArea();

	c1Area = c1.getArea();
	cout << endl << "Area = " << c1Area << endl;
	c1Circum = c1.getCircum();
	cout << "Circumference = " << c1Circum << endl;

	cout << "\n c1" << endl;
	c1.setCenter(p2);
	c1.print();

	cout << "\n Changed CenterPoint \n";
	c1.setCenter(p1);
	cout << "\n c1" << endl;
	c1.print();
	

	//Cylinder testing
	Cylinder cy1;
	Cylinder cy2(5, p1, 6);

	cout << "\n cy1 \n";
	cy1.printCyl();

	cout << "\n cy2 \n";
	cy2.printCyl();
	cy2.setHeight(10);

	cout << "\n Height increase \n";
	cy2.printCyl();
	cy2.setRad(10);

	cout << "\n Radius increase \n";
	cy2.printCyl();


	return 0;

}