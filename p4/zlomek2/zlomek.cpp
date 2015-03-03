// zlomek.cpp

#include <cstdlib>  // abs ()
#include <iostream>

#include "zlomek.h"

using namespace std;

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

void Zlomek::vypis() const {
  cout << '(' << cit << '/' << jmen << ')';
}

Zlomek Zlomek::soucet(Zlomek y) const {
// int spoljm = jmen * y.jmen;
//  Zlomek res(cit*y.jmen + y.cit*jmen, spoljm);
//  res.zkratit();
//  return res;
  return Zlomek(cit*y.jmen + y.cit*jmen, jmen * y.jmen);
}

Zlomek Zlomek::rozdil(Zlomek y) const {
  int spoljm = jmen * y.jmen;
  Zlomek res(cit*y.jmen - y.cit*jmen, spoljm);
  res.zkratit();
  return res;
}

bool Zlomek::rovno(Zlomek y) const {
  return cit*y.jmen == jmen*y.cit;
}

  
