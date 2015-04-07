#ifndef __FIRMA_H__
#define __FIRMA_H__

#include <vector>
#include <iostream>
#include <string>
#include "zamestnanec.h"

class Firma{
public:
	Firma(const std::string name);
	~Firma();
	void add(Zamestnanec * zamestnanec);
	void remove(Zamestnanec * zamestnanec);
	friend std::ostream & operator<<(std::ostream & os, const Firma & firma);
private:
	std::string name;
	std::vector<Zamestnanec *> zamestnanci;
};

#endif /* __FIRMA_H__ */
