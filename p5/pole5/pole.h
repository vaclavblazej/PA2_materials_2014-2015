/* pole.h */

#ifndef _POLE_
#define _POLE_

#include <iostream>

typedef int TypPrvku;

class Pole {
public:
  explicit Pole(int pp);
  Pole(const Pole&);
  ~Pole();
  int delka() const {return ptr->pocetPrvku;}
  TypPrvku& operator[](int);
  const TypPrvku& operator[](int) const;
  Pole& operator=(const Pole&);
  friend std::ostream& operator<<(std::ostream&, const Pole&);
private:
  struct CRPole {
    TypPrvku *pole;
    int pocetPrvku;
    int citacRef;
    CRPole(int pp);
    ~CRPole();
  };
  CRPole *ptr;
  void pripoj(CRPole *p);
  void odpoj();
};

#endif

