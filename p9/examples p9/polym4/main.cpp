/* main.cpp */

/* Zasobnik s abstraktnim prvkem, test typu prvku */

#include <cstdlib>
#include <iostream>
#include <typeinfo>

#include "stack.h"

using namespace std;

struct Cislo : public Prvek {
   int hodn;
   Cislo(int h)		         	{hodn = h;}
   virtual void print(ostream& s) const	{s << hodn;}
};

struct Znak : public Prvek {
   char hodn;
   Znak(char h)		        	{hodn = h;}
   virtual void print(ostream& s) const	{s << hodn;}
};

int main()
{
   Stack s;

   cout << "Polymorfni zasobnik a test typu objektu\n";
   Cislo *pc1=new Cislo(10);
   s.push(pc1);
   Cislo *pc2=new Cislo(29);
   s.push(pc2);
   Znak  *pz=new Znak('a');
   s.push(pz);
   cout << s;

   Prvek *p;
   int pocetCisel = 0, pocetZnaku = 0;
   while (!s.isEmpty()) {
     p = s.pop();
     cout << "typeid(*p).name(): " << typeid(*p).name() << endl;
     if (typeid(*p)==typeid(Cislo))
       pocetCisel++;
     else
     if (typeid(*p)==typeid(Znak))
       pocetZnaku++;
   }
   cout << "pocet cisel = " << pocetCisel << endl;
   cout << "pocet znaku = " << pocetZnaku << endl;
   delete pc1;
   delete pc2;
   delete pz;
   //system("PAUSE");
   return 0;
}
