#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal{
public:
	virtual ~Animal();
	virtual std::string sound() = 0;
private:
};

#endif /* __ANIMAL_H__ */
