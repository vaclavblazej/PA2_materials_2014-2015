/* main.cpp */

#include <cstdlib>
#include <iostream>

#include "intcitac.h"
#include "zncitac.h"
#include "citani.h"

using namespace std;

int main()
{
   IntCitac  ic(27);
   ZnCitac   zc('X');
   cout << "Citace\n";
// Citani cisel
   cout << "Citani cisel\n" << endl;
   citani(&ic);      // cita cisla
// Citani znaku
   cout << "\nCitani znaku\n" << endl;
   citani(zc);      // cita znaky
   cout << "Konec\n";
   //system("PAUSE");
   return 0;
}

