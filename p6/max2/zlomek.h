// zlomek.h

#ifndef _ZLOMEK_
#define _ZLOMEK_

#include <iostream>

class Zlomek {
  int cit, jmen;
public:
  Zlomek(int c = 0, int j = 1);
  int citatel() const {return cit;}
  int jmenovatel() const {return jmen;}
  int sign() const {return cit>0?1:cit<0?-1:0;}
  void zkratit();
  Zlomek operator-() const;
  double doubleValue();
};

Zlomek operator+(const Zlomek&, const Zlomek&);
Zlomek operator-(const Zlomek&, const Zlomek&);
Zlomek operator*(const Zlomek&, const Zlomek&);
Zlomek operator/(const Zlomek&, const Zlomek&);
bool operator ==(const Zlomek&, const Zlomek&);
bool operator !=(const Zlomek&, const Zlomek&);
bool operator <(const Zlomek&, const Zlomek&);
bool operator <=(const Zlomek&, const Zlomek&);
bool operator >(const Zlomek&, const Zlomek&);
bool operator >=(const Zlomek&, const Zlomek&);
std::ostream& operator<<(std::ostream&, const Zlomek&);

#endif

