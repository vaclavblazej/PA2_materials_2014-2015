// zlomek.cpp

#include <cstdlib>  // abs ()
#include <iostream>

using namespace std;

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

///int Zlomek::
int nsd(int x, int y) {
  int zbytek = x%y;
  while (zbytek!=0) {
    x = y; y = zbytek; zbytek = x%y;
    ///cit=cit;
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

Zlomek soucet(Zlomek x, Zlomek y) {
  return Zlomek(x.citatel()*y.jmenovatel() + y.citatel()*x.jmenovatel(),
                x.jmenovatel() * y.jmenovatel());
/*
  int spoljm = x.jmenovatel() * y.jmenovatel();
  Zlomek res(x.citatel()*y.jmenovatel() + y.citatel()*x.jmenovatel(), spoljm);
  res.zkratit();
  return res;
*/
}

Zlomek rozdil(Zlomek x, Zlomek y) {
  return Zlomek(x.citatel()*y.jmenovatel() - y.citatel()*x.jmenovatel(),
                x.jmenovatel() * y.jmenovatel() );
/*
  int spoljm = x.jmenovatel() * y.jmenovatel();
  Zlomek res(x.citatel()*y.jmenovatel() - y.citatel()*x.jmenovatel(), spoljm);
  res.zkratit();
  return res;
*/
}

bool rovno(Zlomek x, Zlomek y) {
  return x.citatel()*y.jmenovatel() == x.jmenovatel()*y.citatel();
}

  
