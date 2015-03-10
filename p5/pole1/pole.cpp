// pole.cpp

#include "pole.h"

Pole::Pole(int pp) {
  pocetPrvku = pp;
  pole = new TypPrvku[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++) pole[i] = TypPrvku();
}

Pole::~Pole() {
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

std::ostream& operator<<(std::ostream& o, const Pole& p) {
  for (int i=0; i<p.pocetPrvku; i++)
    o << p.pole[i] << " ";
  return o;
}

