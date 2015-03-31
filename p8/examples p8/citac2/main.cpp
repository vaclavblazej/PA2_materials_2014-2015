/* main.cpp */

#include <cstdlib>
#include <iostream>

#include "citac.h"
#include "citacmod.h"
#include "citani.h"

using namespace std;

int main1()
{  Citac *pc = new Citac(0);
   CitacMod *pcm = new CitacMod(0, 5);
   cout << "sizeof(*pc): "<<" " <<sizeof(*pc) 
        <<" sizeof(*pcm): "<<" "<<sizeof(*pcm) <<endl;
   cout << "Citace" << endl;
   cout << "operace s typem Citac" << endl;
   citani(pc);    // cita obycejne
   cout << "operace s typem CitacMod" << endl;
   citani(pcm);   // cita mod 5
   cout << "Konec\n";
   delete pc;
   delete pcm;
   //system("PAUSE");
   return 0;
}
