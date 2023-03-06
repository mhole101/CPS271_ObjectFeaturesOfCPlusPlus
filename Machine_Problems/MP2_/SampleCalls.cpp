#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#include "Fraction.h"

int main()
{
Fraction f1(1, 2);
Fraction f2(4);
Fraction f3(3.1415927);
Fraction a1, a2;
Fraction s1, s2;
Fraction m1, m2;
Fraction d1, d2;

	a1 = f1.Add(f2);
	a2.Add(f2, f3);

	s1 = f1.Sub(f2);
	s2.Sub(f2, f3);

	m1 = f1.Mul(f2);
	m2.Mul(f2, f3);

	d1 = f1.Div(f2);
	d2.Div(f2, f3);

	cout << endl << "F1: "; f1.Print();
	cout << endl << "F2: "; f2.Print();
	cout << endl << "F3: "; f3.Print();

	cout << endl;
	cout << endl << "F4 = F1+F2: "; a1.Print();
	cout << endl << "F5 = F2+F3: "; a2.Print();

	cout << endl;
	cout << endl << "F4 = F1-F2: "; s1.Print();
	cout << endl << "F5 = F2-F3: "; s2.Print();

	cout << endl;
	cout << endl << "F4 = F1*F2: "; m1.Print();
	cout << endl << "F5 = F2*F3: "; m2.Print();

	cout << endl;
	cout << endl << "F4 = F1/F2: "; d1.Print();
	cout << endl << "F5 = F2/F3: "; d2.Print();

	cout << endl << endl;
	system("pause");
	return 0;
}