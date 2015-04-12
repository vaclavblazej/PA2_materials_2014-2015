#include <iostream>
using namespace std;

#include "animal.h"
#include "catdog.h"

int main() {
	Animal * animal = new CatDog();
	std::cout << animal->sound() << std::endl;
	delete animal;
	
	return 0;
}

