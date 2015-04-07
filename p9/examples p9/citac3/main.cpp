1
        /* main.cpp */

#include <cstdlib>
#include <iostream>

#include "citani.h"
#include "citac.h"
#include "cislo.h"
#include "znak.h"

using namespace std;

int mainx(void)
{  Cislo *pc=new Cislo(5);
   Znak  *pz=new Znak('h');
   Citac citCisel(pc);
   Citac citZnaku(pz);
   // Citani cisel
   cout << "Citani cisel\n" << endl;
   citani(&citCisel);
// Citani znaku
   cout << "\nCitani znaku\n" << endl;
   citani(citZnaku);
   cout<<"delete: "<<pc<<", "<<pz<<endl;
   delete pc;
   delete pz;
   cout << "Konec\n";
   return 0;
}

int main(void) {
   int i=mainx();
   //system("PAUSE");
   return i;
}

