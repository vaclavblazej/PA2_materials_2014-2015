#include <iostream>
using namespace std;
#include "osobni.h"

int main() {
	Auto **cars = new Auto*[5];
	cars[0] = new Auto("2H9-4741", 1992);
	cars[1] = new Osobni("6H2-6581", 1989, 4);
	cars[2] = new Auto("3U7-7741", 2000);
	cars[3] = new Osobni("1H5-4755", 1993, 4);
	cars[4] = new Osobni("2A2-3269", 2004, 6);
	cout << "cout << auto;\n";
	for (int i = 0; i < 5; i++) {
		cout << *cars[i] << endl;
	}
	cout << endl;
	cout << "auto.print(cout)\n";
	for (int i = 0; i < 5; i++) {
		cars[i]->prints(cout);
		cout << endl;
	}
	cout << endl;
	cout << "virtual auto.print(cout);\n";
	for (int i = 0; i < 5; i++) {
		cars[i]->printv(cout);
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		delete cars[i];
	}
	delete [] cars;
}

