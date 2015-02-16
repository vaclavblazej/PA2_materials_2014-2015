/* prog1-8.cpp */

/* blbustky s typem bool */

/*
Jak se zjisti, kterou fci zavolat, kdyz je pretizena:
1. přesná shoda typů
2. shoda typů po roztažení (promotion)
[signed, unsigned] char, short, enum, bool -> int
float -> double
3. shoda typů po standardní konverzi
int -> float
float -> int
int -> unsigned
...
int -> long
4. shoda typů po uživatelské konverzi (viz později)

pokud neni shoda, prejde se na dalsi stupen
pokud je vice jak jedna shoda -> error kompilace
*/

#include <iostream>

using namespace std;

//--------------------------------------------------------------------
#ifdef __1__
void f(float, int){cout << "void f(float, int)" << endl;}
void f(long){cout << "void f(long)" << endl;}
void f(float){cout << "void f(float)" << endl;}
void f(unsigned){cout << "void f(unsigned)" << endl;}
void f(int){cout << "void f(int)" << endl;}
void f(char){cout << "void f(char)" << endl;}

int main() {
	cout << "f(1, 1);       " << " -> "; f(1, 1);
	cout << "f(1.1f);       " << " -> "; f(1.1f);
	cout << "f('a');        " << " -> "; f('a');
	cout << "f(2u);         " << " -> "; f(2u);
	cout << "f(300000000l); " << " -> "; f(300000000l);
	return 0;
}
#define OK
#endif /*__1__*/
//--------------------------------------------------------------------
#ifdef __2__
void f(short, int){cout << "void f(short, int)" << endl;}
void f(int, short){cout << "void f(int, short)" << endl;}
void f(long){cout << "void f(long)" << endl;}
void f(float){cout << "void f(float)" << endl;}
void f(unsigned){cout << "void f(unsigned)" << endl;}
void f(int){cout << "void f(int)" << endl;}

int main() {
	cout << "f(1, 1f);      " << " -> "; f(1, (short)1);
	cout << "f(1, 1);       " << " -> "; f(1, 1);
	cout << "f(1.1);        " << " -> "; f(1.1);
	cout << "f('a');        " << " -> "; f('a');
	cout << "f(2u);         " << " -> "; f(2u);
	cout << "f(300000000000000ll); " << " -> "; f(300000000000000ll);
	return 0;
}
#define OK
#endif /*__2__*/
//--------------------------------------------------------------------

#ifndef OK
int main() {
	cout << "Compile like: g++ -D__X__ prog1-8... where X is 1 or 2" << endl;
	return 0;
}
#endif
