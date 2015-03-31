/* citacmod.cpp */

#include "citacmod.h"

CitacMod::CitacMod(int ph, int mod) : Citac(ph % mod) {
   modul = mod;
}

void CitacMod::zvetsit(void) {
// Citac::zvetsit();
// hodn = (hodn+1) % modul;
   if (++hodn==modul)hodn=0;
}

void CitacMod::zmensit(void) {
   Citac::zmensit();
   hodn = hodn % modul;
}
