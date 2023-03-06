#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
	int Numer ;
	int Denom ;

	void LowTerms(void);
	void Reduce( Fraction& f ) ;
	int GCD(int a, int b);

public:
	explicit Fraction() ;
	explicit Fraction( int n, int d = 1 ) ;
	Fraction( double n );
	Fraction( const Fraction &f);

	void Input( void ) ;
	void Print( void ) const ;

	Fraction Add( const Fraction &f ) const ;
	Fraction Sub( const Fraction &f ) const ;
	Fraction Mul( const Fraction &f ) const ;
	Fraction Div( const Fraction &f ) const ;

	void Add( const Fraction &f1, const Fraction &f2 ) ;
	void Sub( const Fraction &f1, const Fraction &f2 ) ;
	void Mul( const Fraction &f1, const Fraction &f2 ) ;
	void Div( const Fraction &f1, const Fraction &f2 ) ;
		
	Fraction operator + (const Fraction& f2) const;
	Fraction operator + (const double d) const;
	//friend Fraction operator+(const Fraction& f3, const Fraction& f4);
	Fraction operator - (const Fraction& f2) const;
	Fraction operator * (const Fraction& f2) const;
	Fraction operator / (const Fraction& f2) const;
		
	Fraction operator += (const Fraction& f2);
	Fraction operator -= (const Fraction& f2);
	Fraction operator *= (const Fraction& f2);
	Fraction operator /= (const Fraction& f2);

	bool operator == (const Fraction& f2) const;
	bool operator != (const Fraction& f2) const;
	bool operator < (const Fraction& f2) const;
	bool operator > (const Fraction& f2) const;
	bool operator <= (const Fraction& f2) const;
	bool operator >= (const Fraction& f2) const;
	bool operator ! () const;

	/*
	Fraction operator ~ (const Fraction& f2);
	Fraction operator - (const Fraction& f2);
	*/

	//Fraction operator =(const Fraction& f2);

	
	operator double() const;

	// extraction/insertion   cin/cout
	friend std::ostream& operator<<(std::ostream& out, Fraction const& f);
	friend istream& operator>>(istream& out, Fraction& f);

	// f++
	Fraction operator ++ (int);
	// ++f
	Fraction& operator ++ ();
	// f--
	Fraction operator -- (int);
    // --ff
	Fraction& operator -- ();
	

} ;

#endif	// FRACTION_H