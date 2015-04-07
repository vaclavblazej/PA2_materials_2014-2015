#include "delnik.h"

Delnik::Delnik(std::string name, std::string surname, int coinsPerHour, int hours)
	:Zamestnanec(name, surname),coinsPerHour(coinsPerHour),hours(hours){}

Delnik::~Delnik(){}

int Delnik::plat() const{
	return hours * coinsPerHour;
}

void Delnik::vypis(std::ostream & os) const{
	os << "Worker: " << name << ' ' << surname << ", per hour payment: " << coinsPerHour << ", average hours: " << hours;
}
