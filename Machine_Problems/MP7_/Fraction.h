#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction
{
protected:
	long Numer;
	long Denom;

	void LowTerms(void);
	void Reduce(void);

	Fraction Add(const Fraction &f) const;
	Fraction Sub(const Fraction &f) const;
	Fraction Mul(const Fraction &f) const;
	Fraction Div(const Fraction &f) const;

public:
	Fraction();
	Fraction(double d);
	Fraction(long n, long d = 1);
	Fraction(const Fraction &f);

	long GetNumer(void) const;
	long GetDenom(void) const;

	Fraction operator + (const Fraction &f) const;
	Fraction operator + (const double &d) const;

	Fraction operator - (const Fraction &f) const;
	Fraction operator * (const Fraction &f) const;
	Fraction operator / (const Fraction &f) const;

	Fraction operator += (const Fraction &f);
	Fraction operator -= (const Fraction &f);
	Fraction operator *= (const Fraction &f);
	Fraction operator /= (const Fraction &f);

	bool operator == (const Fraction &f) const;
	bool operator != (const Fraction &f) const;
	bool operator < (const Fraction &f) const;
	bool operator > (const Fraction &f) const;
	bool operator <= (const Fraction &f) const;
	bool operator >= (const Fraction &f) const;
	bool operator ! () const;

	operator float() const;
	operator double() const;

	Fraction operator ++ ();
	Fraction operator -- ();
	Fraction operator ++ (int);
	Fraction operator -- (int);

	Fraction operator ~ () const;
	Fraction operator - () const;
	
	friend std::ostream &operator<<(std::ostream &out, Fraction const &f);
	friend istream &operator>>(istream &out, Fraction &f);

	void Input(void);
	void Print(void) const;
};

#endif
