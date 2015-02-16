/* prog1-1a.cpp */

/*
standardní datové proudy - bezpečnější vstupní a
výstupní konverze
*/

/*
jedina zmena v tomto programu oproti prog1-1.cpp je
ze misto int x, mame float x

zkuste si nekolik vstupu a vsimnete si, ze varianta ve stylu c
moc dobre nefunguje, v kodu by bylo potreba zmenit krome float x
jeste:
    scanf("%f", &x);
    printf("zadal jsi %f\n", x);

takoveto formatovani ve stylo C++ je zabudovano v pretizenem operatoru
'>>' a tak neni potreba menit jeste neco aby styl C++ fungoval
*/

#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    float x;

    // vstup a vystup ve stylu C
    printf("zadej cele cislo\n");
    scanf("%d", &x);
    printf("zadal jsi %d\n", x);

    // vstup a vystup ve stylu C++
    cout << "zadej cele cislo" << endl;
    cin >> x;
    cout << "zadal jsi " << x << endl;

    //system("PAUSE");
    return 0;
}
