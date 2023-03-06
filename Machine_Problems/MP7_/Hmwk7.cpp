
#include <iostream>

using namespace std;

#include "Fraction.h"


int intTest(void)
{
	//
	//  This is the main for Assignment #3
	//
	const Fraction<int> a(1, 3);
	const Fraction<int> b(2.4);
	const Fraction<int> h(7);
	Fraction<int> c, m;
	Fraction<int> e(b);
	bool flag;
	double d;
	float f;

	cin >> m;
	cout << m << endl;

	c.Input();
	c.Print();		cout << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "H: " << h << endl;


	c = a + b;		cout << "C: " << c << endl;
	c = a + 2.6;	cout << "C: " << c << endl;

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

	++c;				cout << "C: " << c << endl;
	c++;				cout << "C: " << c << endl;
	--c;				cout << "C: " << c << endl;
	c--;				cout << "C: " << c << endl;

	d = (double)b;		cout << "D: " << d << endl;
	f = (float)b;		cout << "F: " << f << endl;

	return 0;
}


int longTest(void)
{
//
//  This is the main for Assignment #3
//
const Fraction<long> a(1, 3);
const Fraction<long> b(2.4);
const Fraction<long> h(7);
Fraction<long> c, m;
Fraction<long> e(b);
bool flag;
double d;
float f;

	cin >> m;
	cout << m << endl;

	c.Input();
	c.Print();		cout << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "H: " << h << endl;


 	c = a + b;		cout << "C: " << c << endl;
	c = a + 2.6;	cout << "C: " << c << endl;

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

	++c;				cout << "C: " << c << endl;
	c++;				cout << "C: " << c << endl;
	--c;				cout << "C: " << c << endl;
	c--;				cout << "C: " << c << endl;

	d = (double)b;		cout << "D: " << d << endl;
	f = (float)b;		cout << "F: " << f << endl;

	return 0;
}


int shortTest(void)
{
//
//  This is the main for Assignment #3
//
const Fraction<short> a(1, 3);
const Fraction<short> b(2.4);
const Fraction<short> h(7);
Fraction<short> c, m;
Fraction<short> e(b);
bool flag;
double d;
float f;

	cin >> m;
	cout << m << endl;

	c.Input();
	c.Print();		cout << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "H: " << h << endl;


 	c = a + b;		cout << "C: " << c << endl;
	c = a + 2.6;	cout << "C: " << c << endl;

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

	++c;				cout << "C: " << c << endl;
	c++;				cout << "C: " << c << endl;
	--c;				cout << "C: " << c << endl;
	c--;				cout << "C: " << c << endl;

	d = (double)b;		cout << "D: " << d << endl;
	f = (float)b;		cout << "F: " << f << endl;

	return 0;
}


int charTest(void)
{
//
//  This is the main for Assignment #3
//
const Fraction<char> a(1, 3);
const Fraction<char> b(2.4);
const Fraction<char> h(7);
Fraction<char> c, m;
Fraction<char> e(b);
bool flag;
double d;
float f;

	cin >> m;
	cout << m << endl;

	c.Input();
	c.Print();		cout << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "H: " << h << endl;


 	c = a + b;		cout << "C: " << c << endl;
	c = a + 2.6;	cout << "C: " << c << endl;

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

	++c;				cout << "C: " << c << endl;
	c++;				cout << "C: " << c << endl;
	--c;				cout << "C: " << c << endl;
	c--;				cout << "C: " << c << endl;

	d = (double)b;		cout << "D: " << d << endl;
	f = (float)b;		cout << "F: " << f << endl;

	return 0;
}


int main(void)
{
    cout << "Int Test..." << endl;
    intTest();
    
    cout << "Long Test..." << endl;
    longTest();
    
    cout << "Short Test..." << endl;
    shortTest();
    
    cout << "Char Test..." << endl;
    charTest();
    
	system("pause");
	return 0;
}
