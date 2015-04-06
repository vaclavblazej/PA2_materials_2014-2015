#ifndef __OSOBNI_H__
#define __OSOBNI_H__

#include <iostream>
using namespace std;
#include "auto.h"

class Osobni : public Auto{
public:
	Osobni(string SPZ, int rok, int osob):Auto(SPZ, rok),osob(osob){}
	virtual ~Osobni(){}
	void prints(ostream & os){
		os << *this;
	}
	virtual void printv(ostream & os){
		os << *this;
	}
	friend ostream & operator<< (ostream &os, const Osobni & a){
		os << "Osob: " << a.SPZ << ' ' << a.rok << ' ' << a.osob;
		return os;
	}
private:
	int osob;
};

#endif /* __OSOBNI_H__ */
