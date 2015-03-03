// zlomek.h
// operace pomoci funkci

#ifndef _ZLOMEK_
#define _ZLOMEK_

class Zlomek {
  int cit, jmen;
  void zkratit();
  ///int nsd(int,int);
public:
  Zlomek(int = 0, int = 1);
  int citatel()    const {return cit;}
  int jmenovatel() const {return jmen;}
  void vypis()     const;
};

Zlomek soucet(Zlomek, Zlomek);
Zlomek rozdil(Zlomek, Zlomek);
bool rovno(Zlomek, Zlomek);

#endif


