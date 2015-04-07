/* intcitac.h */

#ifndef _INTCITAC_
#define _INTCITAC_

#include <cstdio>

#include "citac.h"

class IntCitac : public Citac {
   int  hodn;
   int  pocHodn;
public:
   IntCitac(int ph)      {pocHodn = ph; nastavit();}
   //virtual
    void zvetsit()       {hodn++;}
   //virtual
    void zmensit()       {hodn--;}
   //virtual
    void nastavit()      {hodn = pocHodn;}
   //virtual
    void hodnota(char *val)
                         {sprintf(val, "%d", hodn);}
};

#endif