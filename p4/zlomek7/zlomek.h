// zlomek.h
// operace pomoci friend funkci pretezujicich operatory
// vcetne <<

#ifndef _ZLOMEK_
#define _ZLOMEK_

#include <iostream>

class Zlomek {
  int cit, jmen;
  void zkratit();
public:
  Zlomek(int c = 0, int j = 1);
  int citatel() const {return cit;}
  int jmenovatel() const {return jmen;}
  friend Zlomek operator+(Zlomek, Zlomek);
  friend Zlomek operator-(Zlomek, Zlomek);
  friend bool operator==(Zlomek, Zlomek);
  friend Zlomek& operator+=(Zlomek&, Zlomek);
  Zlomek operator++();
  Zlomek operator++(int);
  friend std::ostream& operator<<(std::ostream&, Zlomek);
  //new
  ///Zlomek& operator=(const Zlomek&); // funguje i kdyz operator= nepretizime
};

#endif
