/* pole.h */

#ifndef _POLE_
#define _POLE_

#include <iostream>

typedef int TypPrvku;

class Pole {
  TypPrvku *pole;
  int pocetPrvku;
public:
  explicit Pole(int pp);
  ~Pole();
  int delka() const {return pocetPrvku;}
  TypPrvku& operator[](int);
  const TypPrvku& operator[](int) const;
  Pole& operator=(const Pole&);
  friend std::ostream& operator<<(std::ostream&, const Pole&);
};

#endif

