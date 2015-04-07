#ifndef __ZAMESTNANEC_H__
#define __ZAMESTNANEC_H__

#include <string>
#include <iostream>

class Zamestnanec{
public:
	Zamestnanec(std::string name, std::string surname);
	virtual ~Zamestnanec();
	virtual int plat() const = 0;
	friend std::ostream & operator<< (std::ostream & os, const Zamestnanec & u);
	bool operator<(const Zamestnanec & z);
protected:
	virtual void vypis(std::ostream & os) const;
	static int idCounter;
	int id;
	std::string name;
	std::string surname;
};

#endif /* __ZAMESTNANEC_H__ */
