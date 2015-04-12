#include "catdog.h"

std::string CatDog::sound(){
	return Cat::sound() + Dog::sound();
}
