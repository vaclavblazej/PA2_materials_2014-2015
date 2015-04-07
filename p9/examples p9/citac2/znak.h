/* znak.h */

#ifndef _ZNAK_
#define _ZNAK_

#include <cstdio>
#include <cctype>

#include "cithodn.h"

class Znak : public CitHodnota {
   char hodn;
public:
   Znak(int c)           {hodn = c;}
   //virtual
    void zvetsit()       {hodn++;}
   //virtual
    void zmensit()       {hodn--;}
   //virtual
    void hodnota(char *val)
                         { if (std::isprint(hodn))
			     std::sprintf(val, "%c", hodn);
			   else
			     std::sprintf(val, "\\%d", hodn);
			 }
};

#endif
