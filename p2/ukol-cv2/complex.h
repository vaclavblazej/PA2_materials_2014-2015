/* complex.h */
#ifndef __COMPLEX__
#define __COMPLEX__

#include <iostream>
#include <cmath>

class Complex{
    int real, imag;
public:
    Complex();
    Complex(int x, int y);
    Complex(const Complex &c);
    //~Complex();
    Complex add(const Complex &x);
    Complex diff(const Complex &x);
    void print();
    double abs();
};

Complex add(Complex x, Complex y);
Complex diff(Complex x, Complex y);

#endif /* __COMPLEX__ */
