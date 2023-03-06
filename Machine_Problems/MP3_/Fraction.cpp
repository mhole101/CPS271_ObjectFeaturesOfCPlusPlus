
#include <iostream>
#include <cmath>

using namespace std;

#include "Fraction.h"


Fraction::Fraction()
{
	Numer = 0 ;
	Denom = 1 ;
}

Fraction::Fraction( int n, int d )
{
	if (d <= 0)
		d = 1;
	Numer = n ;
	Denom = d ;
	LowTerms();
}

Fraction::Fraction(double n)
{
	Denom = 100000;
	n *= (double)Denom;
	Numer = (int)n;
	LowTerms();
}

Fraction::Fraction(const Fraction &f)
{
	Numer = f.Numer;
	Denom = f.Denom;
}

void Fraction::Input( void )
{
char div, again = 1 ;

	while ( again )
	{
		cout << "Enter NN/DD: " ;
		cin >> Numer >> div >> Denom  ;

		if ( Denom <= 0 )
		{
			cout << "Denominator must be > 0, try again" << endl ;
			continue ;
		}
		again = 0 ;
	}
}

void Fraction::Print( void ) const
{
	cout << Numer << "/" << Denom ;
}

void Fraction::LowTerms(void)
{
	
	if (Denom % Numer == 0)
	{
		Numer = 1;
		Denom /= Numer;
	}
	else if (Numer % Denom == 0)
	{
		Numer /= Denom;
		Denom = 1;
	}
	else
	{
		int tmpNum = Numer;
		int tmpDen = Denom;
		int gcd;
		gcd = GCD(tmpNum, tmpDen);
		Numer = Numer / gcd;
		Denom = Denom / gcd;

	}
	
	return;
}

void Fraction::Reduce(Fraction& f)
{
	if (f.Denom % f.Numer == 0)
	{
		f.Numer = 1;
		f.Denom /= f.Numer;
	}
	else if (f.Numer % f.Denom == 0)
	{
		f.Numer /= f.Denom;
		f.Denom = 1;
	}
	else
	{
		for (int i = f.Numer; i >= 0; i--)
		{
			if (f.Numer % i == 0 && f.Denom % i == 0)
			{
				f.Numer /= i;
				f.Denom /= i;
				return;
			}			

		}
	}
	
    return;
}
// GCD function uses Euclid's algorithm
int Fraction::GCD(int a, int b) 
{
	if (a == 0 || b == 0)
		return 0;    //if a and b are 0 the GCD is 0
	if (a == b)
		return b;    
	if (a > b)
		return GCD(a - b, b);
	else
		return GCD(a, b - a);
}


void Fraction::Add( const Fraction &f1, const Fraction &f2 )
{
	Numer = (f1.Numer * f2.Denom) + (f1.Denom * f2.Numer) ; 
	Denom = (f1.Denom * f2.Denom) ; 
	LowTerms() ;
}

void Fraction::Sub( const Fraction &f1, const Fraction &f2 )
{
	Numer = (f1.Numer * f2.Denom) - (f1.Denom * f2.Numer) ; 
	Denom = (f1.Denom * f2.Denom) ; 
	LowTerms() ;
}

void Fraction::Mul( const Fraction &f1, const Fraction &f2 )
{
	Numer = (f1.Numer * f2.Numer) ;
	Denom = (f1.Denom * f2.Denom) ; 
	LowTerms() ;
}

void Fraction::Div( const Fraction &f1, const Fraction &f2 )
{
	Numer = (f1.Numer * f2.Denom) ;
	Denom = (f1.Denom * f2.Numer) ; 
	LowTerms() ;
}

Fraction Fraction::Add( const Fraction &f ) const 
{
Fraction f2 ;

	f2.Numer = (Numer * f.Denom) + (Denom * f.Numer) ; 
	f2.Denom = (Denom * f.Denom) ; 
	f2.LowTerms() ;
	return f2 ;
}

Fraction Fraction::Sub( const Fraction &f ) const
{
Fraction f2 ;

	f2.Numer = (Numer * f.Denom) - (Denom * f.Numer) ; 
	f2.Denom = (Denom * f.Denom) ; 
	f2.LowTerms() ;
	return f2 ;
}

Fraction Fraction::Mul( const Fraction &f ) const 
{
Fraction f2 ;

	f2.Numer = (Numer * f.Numer) ;
	f2.Denom = (Denom * f.Denom) ; 
	f2.LowTerms() ;
	return f2 ;
}

Fraction Fraction::Div( const Fraction &f ) const 
{
Fraction f2 ;

	f2.Numer = (Numer * f.Denom) ;
	f2.Denom = (Denom * f.Numer) ; 
	f2.LowTerms() ;
	return f2 ;
}

Fraction Fraction::operator + (const Fraction& f2) const
{
	Fraction f;
	f.Denom = Denom * f2.Denom;
	f.Numer = (Numer * f2.Denom) + (f2.Numer * Denom);
	//f.LowTerms();
	return f;
}

Fraction Fraction::operator + (const double d) const
{
	Fraction f;
	Fraction g(d);
	f.Denom = Denom * g.Denom;
	f.Numer = (Numer * g.Denom) + (g.Numer * Denom);
	return f;
}
/*
Fraction operator+(const Fraction& f3, const Fraction& f4)
{
	Fraction f;
	Fraction g(d);
	f.Denom = f3.Denom * f4.Denom;
	f.Numer = f3.Numer + f4.Numer;
	return f;
}
*/
Fraction Fraction::operator - (const Fraction& f2) const
{
	Fraction f;
	f.Denom = Denom * f2.Denom;
	f.Numer = Numer - f2.Numer;
	return f;
}

Fraction Fraction::operator * (const Fraction& f2) const
{
	Fraction f;
	f.Denom = Denom * f2.Denom;
	f.Numer = Numer * f2.Numer;
	return f;
}

Fraction Fraction::operator / (const Fraction& f2) const
{
	Fraction f;
	f.Denom = Denom * f2.Numer;
	f.Numer = Numer * f2.Denom;
	return f;
}

Fraction Fraction::operator+=(const Fraction& f2)
{
	Numer = Numer + f2.Numer;
	Denom = Denom + f2.Denom;
	Fraction f(Numer, Denom);
	return f;
}

Fraction Fraction::operator -= (const Fraction& f2)
{
	Numer = Numer + f2.Numer;
	Denom = Denom + f2.Denom;
	Fraction f(Numer, Denom);
	return f;
}

Fraction Fraction::operator *= (const Fraction& f2)
{
	Numer = Numer * f2.Numer;
	Denom = Denom * f2.Denom;
	Fraction f(Numer, Denom);
	return f;
}

Fraction Fraction::operator /= (const Fraction& f2)
{
	Numer = Numer * f2.Denom;
	Denom = Denom * f2.Numer;
	Fraction f(Numer, Denom);
	return f;
}

bool Fraction::operator ==(const Fraction& f2) const
{
	int fNumTemp = Numer * f2.Denom;
	int f2NumTemp = f2.Numer * Denom;
	bool b = fNumTemp == f2NumTemp;
	return b;
}

bool Fraction::operator !=(const Fraction& f2) const
{
	return !(*this == f2);
}

bool Fraction::operator <(const Fraction& f2) const
{
	int fNumTemp = Numer * f2.Denom;
	int f2NumTemp = f2.Numer * Denom;
	bool b = fNumTemp < f2NumTemp;
	return b;
}

bool Fraction::operator >(const Fraction& f2) const
{
	int fNumTemp = Numer * f2.Denom;
	int f2NumTemp = f2.Numer * Denom;
	bool b = fNumTemp > f2NumTemp;
	return b;
}

bool Fraction::operator <= (const Fraction& f2) const
{
	bool g = (*this > f2);
	if (g)
		return true;
	bool e = (*this == f2);
	if (e)
		return true;
	return false;
}

bool Fraction::operator >= (const Fraction& f2) const
{
	bool g = (*this > f2);
	if (g)
		return true;
	bool e = (*this == f2);
	if (e)
		return true;
	return false;
}
bool Fraction::operator ! () const
{
	return true;
}
/*
Fraction Fraction::operator ~(const Fraction& f2)
{
	Fraction f;
	int numerTmp = f2.Denom;
	f.Denom = f2.Numer;
	f.Numer = numerTmp;
	return f2;
}

Fraction Fraction::operator -(const Fraction& f2)
{
	Fraction f;
	f.Numer = f2.Numer * -1;
	f.Denom = f2.Denom;
	return f;
}


Fraction Fraction::operator =(const Fraction& f2)
{
	Numer = f2.Numer;
	Denom = f2.Denom;
	return *this;
}
*/


Fraction::operator double() const
{
	double d;
	d = (double)Denom / (double)Numer;
	return d;
}

ostream& operator<<(ostream& out, Fraction const& f)
{
	out << f.Numer << "/" << f.Denom;
	return out;
}

istream& operator>>(istream& out, Fraction& f)
{
	char throwAway;
	cout << "Enter NN/DD: ";
	cin >> f.Numer >> throwAway >> f.Denom;
	return out;
}


Fraction Fraction::operator ++ (int)
{
	Fraction tmp = *this;
	Numer = Numer + Denom;
	return tmp;
}

Fraction& Fraction::operator ++ ()
{
	Numer = Numer + Denom;
	return *this;
}

Fraction Fraction::operator -- (int)
{
	Fraction tmp = *this;
	Numer = Numer - Denom;
	return tmp;
}

Fraction& Fraction::operator -- ()
{
	Numer = Numer - Denom;
	return *this;
}





