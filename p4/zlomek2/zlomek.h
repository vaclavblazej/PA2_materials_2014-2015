// zlomek.h
// operace pomoci metod 

#ifndef _ZLOMEK_
#define _ZLOMEK_


class Zlomek {
  int cit, jmen;
public:
  Zlomek(int c = 0, int j = 1);
  int citatel() const {return cit;}
  int jmenovatel() const {return jmen;}
  void zkratit();
  void vypis() const;
  Zlomek soucet(Zlomek) const;
  Zlomek rozdil(Zlomek) const;
  bool rovno(Zlomek) const;
};


#endif


