/* citac.h */

#ifndef _CITAC_
#define _CITAC_

template <class T>
class Citac {
   T	hodn;
   T	pocHodn;
public:
   Citac(T ph);
   void zvetsit();
   void zmensit();
   void nastavit();
   T hodnota();
};

template <class T>
Citac<T>::Citac(T ph) {pocHodn = ph; nastavit();}

template <class T>
void Citac<T>::zvetsit() {hodn++;}

template <class T>
void Citac<T>::zmensit() {hodn--;}

template <class T>
void Citac<T>::nastavit() {hodn = pocHodn;}

template <class T>
T Citac<T>::hodnota() {return hodn;}

#endif
