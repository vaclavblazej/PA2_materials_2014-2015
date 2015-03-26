/* pole.h */

#ifndef _POLE_
#define _POLE_

#include <iostream>

template <class T>
class Pole {
  T *pole;
  int pocetPrvku;
public:
  explicit Pole(int pp = 0);
  ~Pole();
  Pole(const Pole&);
  int delka() const {return pocetPrvku;}
  Pole& operator=(const Pole&);
  T& operator[](int);
  const T& operator[](int) const;
};

template <class T>
Pole<T>::Pole(int pp) {
  pocetPrvku = pp;
  pole = new T[pocetPrvku];
  //for (int i=0; i<pocetPrvku; i++) pole[i] = 0; // takto je to spatne
  //for (int i=0; i<pocetPrvku; i++) pole[i] = T();  // takto je to dobre
}

template <class T>
Pole<T>::~Pole() {
  delete [] pole;
  pole = NULL;
  pocetPrvku = 0;
}

template <class T>
Pole<T>::Pole(const Pole<T>& p) {
  pocetPrvku = p.pocetPrvku;
  pole = new T[pocetPrvku];
  for (int i=0; i<pocetPrvku; i++)
    pole[i] = p.pole[i];
}

template <class T>
Pole<T>& Pole<T>::operator=(const Pole<T>& p) {
  if (this!=&p) {
    delete [] pole;
    pocetPrvku = p.pocetPrvku;
    pole = new T[pocetPrvku];
    for (int i=0; i<pocetPrvku; i++)
      pole[i] = p.pole[i];
  }
  return *this;
}

template <class T>
T& Pole<T>::operator[](int ind) {
  if (ind<0 || ind>=pocetPrvku)
    throw "nedovoleny index";
  return pole[ind];
}

template <class T>
const T& Pole<T>::operator[](int ind) const {
  if (ind<0 || ind>=pocetPrvku)
    throw "nedovoleny index";
  return pole[ind];
}

template <class T>
std::ostream& operator<<(std::ostream& o, const Pole<T>& p) {
    for (int i=0; i<p.delka(); i++)
      o << p[i] << " ";
    return o;
  }

#endif
