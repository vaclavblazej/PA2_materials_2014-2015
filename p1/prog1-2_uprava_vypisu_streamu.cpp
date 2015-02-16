/* prog1-2.cpp */

/*
standardní datové proudy - bezpečnější vstupní a
výstupní konverze
*/

#include <cstdlib>
#include <iostream>
#include <iomanip> // zde je: setw, oct, showbase, hex, dec

using namespace std;

int main() {
  int x = -10;
  cout << "dekadicky " << x << endl; // normalni vypis
  cout << "celkem 10 znaku " << setw(10) << setfill('.') << x << endl; // pro zarovnavani
  cout << "osmickove " << oct << showbase << x << endl;
  cout << "sestnactkove " << hex << x << endl;
  // toto bude stale sestnactkove
  cout << "sestnactkove po druhe" /*<< hex */<< x << endl; // pozor! nektera nastaveni streamu se uchovavaji
  cout << "dekadicky " << dec << x << endl;
  //system("PAUSE");
  return 0;
}

/*
pozn:
 << je operator stejne jako + nebo /
poji se k nasledujicimu vyrazu, ma levou asociativitu
a muzeme ho pretizit

priklad vyhodnoceni vyrazu:
KOD
VYSTUP

cout << "dekadicky " << x << endl;
""

                cout << x << endl;
"dekadicky "

                     cout << endl;
"dekadicky -10"

                             cout;
"dekadicky -10\n"

*/