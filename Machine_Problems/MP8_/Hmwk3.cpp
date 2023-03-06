
#include <iostream>

using namespace std;

#include "Fraction.h"

int main(void)
{
//
//  This is the main for Assignment #3
//
const Fraction a(1, 3);
const Fraction b(2.4);
const Fraction h(7L);
Fraction c, m;
Fraction e(b);
bool flag;
double d;
float f;

	cin >> m;
	cout << m << endl;

	c.Input();
	c.Print();		cout << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	//cout << "H: " << h << endl;


 	c = a + b;		cout << "C: " << c << endl;
	c = a + 2.6;	cout << "C: " << c << endl;
	c = a + 5;		cout << "C: " << c << endl;

	c = a - b;		cout << "C: " << c << endl;
	c = a * b;		cout << "C: " << c << endl;
	c = a / b;		cout << "C: " << c << endl;

	c += a;			cout << "C: " << c << endl;
	c -= a;			cout << "C: " << c << endl;
	c *= a;			cout << "C: " << c << endl;
	c /= a;			cout << "C: " << c << endl;
	
	flag = (a == b);		cout << "Flag: " << flag << endl;
	flag = (a != b);		cout << "Flag: " << flag << endl;
	flag = (a > b);			cout << "Flag: " << flag << endl;
	flag = (a < b);			cout << "Flag: " << flag << endl;
	flag = (a >= b);		cout << "Flag: " << flag << endl;
	flag = (a <= b);		cout << "Flag: " << flag << endl;
	
	flag = !b;			cout << "Flag: " << flag << endl;
	c = ~b;				cout << "C: " << c << endl;
	c = -b;				cout << "C: " << c << endl;
	
	m = ++c;				cout << "C: " << c << m << endl;
	m = c++;				cout << "C: " << c << m << endl;
	m = --c;				cout << "C: " << c << m << endl;
	m = c--;				cout << "C: " << c << m << endl;

	d = (double)b;		cout << "D: " << d << endl;
	f = (float)b;		cout << "F: " << f << endl;

	system("pause");
	return 0;
}