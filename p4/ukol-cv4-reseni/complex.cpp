// complex.cpp

#include "complex.h"
using namespace std;


Complex::Complex(int re, int im):real(re),imag(im){}

Complex::Complex(float c):real(c),imag(0){}

int Complex::getReal()const{ return real; }

int Complex::getImag()const{ return imag; }

Complex Complex::operator+(Complex & x)const{
	return Complex(real + x.getReal(), imag + x.getImag());
}

Complex Complex::operator-(Complex & x)const{
	return Complex(real - x.getReal(), imag - x.getImag());
}

Complex Complex::operator+(int x)const{
	return Complex(real + x, imag);
}

Complex Complex::operator-(int x)const{
	return Complex(real - x, imag);
}

ostream & operator<<(ostream & os, const Complex &c){
	os << '[' << c.getReal() << "," << c.getImag() << ']';
	return os;
}

Complex operator+(int a, const Complex &c){
	return Complex(a + c.getReal(), c.getImag());
}
