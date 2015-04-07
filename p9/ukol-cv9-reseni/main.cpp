#include <iostream>
#include <vector>
#include <map>
using namespace std;

#include "firma.h"
#include "urednik.h"
#include "delnik.h"

int main()
{
	Firma firma("FIT CORPORATION s.r.o.");
	firma.add(new Urednik("John", "Smith", 19000));
	firma.add(new Delnik("Miko", "Steven", 100, 80));
	firma.add(new Urednik("Samantha", "Johnes", 30000));
	cout << firma << endl;
	return 0;
}

