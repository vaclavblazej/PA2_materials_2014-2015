#ifndef __AUTO_H__
#define __AUTO_H__

#include <iostream>
using namespace std;

class Auto {
public:
	Auto(string SPZ, int rok):SPZ(SPZ),rok(rok){}
	virtual ~Auto(){}
	void prints(ostream & os){
		os << *this;
	}
	virtual void printv(ostream & os){
		os << *this;
	}
	friend ostream & operator<<(ostream & os, const Auto & a){
		os << "Auto: " << a.SPZ << " " << a.rok;
		return os;
	}
protected:
	string SPZ;
	int rok;
};

#endif /* __AUTO_H__ */
