#ifndef __DELNIK_H__
#define __DELNIK_H__

#include <string>
#include <iostream>
#include "zamestnanec.h"

class Delnik : public Zamestnanec{
public:
	Delnik(std::string name, std::string surname, int coinsPerHour, int hours);
	virtual ~Delnik();
	virtual int plat() const;
protected:
	virtual void vypis(std::ostream & os) const;
	int coinsPerHour;
	int hours;
};

#endif /* __DELNIK_H__ */
