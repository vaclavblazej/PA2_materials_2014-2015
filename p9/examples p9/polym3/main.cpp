/* main.cpp */

/* Zasobnik s abstraktnim prvkem, pretypovani na potomka */

#include <cstdlib>
#include <iostream>

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

   cout << "Polymorfni zasobnik a dynamicke pretypovani\n";
   Cislo *pc1=new Cislo(10);
   s.push(pc1);
   Cislo *pc2=new Cislo(29);
   s.push(pc2);
   Znak  *pz=new Znak('a');
   s.push(pz);
   cout << s;

   Cislo *pc;
   int soucet = 0;
   while (!s.isEmpty()) {
     //Alternativa nasl. dvou radek
     //if(pc = dynamic_cast<Cislo*>(s.pop())) soucet += pc->hodn;
     pc = dynamic_cast<Cislo*>(s.pop());
     if (pc!=NULL) soucet += pc->hodn;
   }
   cout << "soucet cisel v zasobniku = " << soucet << endl;
   delete pc1;
   delete pc2;
   delete pz;
   //system("PAUSE");
   return 0;
}
