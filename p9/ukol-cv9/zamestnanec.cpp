#include "zamestnanec.h"
using namespace std;

int Zamestnanec::idCounter = 1;

Zamestnanec::Zamestnanec(std::string name, std::string surname)
	:id(idCounter++),name(name),surname(surname){}

Zamestnanec::~Zamestnanec(){}

ostream & operator<< (ostream & os, const Zamestnanec& u){
	u.vypis(os);
	return os;
}

void Zamestnanec::vypis(ostream & os) const{
	os << "Employee: " << name << ' ' << surname;
}
