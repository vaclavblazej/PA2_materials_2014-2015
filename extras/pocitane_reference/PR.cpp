#include "PR.h"

PR::PR(){
	std::cout << ">>> " << "creating brand new object" << std::endl;
	size = new int;
	*size = 20;
	arr = new int[*size];
	elems = new int;
	*elems = 0;
	count = new int;
	*count = 1;
}

PR::~PR(){
	std::cout << ">>> " << "destroy object" << std::endl;
	*count -= 1;
	if(*count == 0) {
		std::cout << ">>> " << "delete array" << std::endl;
		delete [] arr;
		delete size;
		delete count;
	}
}

PR & PR::operator=(const PR & x){
	std::cout << ">>> " << "copy object by operator=" << std::endl;
	if(arr == x.arr) return *this;
	*count -= 1;
	if(*count == 0) {
		std::cout << ">>> " << "delete array" << std::endl;
		delete [] arr;
		delete size;
		delete count;
	}
	size = x.size;
	count = x.count;
	arr = x.arr;
	*count += 1;
	return *this;
}

PR::PR(const PR & x){
	std::cout << ">>> " << "copy object by copy constructor" << std::endl;
	size = x.size;
	count = x.count;
	arr = x.arr;
	*count += 1;
}

void PR::add(int x){
	std::cout << ">>> " << "add element " << x << std::endl;
	arr[(*elems)++] = x;
}

std::ostream& operator<<(std::ostream & os, const PR & x){
	os << '[';
	for (int i = 0; i < *x.count; i++) {
		if(i != 0)os << ' ';
		os << x.arr[i];
	}
	os << ']' << std::endl;

	return os;
}
