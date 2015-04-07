/* cithodn.h */

#ifndef _CITHODN_
#define _CITHODN_

struct CitHodnota {
   virtual ~CitHodnota () { }
   virtual void zvetsit() = 0;
   virtual void zmensit() = 0;
   virtual void hodnota(char *val) = 0;
};

#endif

