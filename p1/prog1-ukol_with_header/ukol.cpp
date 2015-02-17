#include "funkce.h"

using namespace std;

int main(){
	size_t delka;
	int * pole;
	ctiPole(delka, pole);
	vypisPole(delka, pole);
	seradPole(delka, pole);
	vypisPole(delka, pole);
	delete []pole;
}