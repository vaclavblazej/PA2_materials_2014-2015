/* citac.h */

#ifndef _CITAC_
#define _CITAC_

#include <iostream>

#include "cithodn.h"

class Citac {
   CitHodnota   *hodn;
   CitHodnota   *pocHodn;
public:
   Citac(CitHodnota *ph)  {pocHodn = ph; hodn = pocHodn->kopie();
                           std::cout << "Citac(ph) pochodn: " << pocHodn
                                    << ", hodn: " << hodn << std::endl;
                          }
   ~Citac() { std::cout<<"~Citac() " << " " << hodn << std::endl;
              delete hodn;
            }
   void zvetsit()         {hodn->zvetsit();}
   void zmensit()         {hodn->zmensit();}
   void nastavit()        { std::cout<<"nastavit(): delete hodn: "<<hodn; 
                            delete hodn;
                            hodn = pocHodn->kopie();
                            std::cout<<", new hodn: "<<hodn<<std::endl;
                          }
   void hodnota(char *val){hodn->hodnota(val);}
};

#endif
