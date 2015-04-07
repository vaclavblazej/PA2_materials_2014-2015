/* znak.h */

#ifndef _ZNAK_
#define _ZNAK_

#include <cstdio>
#include <cctype>

#include "cithodn.h"

class Znak : public CitHodnota {
   char hodn;
public:
   Znak(int c)          {hodn = c;}
   //virtual
   void zvetsit()       {hodn++;}
   //virtual
   void zmensit()       {hodn--;}
   //virtual
   void hodnota(char *val)
			{ if (isprint(hodn))
			    sprintf(val, "%c", hodn);
			  else
			    sprintf(val, "\\%d", hodn);
			}
   //virtual
   CitHodnota *kopie() {return new Znak(hodn);}
};

#endif
