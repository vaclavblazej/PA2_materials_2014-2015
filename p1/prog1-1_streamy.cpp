/* prog1-1.cpp */

/*
standardní datové proudy - bezpečnější vstupní a
výstupní konverze
*/

/*
v C se includuji knihovny napriklad
#include <stdlib.h>

v C++ se stare knihovny z C daji includovat take, avsak
jmenuji se jinak nez v C - maji 'c' nazacatku a chybi jim '.h' na konci
#include <cstdlib>
*/

#include <cstdlib>  // sdtlib.h z C
#include <cstdio>   // stdio.h z C
#include <iostream> // C++ knihovna pro praci se vstupy a vystupy

using namespace std;

int main()
{
    int x;

    // vstup a vystup ve stylu C
    printf("zadej cele cislo\n");
    scanf("%d", &x);
    printf("zadal jsi %d\n", x);

    // vstup a vystup ve stylu C++
    cout << "zadej cele cislo" << endl;
    cin >> x;
    cout << "zadal jsi " << x << endl;

    //system("PAUSE"); // toto odkomentujte pokud se okno programu predcasne zavira
    return 0;
}

/*
za poznamku stoji, ze zpusob vstupu a vystupu v C++ je trochu pomalejsi nez zpusob Cecka
pokud je tedy aplikace silne zavisla na praci se vstupy a vystupy, musime si davat pozor
jak s nimi pracujeme - jinak se nam muze program znatelne zpomalit
*/
