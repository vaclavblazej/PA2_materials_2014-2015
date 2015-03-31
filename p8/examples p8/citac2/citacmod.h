/* citacmod.h */

#ifndef _CITACMOD_
#define _CITACMOD_

#include "citac.h"

class CitacMod : public Citac {
   int	modul;
public:
   CitacMod(int ph, int mod);
   //virtual
    void zvetsit();
   //virtual
    void zmensit();
};

#endif