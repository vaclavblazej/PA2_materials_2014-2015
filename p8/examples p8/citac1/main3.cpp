/* main3.cpp */

#include <cstdlib>
#include <iostream>

#include "citacmod.h"

using namespace std;

int menu3()
/* vypise nabidku a precte volbu
   vrati: 0 ... konec, 1,2,3 ... operace s citacem
*/
{  char volba;
   cout << endl;
   do 
   {  cout << "0) Konec\n";
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

int main3()
{  int volba;
   Citac* pc = new Citac(0);
   cout << "Citac normalni " << "sizeof (*pc): " << sizeof(*pc) << endl;
   do {
      cout << "Hodnota = " << pc->hodnota() << endl;
      volba = menu3();
      switch (volba) {
        case 1: pc->zvetsit(); break;
        case 2: pc->zmensit(); break;
        case 3: pc->nastavit(); break;
      }
   } while (volba > 0);
      
   CitacMod* pcm = new CitacMod(0, 5);
   cout << "\nCitac modulo 5 " << "sizeof (*pcm): "<< sizeof(*pcm) << endl;
   do {
      cout << "Hodnota = " << pcm->hodnota() << endl;
      volba = menu3();
      switch (volba) {
        case 1: pcm->zvetsit(); break;
        case 2: pcm->zmensit(); break;
        case 3: pcm->nastavit(); break;
      }
   } while (volba > 0);   
   cout << "\npc = pcm a pak citani s pc " << "sizeof(*pc): " << sizeof(*pc) << endl;

   delete pc;
   pc = pcm;
   do {
      cout << "Hodnota = " << pc->hodnota() << endl;
      volba = menu3();
      switch (volba) {
        case 1: pc->zvetsit(); break;
        case 2: pc->zmensit(); break;
        case 3: pc->nastavit(); break;
      }
   } while (volba > 0);
   
   delete pc;
   
   cout << "Konec\n";
   //system("PAUSE");
   return 0;
}
