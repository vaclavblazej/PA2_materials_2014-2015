#ifndef __DOG_H__
#define __DOG_H__

#include <string>
#include "animal.h"

class Dog : virtual public Animal{
public:
	virtual std::string sound();
private:
};

#endif /* __DOG_H__ */
