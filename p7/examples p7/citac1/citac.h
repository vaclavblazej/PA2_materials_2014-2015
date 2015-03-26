/* citac.h */

#ifndef _CITAC_
#define _CITAC_

template <class T>
class Citac {
   T	hodn;
   T	pocHodn;
public:
   Citac(T ph)     {pocHodn = ph; nastavit();}
   void zvetsit()  {hodn++;}
   void zmensit()  {hodn--;}
   void nastavit() {hodn = pocHodn;}
   T hodnota()     {return hodn;}
};

#endif
