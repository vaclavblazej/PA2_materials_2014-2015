/* zasobnik.h */

#ifndef _ZASOBNIK_H_
#define _ZASOBNIK_H_

typedef char TypPrvku;

class Zasobnik {
  public:
    Zasobnik() {vrch = 0;}
    ~Zasobnik();
    void vloz(TypPrvku p);
    TypPrvku odeber();
    bool jePrazdny();
  private:
  struct Elem {
      TypPrvku hodn;
      Elem *dalsi;
      Elem (TypPrvku p, Elem *d) {hodn = p; dalsi = d;}
    }; 
    Elem *vrch;
};

#endif
