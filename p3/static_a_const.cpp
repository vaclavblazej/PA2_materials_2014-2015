/* static.cpp */
#include <cstdlib>
#include <iostream>

using namespace std;

class T {
    int a;
    static int pocet;
   public:
    T(int x) { a=x; pocet++; }
    ~T() { pocet--; }
    void print()       { cout << a <<endl; }
    int get_a() const  { return a; }
    static int kolik() { return pocet; }
  };

int T::pocet=-20;

int main() {
   const T x = 1; // konstantni objekt ma pristupne pouze konstantni metody
   cout << "kolik: " << T::kolik() << endl;
   cout << x.get_a() << endl;
   //x.print();  // chyba - neni const
}


