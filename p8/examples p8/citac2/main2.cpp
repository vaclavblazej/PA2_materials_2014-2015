/* main2.cpp */

#include <cstdlib>
#include <iostream>
#include "citac.h"
#include "citacmod.h"
#include "citani.h"

using namespace std;

int main()
{
   Citac cit(0);
   CitacMod citmod(0, 5);
   cout << "&cit: "<<" " <<sizeof(cit)
        <<" &citmod: "<<" "<<sizeof(citmod) <<endl;
   cout << "Citace" << endl;
   cout << "operace s typem Citac" << endl;
   citani(&cit);    // cita obycejne
   cout << "operace s typem CitacMod" << endl;
   citani(&citmod);   // cita mod 5
   cout << "Konec\n";
   //system("PAUSE");
   return 0;
}
