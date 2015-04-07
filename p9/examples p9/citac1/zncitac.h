/* zncitac.h */

#ifndef _ZNCITAC_
#define _ZNCITAC_

#include <cstdio>
#include <cctype>

#include "citac.h"

class ZnCitac : public Citac {
   char hodn;
   char pocHodn;
public:
   ZnCitac(char ph)      {pocHodn = ph; nastavit();}
   //virtual
    void zvetsit()       {hodn++;}
   //virtual
    void zmensit()       {hodn--;}
   //virtual
    void nastavit()      {hodn = pocHodn;}
   //virtual
    void hodnota(char *val)
			 { if (isprint(hodn))
			     sprintf(val, "%c", hodn);
			   else
			     sprintf(val, "\\%d", hodn);
			 }
};

#endif
