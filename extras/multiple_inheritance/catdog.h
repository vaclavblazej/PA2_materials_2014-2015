#ifndef __CATDOG_H__
#define __CATDOG_H__

#include "cat.h"
#include "dog.h"

class CatDog : public Cat, public Dog{
public:
	virtual std::string sound();
private:
};

#endif /* __CATDOG_H__ */
