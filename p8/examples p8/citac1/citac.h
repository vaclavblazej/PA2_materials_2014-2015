/* citac.h */

#ifndef _CITAC_
#define _CITAC_

class Citac {
protected:
   int	hodn;
   int	pocHodn;
public:
   Citac(int ph)    {pocHodn = ph; nastavit();}
   void zvetsit()   {hodn++;}
   void zmensit()   {hodn--;}
   void nastavit()  {hodn = pocHodn;}
   int  hodnota()   {return hodn;}
};

#endif