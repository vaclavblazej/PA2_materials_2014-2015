/* citac.h */

#ifndef _CITAC_
#define _CITAC_

struct Citac {
   virtual ~Citac()     { }
   virtual void zvetsit() = 0;
   virtual void zmensit() = 0;
   virtual void nastavit() = 0;
   virtual void hodnota(char *) = 0;
};

#endif
