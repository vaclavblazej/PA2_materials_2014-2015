#ifndef __FRONTA__
#define __FRONTA__

template <class T>
struct Elem{
	T value;
	Elem *next;
};

template <class T>
class Fronta{
	Elem<T> *first;
	Elem<T> *last;
public:
	Fronta();
	~Fronta();
	void vloz(T hodnota);
	bool jePrazdna();
	T odeber();
};

template <class T>
Fronta<T>::Fronta(){
	first = new Elem<T>();
	last = first;
}

template <class T>
Fronta<T>::~Fronta(){
	while(!jePrazdna()){
		odeber();
	}
	delete first;
}

template <class T>
void Fronta<T>::vloz(T cislo){
	last->next = new Elem<T>();
	last->value = cislo;
	last = last->next;
}

template <class T>
bool Fronta<T>::jePrazdna(){
	return last == first;
}

template <class T>
T Fronta<T>::odeber(){
	Elem<T> * tmp = first;
	first = first->next;
	T value = tmp->value;
	delete tmp;
	return value;
}
#endif /* __FRONTA__ */
