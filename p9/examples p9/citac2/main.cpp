/* main.cpp */

#include <cstdlib>
#include <iostream>

#include "citani.h"
#include "citac.h"
#include "cislo.h"
#include "znak.h"

using namespace std;

int main()
{  Cislo *pc=new Cislo(25);
   Znak  *pz=new Znak('p');
   Citac citCisel(pc);
   Citac citZnaku(pz);

   cout << "\n\nCitace\n";
// Citani cisel
   cout << "Citani cisel\n" << endl;
   citani(&citCisel);
// Citani znaku
   cout << "\nCitani znaku\n" << endl;
   citani(&citZnaku);
   cout << "Konec\n";
   delete  pc;
   delete pz;
   // system("PAUSE");
   return 0;
}
