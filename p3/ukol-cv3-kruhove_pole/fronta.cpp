#include "fronta.h"

Fronta::Fronta(){
	size = 10;
	array = new int[size];
	count = last = first = 0;
}

Fronta::~Fronta(){
	delete [] array;
}

void Fronta::vloz(int cislo){
	if(count == size){
		size *= 2;
		int * novePole = new int[size];
		int index = 0;
		int tmpCount = count;
		while(!jePrazdna()){
			novePole[index++] = odeber();
		}
		first = 0;
		count = tmpCount;
		last = tmpCount;
		delete []array;
		array = novePole;
	}
	count++;
	array[last++] = cislo;
	if(last == size) last = 0;
}

bool Fronta::jePrazdna(){
	return count == 0;
}

int Fronta::odeber(){
	count--;
	int val = array[first++];
	if(first == size) first = 0;
	return val;
}
