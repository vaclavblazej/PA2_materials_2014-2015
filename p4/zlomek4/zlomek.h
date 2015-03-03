// zlomek.h
// operace pomoci metod pretezujicich operatory 

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
  Zlomek operator+(Zlomek) const;
  Zlomek operator-(Zlomek) const;
  bool operator==(Zlomek) const;
};


#endif


