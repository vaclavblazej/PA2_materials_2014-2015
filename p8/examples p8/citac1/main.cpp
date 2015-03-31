/* main.cpp */


#include <cstdlib>
#include <iostream>

#include "citacmod.h"

using namespace std;

int menu()
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

int main()
{  int volba;
   cout << "Citac\n";
   CitacMod citac(0, 5);
   do {
      cout << "Hodnota = " << citac.hodnota() << endl;
      volba = menu();
      switch (volba) {
        case 1: citac.zvetsit(); break;
        case 2: citac.zmensit(); break;
        case 3: citac.nastavit(); break;
      }
   } while (volba > 0);
   cout << "Konec\n";
   //system("PAUSE");
   return 0;
}
