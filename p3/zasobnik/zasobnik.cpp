/* zasobnik.cpp */

#include <cstdlib>
#include <iostream>

#include "zasobnik.h"

using namespace std;

Zasobnik::~Zasobnik() {
  Elem *pom = vrch;
  while (vrch) {
    pom = vrch;
    vrch = vrch->dalsi;
    delete pom;
  }
}

void Zasobnik::vloz(TypPrvku p) {
   vrch = new Elem(p, vrch);
}

TypPrvku Zasobnik::odeber() {
  if (vrch) {
    TypPrvku p = vrch->hodn;
    Elem *pom = vrch;
    vrch = vrch->dalsi;
    delete pom; 
    return p;
  } else {
     cout << "odebirani z prazdneho zasobniku" << endl;
     //system("PAUSE");
     exit(1);
  }
}
    
bool Zasobnik::jePrazdny() {
  return vrch==0;
}
    





