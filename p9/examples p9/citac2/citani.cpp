/* citani.cpp */


#include <iostream>

#include "citani.h"

using namespace std;

int menu()
{
   char volba;
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

void citani(Citac *pc)
{
  int volba;
  char hodn[100];
  do {
     pc->hodnota(hodn);
     cout << "Hodnota = " << hodn << endl;
     volba = menu();
     switch (volba) {
       case 1: pc->zvetsit(); break;
       case 2: pc->zmensit(); break;
       case 3: pc->nastavit(); break;
     }
  } while (volba > 0);
  cout << "konec citani" << endl;
}

void citani(Citac& cit)
{
  int volba;
  char hodn[100];
  do {
     cit.hodnota(hodn);
     cout << "Hodnota = " << hodn << endl;
     volba = menu();
     switch (volba) {
       case 1: cit.zvetsit(); break;
       case 2: cit.zmensit(); break;
       case 3: cit.nastavit(); break;
     }
  } while (volba > 0);
  cout << "konec citani" << endl;
}

