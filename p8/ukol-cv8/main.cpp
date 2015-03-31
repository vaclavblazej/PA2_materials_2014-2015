#include <iostream>
using namespace std;
#include "osobni.h"

int main() {
	Auto *mafie = new Osobni("1H5-4755", 1993, 4);
	cout << *mafie << endl;
	mafie->accelerate();
	delete mafie;
}

