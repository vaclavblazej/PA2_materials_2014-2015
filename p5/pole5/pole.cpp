// pole.cpp

#include "pole.h"

Pole::CRPole::CRPole(int d) {
  pole = new TypPrvku[d];
  pocetPrvku = d;
  citacRef = 1;
  for (int i=0; i<pocetPrvku; i++) pole[i] = TypPrvku();
}

Pole::CRPole::~CRPole() {
  delete [] pole;
}

Pole::Pole(int pp) {
  ptr = new CRPole(pp);
}

Pole::Pole(const Pole& p) {
  pripoj(p.ptr);
}
  
Pole::~Pole() {
  odpoj();
}

TypPrvku& Pole::operator[](int ind) {
  if (ind<0 || ind>=ptr->pocetPrvku)
    throw "nedovoleny index";
  return ptr->pole[ind];
}

const TypPrvku& Pole::operator[](int ind) const {
  if (ind<0 || ind>=ptr->pocetPrvku)
    throw "nedovoleny index";
  return ptr->pole[ind];
}

Pole& Pole::operator=(const Pole& p) {
  if (this==&p) return *this;
  odpoj();
  pripoj(p.ptr);
  return *this;
}

std::ostream& operator<<(std::ostream& o, const Pole& p) {
  int n = p.delka();
  for (int i=0; i<n; i++) o << p.ptr->pole[i] << ' ';
  return o;
}

void Pole::pripoj(Pole::CRPole* p) {
  ptr = p;
  ++p->citacRef;
}

void Pole::odpoj() {
    if (--ptr->citacRef == 0)
      delete ptr;
}

