#ifndef __FRONTA__
#define __FRONTA__

class Fronta{
	int *array;
	int first;
	int last;
	int size;//velikost pole
	int count;//pocet prvku
public:
	Fronta();
	~Fronta();
	void vloz(int cislo);
	bool jePrazdna();
	int odeber();
};

#endif /* __FRONTA__ */