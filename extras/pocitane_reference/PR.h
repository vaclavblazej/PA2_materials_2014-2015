#ifndef __PR_H__
#define __PR_H__
#include <iostream>

class PR{
	int *arr;
	int *size;
	int *elems;
	int *count;
public:
	PR();
	~PR();
	PR & operator=(const PR & x);
	PR(const PR & x);
	void add(int x);
	friend std::ostream& operator<<(std::ostream & os, const PR & x);
};

#endif /* __PR_H__ */
