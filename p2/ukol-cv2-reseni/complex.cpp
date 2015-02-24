#include <iostream>
#include "complex.h"

// fce pro fajnšmekry
float sqrt(float x){
  float a = 10, last = 1;
  while(last != a){
    last = a;
    a = (a + x / a) / 2;
  }
  return a;
}

Complex::Complex():real(0),imag(0){}

// kopirujici konstruktor
// uplatni se v situaci: Complex x = y; (kde y je Complex)
// nebo pri predavani argumentu hodnotou (kopii)
Complex::Complex(const Complex &x){
  this->real = x.real;
  this->imag = x.imag;
}

Complex::Complex(int realArg, int imagArg)
	:real(realArg),imag(imagArg){}

void Complex::print()const {
  if (real == 0 && imag == 0){
    std::cout << 0 << std::endl;
  } else {
    std::cout << real;
    if (imag > 0) std::cout << "+";
    std::cout << imag << "i" << std::endl;
  }
}

float Complex::abs()const {
  return sqrt(real*real + imag*imag);
}

void Complex::add(const Complex x){
  real += x.real;
  imag += x.imag;
}

void Complex::diff(const Complex x){
  real -= x.real;
  imag -= x.imag;
}

Complex add(const Complex x, const Complex y){
  Complex z = x;
  z.add(y);
  return z;
}

Complex diff(const Complex x, const Complex y){
  Complex z = x;
  z.diff(y);
  return z;
}

