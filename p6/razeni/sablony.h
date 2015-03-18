// sablony.h

#ifndef _SABLONY_H_
#define _SABLONY_H_

// sablona funkce pro razeni algoritmem SelectSort
#include <iostream>

template <class T>
void sort(T *pole, int n) {
  for (int i=0; i<n-1; i++) {
    int imin = i;
    T min = pole[i];
    for (int j=i+1; j<n; j++)
      if (pole[j]<min) {
        imin = j;
        min = pole[j];
      }
      pole[imin] = pole[i];
      pole[i] = min;
  }
}

// sablona pro vypis prvku pole, 10 prvku na radek
template <class T>
void vypis(T *pole, int n) {
  
  int p = 0;
  for (int i=0; i<n; i++) {
    std::cout << pole[i] << ' ';
    if (++p == 10) {
      std::cout << std::endl;
      p = 0;
    }
  }
  if (p) std::cout << std::endl;
}

#endif
