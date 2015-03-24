// find.h

/*
Napište šablonu funkce, která v poli p prvků typu T najde hodnotu x typu T. T je
parametrem šablony, parametry funkce jsou p (ukazatel na začátek pole), n (počet prvků
pole) a x (hledaná hodnota). Výsledkem funkce je ukazatel na prvek pole (pokud x v poli
je) nebo NULL (pokud x v poli není). Vyzkoušejte v programu pro pole prvků typu int a
char.
*/

#ifndef _FIND_
#define _FIND_

/*
PRIKLAD - zjisti maximum z parametru 'x' a 'y'
template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}*/

#include <cstdlib> // NULL
#include <iostream>

template <class T>
T *find(T *p, int n, T x){
	for (int i = 0; i < n; i++) {
		if (p[i] == x) return p+i;
	}
	return NULL;
}

template <class T>
void sort(T *p, int n){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (p[j] > p[j+1]){
				T tmp = p[j+1];
				p[j+1] = p[j];
				p[j] = tmp;
			}
		}
	}

}

template <class T>
void print(T *p, int n, const char *c){
	std::cout << c << ": ";
	for (int i = 0; i < n; i++) {
		if(i != 0) std::cout << ' ';
		std::cout << p[i];
	}
	std::cout << std::endl;
}

#endif /*_FIND_*/
