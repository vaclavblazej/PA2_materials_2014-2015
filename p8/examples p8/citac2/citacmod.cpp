/* citacmod.cpp */

#include "citacmod.h"

CitacMod::CitacMod(int ph, int mod) : Citac(ph % mod) //initializer
{
   modul = mod;
}
void CitacMod::zvetsit(void)
{
   Citac::zvetsit();
   hodn = hodn % modul;
}
void CitacMod::zmensit(void)
{
   Citac::zmensit();
   hodn = hodn % modul;
}
