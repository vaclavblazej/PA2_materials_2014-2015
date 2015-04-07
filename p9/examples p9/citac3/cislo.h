/* cislo.h */

#ifndef _CISLO_
#define _CISLO_

#include <cstdio>

#include "cithodn.h"

class Cislo : public CitHodnota {
   int  hodn;
public:
   Cislo(int c)         {hodn = c;}
   //virtual
   void zvetsit()       {hodn++;}
   //virtual
   void zmensit()       {hodn--;}
   //virtual
   void hodnota(char *val) {sprintf(val, "%d", hodn);}
   //virtual
   CitHodnota *kopie()  {return new Cislo(hodn);}
};

#endif