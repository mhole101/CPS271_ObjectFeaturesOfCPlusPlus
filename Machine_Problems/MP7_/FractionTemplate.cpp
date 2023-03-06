
#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

#include "Fraction.h"

template <class elemType>
Fraction<elemType>::Fraction()
{
	Numer = 0;
	Denom = 1;
}
template <class elemType>
Fraction<elemType>::Fraction(double d)
{
	Numer = (long)((d * 10000000) + 0.5);
	Denom = 10000000;
	Reduce();
}

template <class elemType>
Fraction<elemType>::Fraction(long n, long d)
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

template <class elemType>
Fraction<elemType>::Fraction(const Fraction &f)
{
	Numer = f.Numer;
	Denom = f.Denom;
    Reduce();
}

template <class elemType>
<elemType> Fraction<elemType>::GetNumer(void) const
{
	return Numer;
}

template <class elemType>
<elemType> Fraction<elemType>::GetDenom(void) const
{
	return Denom;
}

template <class elemType>
Fraction Fraction<elemType>::Add(const Fraction &f) const // Fraction<elemType> for return type?
{
Fraction r;

	r.Numer = (Numer * f.Denom) + (Denom * f.Numer); 
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::Sub(const Fraction &f) const // return type Fraction<elemType> ?
{
Fraction r;

	r.Numer = (Numer * f.Denom) - (Denom * f.Numer); 
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::Mul(const Fraction &f) const // return type Fraction<elemType> ?
{
Fraction r;

	r.Numer = (Numer * f.Numer);
	r.Denom = (Denom * f.Denom); 
	r.Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::Div(const Fraction &f) const // return type
{
Fraction r;

	r.Numer = (Numer * f.Denom);
	r.Denom = (Denom * f.Numer); 
	r.Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator + (const Fraction &f) const // return type
{
	return Add(f);
}

template <class elemType>
Fraction Fraction<elemType>::operator + (const double &d) const // return type
{
Fraction f(d);

	return Add(f);
}

Fraction Fraction<elemType>::operator - (const Fraction &f) const // return type
{
	return Sub(f);
}

template <class elemType>
Fraction Fraction<elemType>::operator * (const Fraction &f) const // return type
{
	return Mul(f);
}

template <class elemType>
Fraction Fraction<elemType>::operator / (const Fraction &f) const // return type
{
	return Div(f);
}

template <class elemType>
Fraction Fraction<elemType>::operator += (const Fraction &f) // return type
{
Fraction r(Numer, Denom);

	r = r + f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator -= (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r - f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator *= (const Fraction &f)
{
Fraction r(Numer, Denom);

	r = r * f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator /= (const Fraction &f) // return
{
Fraction r(Numer, Denom);

	r = r / f;
	Numer = r.Numer;
	Denom = r.Denom;
	return r;
}

template <class elemType>
bool Fraction<elemType>::operator == (const Fraction &f) const
{
	return ((Numer*f.Denom) == (f.Numer*Denom));
}

template <class elemType>
bool Fraction<elemType>::operator != (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r == f);
}

template <class elemType>
bool Fraction<elemType>::operator < (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return ((double)r < (double)f);
}

template <class elemType>
bool Fraction<elemType>::operator > (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return ((double)r > (double)f);
}

template <class elemType>
bool Fraction<elemType>::operator <= (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r > f);
}

template <class elemType>
bool Fraction<elemType>::operator >= (const Fraction &f) const
{
Fraction r(Numer, Denom);

	return !(r < f);
}

template <class elemType>
bool Fraction<elemType>::operator !(void) const
{
	return (Numer==0);
}

template <class elemType>
Fraction<elemType>::operator double() const
{
double d = 0.0;

	if (Denom > 0)
		d = (double)Numer / (double)Denom;
	return d;
}

template <class elemType>
Fraction<elemType>::operator float() const
{
float f = 0.0;

	if (Denom > 0)
		f = (float)Numer / (float)Denom;
	return f;
}

template <class elemType>
Fraction Fraction<elemType>::operator ++ (void) // return type
{
	Numer += Denom;
	Reduce();
	return Fraction(Numer, Denom);
}

template <class elemType>
Fraction Fraction<elemType>::operator -- (void) //  return type
{
	Numer -= Denom;
	Reduce();
	return Fraction(Numer, Denom);
}

template <class elemType>
Fraction Fraction<elemType>::operator ++ (int) // return type
{
Fraction r(Numer, Denom);

	Numer += Denom;
	Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator -- (int) // return type
{
Fraction r(Numer, Denom);

	Numer -= Denom;
	Reduce();
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator ~ (void) const // return type
{
Fraction r(Denom, Numer);

	r.Reduce();
	if (r.Denom == 0)
	{
		r.Numer = 0;
		r.Denom = 1;
	}
	return r;
}

template <class elemType>
Fraction Fraction<elemType>::operator -(void) const // return type
{
Fraction r(-Numer, Denom);

	return r;
}

template <class elemType>
void Fraction<elemType>::Reduce(void)
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

template <class elemType>
void Fraction<elemType>::LowTerms(void)
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

template <class elemType>
ostream &operator<<(ostream &out, Fraction const &f)
{
	out << f.Numer << "/" << f.Denom;
	return out;
}

template <class elemType>
istream &operator>>(istream &out, Fraction &f)
{
	char ch;
	cout << "Enter NN/DD: ";
	cin >> f.Numer >> ch >> f.Denom;
	assert(f.Denom > 0);
	f.Reduce();
	return out;
}

template <class elemType>
void Fraction<elemType>::Input(void)
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

template <class elemType>
void Fraction<elemType>::Print(void) const
{
	cout << Numer << "/" << Denom;
}
