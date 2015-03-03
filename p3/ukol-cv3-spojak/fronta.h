#ifndef __FRONTA__
#define __FRONTA__

struct Elem{
	int value;
	Elem *next;
};

class Fronta{
	Elem *first;
	Elem *last;
public:
	Fronta();
	~Fronta();
	void vloz(int cislo);
	bool jePrazdna();
	int odeber();
};

#endif /* __FRONTA__ */