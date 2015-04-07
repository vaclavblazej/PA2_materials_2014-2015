#include "firma.h"

Firma::Firma(const std::string name):name(name){}

Firma::~Firma(){
	for (auto it = zamestnanci.begin(); it != zamestnanci.end(); ++it){
		delete *it;
	}
	zamestnanci.clear();
}

void Firma::add(Zamestnanec * zamestnanec){
	zamestnanci.push_back(zamestnanec);
}

void Firma::remove(Zamestnanec * zamestnanec){
	for (auto it = zamestnanci.begin(); it != zamestnanci.end(); ++it){
		if (*it == zamestnanec){
			zamestnanci.erase(it);
			break;
		}
	}
}

std::ostream & operator<<(std::ostream & os, const Firma & f){
	for (Zamestnanec *z : f.zamestnanci){
		os << *z << std::endl;
	}
	return os;
}
