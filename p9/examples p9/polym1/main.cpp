/* main.cpp */

/* Zasobnik s abstraktnim prvkem */

#include <cstdlib>
#include <iostream>

#include "stack.h"

using namespace std;

class Cislo : public Prvek {
   int hodn;
public:
   Cislo(int h)		        {hodn = h;}
  //virtual
   void print(ostream& s) const	{s << hodn;}
};

class Znak : public Prvek {
   char hodn;
public:
   Znak(char h)		        {hodn = h;}
  //virtual 
   void print(ostream& s) const	{s << hodn;}
};

int main(void)
{  Stack s;
   Znak z('b');
   Cislo c(222);

   cout << "Polymorfni zasobnik\n";
   Cislo *pCislo=new Cislo(10);
   s.push(pCislo);
   Znak  *pZnak=new Znak('a');
   s.push(pZnak);
   s.push(&z);
   s.push(&c);
   cout << "Vypis zasobniku\n" << s;
   cout << "Odebirani ze zasobniku\n";
   while (!s.isEmpty())
      cout << *s.pop() << endl;
   s.push(&c); s.push(&z);
   delete pCislo;
   delete pZnak;
   //system("PAUSE");
   return 0;
}

