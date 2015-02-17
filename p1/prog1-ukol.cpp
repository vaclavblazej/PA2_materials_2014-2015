#include <iostream>
#include <algorithm>

using namespace std;

int comp (const void * elem1, const void * elem2) 
{
    return *((int*)elem1) - *((int*)elem2);
}

void ctiPole(size_t &delka, int *& pole){
	int i;
	cin >> delka;
	pole = new int[delka];
	for (i = 0; i < delka; ++i)
	{
		cin >> pole[i];
	}
	return;
}

void seradPole(size_t delka, int *& pole){
	sort(pole, pole + delka);
}

void vypisPole(size_t delka, int *pole){
	int i;
	for (i = 0; i < delka; ++i)
	{
		if(i != 0) cout << ", ";
		cout << pole[i];
	}
	cout << endl;
}

int main(){
	size_t delka;
	int * pole;
	ctiPole(delka, pole);
	vypisPole(delka, pole);
	seradPole(delka, pole);
	vypisPole(delka, pole);
	delete []pole;
}