// complex.cpp

#include "bag.h"
Bag::Bag():sizeArr(40){
	arr = new int[sizeArr];
	for (int i = 0; i < sizeArr; ++i) {
		arr[i] = 0;
	}
}

Bag::Bag(int sizeArr):sizeArr(sizeArr){
	arr = new int[sizeArr];
	for (int i = 0; i < sizeArr; ++i) {
		arr[i] = 0;
	}
}

Bag::~Bag(){
	delete []arr;
}

void Bag::add(int value){
	arr[value]++;
}

bool Bag::remove(int value){
	if(arr[value] == 0)return false;
	arr[value]--;
	return true;
}

bool Bag::exists(int value)const{
	return arr[value] != 0;
}

Bag & Bag::operator+=(int value){
	add(value);
}

std::ostream & operator<<(std::ostream & os, const Bag & x){
	os << '(';
	bool f = false;
	for (int i = 0; i < x.sizeArr; ++i) {
		if(x.arr[i] != 0){
			if(f)
				os << ',';
			f = true;
			os << i << '[' << x.arr[i] << ']';
		}
	}
	os << ')';
	return os;
}

Bag & Bag::operator=(const Bag & x){
	delete[]arr;
	sizeArr = x.sizeArr;
	arr = new int[sizeArr];
	for (int i = 0; i < sizeArr; ++i) {
		arr[i] = x.arr[i];
	}
}

Bag::Bag(const Bag & x){
	sizeArr = x.sizeArr;
	arr = new int[sizeArr];
	for (int i = 0; i < sizeArr; ++i) {
		arr[i] = x.arr[i];
	}
}


// todo
