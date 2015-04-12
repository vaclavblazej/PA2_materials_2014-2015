#ifndef __CAT_H__
#define __CAT_H__

#include <string>
#include "animal.h"

class Cat : virtual public Animal{
public:
	virtual std::string sound();
private:
};

#endif /* __CAT_H__ */
