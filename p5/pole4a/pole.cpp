// pole.cpp

#include "pole.h"

Pole::Pole(int pp) {
  pocetPrvku = pp;
  pole = new TypPrvku[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++) pole[i] = TypPrvku();
  std::cout << "constr" << std::endl;
}

Pole::Pole(const Pole& p) {
  std::cout << "copy constr" << std::endl;
  pocetPrvku = p.pocetPrvku;
  pole = new TypPrvku[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++) pole[i] = p.pole[i];
}
  
Pole::~Pole() {
  std::cout << "destr" << std::endl;
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

Pole& Pole::operator=(const Pole& p) {
  if (&p==this) return *this;
  delete [] pole;
  pocetPrvku = p.pocetPrvku;
  pole = new TypPrvku[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++) pole[i] = p.pole[i];
  std::cout << "operator=" << std::endl;
  return *this;
}

std::ostream& operator<<(std::ostream& o, const Pole& p) {
  for (int i=0; i<p.pocetPrvku; i++)
    o << p.pole[i] << " ";
  return o;
}

