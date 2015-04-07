/* main.cpp */

/* Zasobnik s abstraktnim prvkem, vyber prvku */

#include <cstdlib>

#include "stack.h"

using namespace std;

class Cislo : public Prvek {
   int hodn;
  public:
   Cislo(int h)		         	{hodn = h;}
   virtual void print(ostream& s) const	{s << hodn;}
};

class Znak : public Prvek {
   char hodn;
  public:
   Znak(char h)		        	{hodn = h;}
   virtual void print(ostream& s) const	{s << hodn;}
};

int main()
{
   Stack s;
   Cislo* pc=new Cislo(10);
   Znak*  pz=new Znak('a');
   cout << "pc: " << pc << ", pz: " << pz <<endl;
   cout << "Polymorfni zasobnik a vyber prvku\n";
   s.push(pc); 
   s.push(pz);
// Takto je to spatne;
// Znak  *pz1 = s.pop();
// Cislo *pc1 = s.pop();

// Takto je to dobre
   Prvek *p1 = s.pop();
   Prvek *p2 = s.pop();
   cout <<   "p1: " << p1 << '-' << *p1 
        << ", p2: " << p2 << '-' << *p2 << endl;
   delete pz;
   delete pc;
   //system("PAUSE");
   return 0;
}
