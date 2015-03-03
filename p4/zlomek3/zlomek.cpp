// zlomek.cpp

#include <cstdlib>
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

Zlomek operator+(Zlomek x, Zlomek y) {
  int spoljm = x.jmenovatel() * y.jmenovatel();
  Zlomek res(x.citatel()*y.jmenovatel() + y.citatel()*x.jmenovatel(), spoljm);
  res.zkratit();
  return res;
}

Zlomek operator-(Zlomek x, Zlomek y) {
  int spoljm = x.jmenovatel() * y.jmenovatel();
  Zlomek res(x.citatel()*y.jmenovatel() - y.citatel()*x.jmenovatel(), spoljm);
  res.zkratit();
  return res;
}

bool operator==(Zlomek x, Zlomek y) {
  return x.citatel()*y.jmenovatel() == x.jmenovatel()*y.citatel();
}

  
