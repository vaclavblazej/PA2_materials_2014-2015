// zlomek.h
// operace pomoci friend funkci pretezujicich operatory
// vcetne <<

#ifndef _ZLOMEK_
#define _ZLOMEK_

#include <iostream>

class Zlomek {
  int cit, jmen;
public:
  Zlomek(int c = 0, int j = 1);
  int citatel() const {return cit;}
  int jmenovatel() const {return jmen;}
  void zkratit();
  friend Zlomek operator+(Zlomek, Zlomek);
  friend Zlomek operator-(Zlomek, Zlomek);
  friend bool operator==(Zlomek, Zlomek);
  friend std::ostream& operator<<(std::ostream&, Zlomek);
};

#endif


