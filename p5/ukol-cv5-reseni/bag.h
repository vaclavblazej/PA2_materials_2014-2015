// complex.h

#ifndef _COMPLEX_
#define _COMPLEX_

#include <iostream>

class Bag {
private:
	// dynamic array of int values
	int *arr;
	int sizeArr;
public:
	Bag();
	Bag(int sizeArr);
	~Bag();
	void add(int value);
	bool remove(int value);
	bool exists(int value)const;
	Bag & operator+=(int value);
	friend std::ostream & operator<<(std::ostream &os, const Bag & x);
	Bag & operator=(const Bag & x);
	Bag(const Bag & x);
};

#endif /*_COMPLEX_*/
