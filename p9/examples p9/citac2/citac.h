/* citac.h */

#ifndef _CITAC_
#define _CITAC_

#include "cithodn.h"

class Citac {
   CitHodnota   *hodn;
   CitHodnota   *pocHodn;
public:
   Citac(CitHodnota *ph)   {pocHodn = ph; nastavit(); }
   void zvetsit()          {hodn->zvetsit();}
   void zmensit()          {hodn->zmensit();}
   void nastavit()         {hodn = pocHodn;}
   void hodnota(char *val) {hodn->hodnota(val);}
};

#endif
