#include <iostream>
using namespace std;
#include "auto.h"

class Osobni : public Auto{
public:
	Osobni(string SPZ, int rok, int osob):Auto(SPZ, rok),osob(osob){}
	int getetPrivateRok(){
	 return rok;
	}
	virtual void accelerate(){
		cout << "HELLO KITTY!!!" << endl;
	}
private:
	int osob;
};

