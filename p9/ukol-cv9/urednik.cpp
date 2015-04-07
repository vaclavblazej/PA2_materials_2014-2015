#include "urednik.h"

Urednik::Urednik(std::string name, std::string surname, int salary)
	:Zamestnanec(name, surname),salary(salary){}

Urednik::~Urednik(){}

int Urednik::plat() const{
	return salary;
}

void Urednik::vypis(std::ostream & os) const{
	os << "Officer: " << name << ' ' << surname << ", salary: " << salary;
}
