/* main2.cpp */

#include <cstdlib>
#include <iostream>

#include "citacmod.h"

using namespace std;

int menu2()
/* vypise nabidku a precte volbu
   vrati: 0 ... konec, 1,2,3 ... operace s citacem
*/
{  char volba;
   cout << endl;
   do {
      cout << "0) Konec\n";
      cout << "1) Zvetsit\n";
      cout << "2) Zmensit\n";
      cout << "3) Nastavit\n";
      cout << "Vase volba: ";
      cin >> volba;
      cin.ignore(100, '\n');
      if (volba < '0' || volba > '3') {
         cout << "Nedovolena volba\n";
         volba = 'e';
      }
   } while (volba == 'e');
   return volba - '0';
}

int main2()
{  int volba;
   cout << "Citac normalni" << endl;
   Citac c(0);
   do {
      cout << "Hodnota = " << c.hodnota() << endl;
      volba = menu2();
      switch (volba) {
        case 1: c.zvetsit(); break;
        case 2: c.zmensit(); break;
        case 3: c.nastavit(); break;
      }
   } while (volba > 0);
   cout << "\nCitac modulo 5" << endl;
   CitacMod cm(0, 5);
   do {
      cout << "Hodnota = " << cm.hodnota() << endl;
      volba = menu2();
      switch (volba) {
        case 1: cm.zvetsit(); break;
        case 2: cm.zmensit(); break;
        case 3: cm.nastavit(); break;
      }
   } while (volba > 0);
   
   cout << "\nc = cm a pak citani s c" << endl;
   c = cm;
   do {
      cout << "Hodnota = " << c.hodnota() << endl;
      volba = menu2();
      switch (volba) {
        case 1: c.zvetsit(); break;
        case 2: c.zmensit(); break;
        case 3: c.nastavit(); break;
      }
   } while (volba > 0);
   
   cout << "Konec\n";
   //system("PAUSE");
   return 0;
}
