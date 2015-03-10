// complex.h

#ifndef _COMPLEX_
#define _COMPLEX_

#include <iostream>

class Complex {
private:
	int real, imag;
public:
	// konstruktory
	Complex(int re = 0, int im = 0);

	// uzivatelska pretypovani z int a float (ulozte do real)
	Complex(float c);
	// gettry -> getReal, getImag
	int getReal()const;
	int getImag()const;
	// operatory + -
	Complex operator+(Complex & x)const;
	Complex operator-(Complex & x)const;
	Complex operator+(int x)const;
	Complex operator-(int x)const;
};

//Complex operator+(Complex & a, Complex & x)const;

// operator <<
std::ostream & operator<<(std::ostream& os, const Complex &c);

// operator int + Complex
Complex operator+(int a, const Complex &c);

#endif /*_COMPLEX_*/
