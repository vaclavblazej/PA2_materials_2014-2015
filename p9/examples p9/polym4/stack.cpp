// stack.cpp

#include "stack.h"

Stack::~Stack()
{ Elem *p=vrch;
  while (p) {
    vrch=vrch->dalsi;
    delete p;
    p=vrch;
  }
}

void Stack::push(Prvek* p)
{
   vrch = new Elem(p, vrch);
}

Prvek *Stack::pop()
{
   if (!vrch) throw "pop na prazdny prazdny zasobnik";
   Elem *pom = vrch;
   Prvek *prvek = vrch->hodn;
   vrch = vrch->dalsi;
   delete pom;
   return prvek;
}

std::ostream& operator<<(std::ostream& s, Stack& stc)
{
   Stack::Elem *pom = stc.vrch;

   while (pom) {
      s << *pom->hodn << std::endl;
      pom = pom->dalsi;
   }
   return s;
}
