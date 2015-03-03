// zlomek.cpp

#include <cstdlib>

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

Zlomek operator+(Zlomek x, Zlomek y) {
  return Zlomek(x.cit*y.jmen + y.cit*x.jmen, x.jmen * y.jmen);
}

Zlomek operator-(Zlomek x, Zlomek y) {
  return Zlomek(x.cit*y.jmen - y.cit*x.jmen, x.jmen * y.jmen);
}

bool operator==(Zlomek x, Zlomek y) {
  return x.cit*y.jmen == x.jmen*y.cit;
}

Zlomek& operator+=(Zlomek& x, Zlomek y) {
  int spoljm = x.jmen*y.jmen;
  x.cit = x.cit*y.jmen+y.cit*x.jmen;
  x.jmen = spoljm;
  x.zkratit();
  return x;
}

Zlomek Zlomek::operator ++() {
  cit += jmen;
  zkratit();
  return *this;
}

Zlomek Zlomek::operator ++(int) {
  Zlomek vysl = *this;
  cit += jmen;
  zkratit();
  return vysl;
}

std::ostream& operator<<(std::ostream& os, Zlomek x) {
  os << '(' << x.cit << '/' << x.jmen << ')';
  return os;
}

//new
///Zlomek& Zlomek::operator=(const Zlomek& x) {
///  cit=x.cit; jmen=x.jmen;
///  return *this;
///}
