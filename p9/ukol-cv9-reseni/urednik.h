#ifndef __UREDNIK_H__
#define __UREDNIK_H__

#include <string>
#include <iostream>
#include "zamestnanec.h"

class Urednik : public Zamestnanec{
public:
	Urednik(std::string name, std::string surname, int salary);
	virtual ~Urednik();
	virtual int plat() const;
protected:
	virtual void vypis(std::ostream & os) const;
	int salary;
};

#endif /* __UREDNIK_H__ */
