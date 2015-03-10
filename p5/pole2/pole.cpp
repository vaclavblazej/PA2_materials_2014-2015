// pole.cpp

#include <iostream>
#include "pole.h"

using namespace std;

Pole::Pole(int pp) {
  pocetPrvku = pp;
  pole = new TypPrvku[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++) pole[i] = TypPrvku();
}

Pole::~Pole() {
  cout << "dealokace pole na adrese " << (void*)pole << endl;
  delete [] pole;
  pole = NULL;
  pocetPrvku = 0;
}

TypPrvku& Pole::operator[](int ind) {
  if (ind<0 || ind>=pocetPrvku)
    throw "nedovoleny index";
  return pole[ind];
}

const TypPrvku& Pole::operator[](int ind) const {
  if (ind<0 || ind>=pocetPrvku)
    throw "nedovoleny index";
  return pole[ind];
}

ostream& operator<<(ostream& o, const Pole& p) {
  for (int i=0; i<p.pocetPrvku; i++)
    o << p.pole[i] << " ";
  return o;
}

