
#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

#include "Fraction.h"

Fraction::Fraction()
{
	Numer = 0;
	Denom = 1;
}

Fraction::Fraction(double d)
{
	Numer = (long)((d * 10000000) + 0.5);
	Denom = 10000000;
	Reduce();
}

Fraction::Fraction(long n, long d)
{
	Numer = n;
	Denom = d;
	if (Denom == 0)
	{
		Numer = 0;
		Denom = 1;
	}
	Reduce();
}

Fraction::Fraction(const Fraction &f)
{
	Numer = f.Numer;
	Denom = f.Denom;
    Reduce();
}

long Fraction::GetNumer(void) const
{
	return Numer;
}

long Fraction::GetDenom(void) const
{
	return Denom;
}

Fraction Fraction::Add(const Fraction &f) const
{
Fraction r;

	r.Numer = (Numer * f.Denom) + (Denom * f.Numer); 
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

Fraction Fraction::Sub(const Fraction &f) const
{
Fraction r;

	r.Numer = (Numer * f.Denom) - (Denom * f.Numer); 
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

Fraction Fraction::Mul(const Fraction &f) const
{
Fraction r;

	r.Numer = (Numer * f.Numer);
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

Fraction Fraction::Div(const Fraction &f) const
{
Fraction r;

	r.Numer = (Numer * f.Denom);
	r.Denom = (Denom * f.Numer); 
	r.Reduce();
	return r;
}

Fraction Fraction::operator + (const Fraction &f) const
{
	return Add(f);
}

Fraction Fraction::operator + (const double &d) const
{
Fraction f(d);

	return Add(f);
}

Fraction Fraction::operator + (const int &i) const
{
	Fraction f((long)i);

	return Add(f);
}

Fraction Fraction::operator - (const Fraction &f) const
{
	return Sub(f);
}

Fraction Fraction::operator * (const Fraction &f) const
{
	return Mul(f);
}

Fraction Fraction::operator / (const Fraction &f) const
{
	return Div(f);
}

Fraction Fraction::operator += (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r + f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

Fraction Fraction::operator -= (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r - f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

Fraction Fraction::operator *= (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r * f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

Fraction Fraction::operator /= (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r / f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

bool Fraction::operator == (const Fraction &f) const
{
	return ((Numer*f.Denom) == (f.Numer*Denom));
}

bool Fraction::operator != (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r == f);
}

bool Fraction::operator < (const Fraction &f) const
{
//Fraction r(Numer, Denom);

	// return ((double)r < (double)f);
	long n1 = Numer * f.Denom;
	long n2 = f.Numer * Denom;
	return n1 < n2;
}

bool Fraction::operator > (const Fraction &f) const
{
//Fraction r(Numer, Denom);

	// return ((double)r > (double)f);
	long n1 = Numer * f.Denom;
	long n2 = f.Numer * Denom;
	return n1 > n2;
}

bool Fraction::operator <= (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r > f);
}

bool Fraction::operator >= (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r < f);
}

bool Fraction::operator !(void) const
{
	return (Numer==0);
}

Fraction::operator double() const
{
double d = 0.0;

	if (Denom > 0)
		d = (double)Numer / (double)Denom;
	return d;
}

Fraction::operator float() const
{
float f = 0.0;

	if (Denom > 0)
		f = (float)Numer / (float)Denom;
	return f;
}

Fraction Fraction::operator ++ (void)
{
	Numer += Denom;
	Reduce();
	return Fraction(Numer, Denom);
}

Fraction Fraction::operator -- (void)
{
	Numer -= Denom;
	Reduce();
	return *this;		// Fraction(Numer, Denom);
}

Fraction Fraction::operator ++ (int)
{
Fraction r(Numer, Denom);

	Numer += Denom;
	Reduce();
	return r;
}

Fraction Fraction::operator -- (int)
{
Fraction r(Numer, Denom);

	Numer -= Denom;
	Reduce();
	return r;
}

Fraction Fraction::operator ~ (void) const
{
Fraction r(Denom, Numer);

	if (r.Denom == 0)
	{
		r.Numer = 0;
		r.Denom = 1;
	}
	r.Reduce();
	return r;
}

Fraction Fraction::operator -(void) const
{
Fraction r(-Numer, Denom);

	return r;
}

void Fraction::Reduce(void)
{
	long gcd = 1;
    if (Denom < 0)
    {
        Numer *= -1;
        Denom *= -1;
    }

	for (long x = 2; x <= Denom/2; x++)
	{
		if (Numer%x == 0 && Denom %x == 0)
			gcd = x;
	}
	if (gcd > 1)
	{
		Numer /= gcd;
		Denom /= gcd;
	}
}

void Fraction::LowTerms(void)
{
long tnum, tden, temp, gcd;

    if (Denom < 0)
    {
        Numer *= -1;
        Denom *= -1;
    }
	tnum = labs(Numer);
	tden = labs(Denom);
	if (tden == 0)
		return;

	if (tnum == 0)
	{
		Numer = 0;
		Denom = 1;
		return;
	}

	while (tnum != 0)
	{
		if (tnum < tden)
		{
			temp = tnum;
			tnum = tden;
			tden = temp;
		}
		tnum -= tden;
	}
	gcd = tden;
	Numer /= gcd;
	Denom /= gcd;
}

ostream &operator<<(ostream &out, Fraction const &f)
{
	out << f.Numer << "/" << f.Denom;
	return out;
}

istream &operator>>(istream &out, Fraction &f)
{
	char ch;
	cout << "Enter NN/DD: ";
	cin >> f.Numer >> ch >> f.Denom;
	assert(f.Denom > 0);
	f.Reduce();
	return out;
}

void Fraction::Input(void)
{
char div, again = 1;

	while (again)
	{
		cout << "Enter NN/DD: ";
		cin >> Numer >> div >> Denom ;

		if (Denom <= 0)
		{
			cout << "Denominator must be > 0, try again" << endl;
			continue;
		}
		again = 0;
	}
	Reduce();
}

void Fraction::Print(void) const
{
	cout << Numer << "/" << Denom;
}
