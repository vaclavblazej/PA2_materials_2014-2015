/* citac.h */
/* Trida Citac s dynamicky vazanymi metodami */

#ifndef _CITAC_
#define _CITAC_

class Citac {
protected:
   int	hodn;
   int	pocHodn;
public:
   Citac(int ph)    {pocHodn = ph; nastavit();}
   virtual ~Citac() { }   // u trid s virtualnimi metodami byva podezrele,
                          // pokud destruktor neni take virtualni.
   virtual
    void zvetsit()   {hodn++;}
   virtual
    void zmensit()   {hodn--;}
   void nastavit()  {hodn = pocHodn;}
   int hodnota()    {return hodn;}
};

#endif
