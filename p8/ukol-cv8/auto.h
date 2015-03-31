#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
	Auto(string SPZ, int rok):SPZ(SPZ),rok(rok){}
	string getSpz(){return SPZ;}
	int getRok(){return rok;}
	friend ostream & operator<<(ostream & os, const Auto & a){
		os << a.SPZ << " " << a.rok;
		return os;
	}
	virtual void accelerate(){cout << "HELLO AUTO" << endl;};
protected:
	string SPZ;
	int rok;
};

