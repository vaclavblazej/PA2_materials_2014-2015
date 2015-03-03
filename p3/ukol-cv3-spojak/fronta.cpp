#include "fronta.h"

Fronta::Fronta(){
	first = new Elem();
	last = first;
}

Fronta::~Fronta(){
	while(!jePrazdna()){
		odeber();
	}
	delete first;
}

void Fronta::vloz(int cislo){
	last->next = new Elem();
	last->value = cislo;
	last = last->next;
}

bool Fronta::jePrazdna(){
	return last == first;
}

int Fronta::odeber(){
	Elem * tmp = first;
	first = first->next;
	int value = tmp->value;
	delete tmp;
	return value;
}
