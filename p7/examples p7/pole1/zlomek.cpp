// zlomek.cpp

#include <cstdlib>
#include <iostream>

#include "zlomek.h"

Zlomek::Zlomek(int c, int j) {
  cit = c;
  if (j>0)
    jmen = j;
  else if (j<0) {
    jmen = -j; cit = -cit;
  } else
    throw "jmenovatel je 0";
  zkratit();
}

Zlomek Zlomek::operator-() const {
  return Zlomek(-cit,jmen);
}

int nsd(int x, int y) {
  int zbytek = x%y;
  while (zbytek!=0) {
    x = y; y = zbytek; zbytek = x%y;
  }
  return y;
}

void Zlomek::zkratit() {
  int d = nsd(abs(cit), jmen);
  if (d==1) return;
  cit /= d;
  jmen /= d;
}

Zlomek operator+(const Zlomek& x, const Zlomek& y) {
  int spoljm = x.jmenovatel()*y.jmenovatel();
  Zlomek z(x.citatel()*y.jmenovatel()+y.citatel()*x.jmenovatel(), spoljm);
  z.zkratit();
  return z;
}

Zlomek operator-(const Zlomek& x, const Zlomek& y) {
  int spoljm = x.jmenovatel()*y.jmenovatel();
  Zlomek z(x.citatel()*y.jmenovatel()-y.citatel()*x.jmenovatel(), spoljm);
  z.zkratit();
  return z;
}

Zlomek operator*(const Zlomek& x, const Zlomek& y) {
  Zlomek z(x.citatel()*y.citatel(), x.jmenovatel()*y.jmenovatel());
  z.zkratit();
  return z;
}

Zlomek operator/(const Zlomek& x, const Zlomek& y) {
  Zlomek z(x.citatel()*y.jmenovatel(), x.jmenovatel()*y.citatel());
  z.zkratit();
  return z;
}

bool operator==(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()==x.jmenovatel()*y.citatel();
}

bool operator!=(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()!=x.jmenovatel()*y.citatel();
}

bool operator<(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()<x.jmenovatel()*y.citatel();
}

bool operator<=(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()<=x.jmenovatel()*y.citatel();
}

bool operator>(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()>x.jmenovatel()*y.citatel();
}

bool operator>=(const Zlomek& x, const Zlomek& y) {
  return x.citatel()*y.jmenovatel()>=x.jmenovatel()*y.citatel();
}

double Zlomek::doubleValue() {
  return (double)citatel()/jmenovatel();
}

std::ostream& operator<<(std::ostream& o, const Zlomek& z) {
  o << "(" << z.citatel() << "/" << z.jmenovatel() << ")";
  return o;
}

