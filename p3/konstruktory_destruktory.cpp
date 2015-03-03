/* p3-init.cpp */

/*
Tento priklad demonstruje volani konstruktoru a destruktoru. Vsechny metody objektu
jsou implementovany primo v jejich definici, coz je obecne spatny napad, ale pro
jednoduchy priklad je to jedno. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Int {
  int i;
public:
  Int(int ii=0)  { i = ii; cout << "constr Int " << i << endl; }
  ~Int() { cout << "destr Int " << i << endl; }
  int get() { return i; }
  void set(int ii) { i = ii; }
  // tato metoda nam umozni zavolat: Int * a = new Int(42); cout << a << endl;
  friend ostream& operator<<(ostream& os, const Int& in) {
    os << in.i;
    return os;
  }
};


// explicitni volani konstruktoru polozek pred definici konstruktoru (: ,)
class T {
  // vnitrni trida S tridy T
  class S {
    Int si;
  public:
    S(int kk=0) : si(kk) { cout << "constr S " << si << endl; }
    ~S() { cout << "destr S " << si << endl; }
    friend ostream& operator<<(ostream& os, const S& is) {
      os << is.si;
      return os;
    }
  };
public:
  T(int ii=0) : tj(ii), tsj(ii) { cout << "constr T " << tj << tsj << endl; }
  ~T() { cout<< "destr T " << tj << tsj << endl; }
private:
  Int tj;
  S tsj;
};

class Pole {
  Int *p;
  int cnt;
public:
  Pole(unsigned icnt) { cnt=icnt; p= new Int[cnt]; }
  ~Pole() { delete [] p; }
  void set(int ii) { for (int i=0; i<cnt; i++) p[i].set(ii); }
  friend ostream& operator<<(ostream& os, const Pole& ip) {
    os<<&ip<<"  ";
    for (int i=0; i<ip.cnt; i++) os<<ip.p[i]<<" ";
    return os;
  }
};

class IPole {
  int *p;
  int cnt;
public:
  IPole(unsigned icnt) { cnt=icnt; p= new int[cnt]; }
  ~IPole() { delete [] p; }
  void set(int ii) { for (int i=0; i<cnt; i++) p[i]=ii; }
  friend ostream& operator<<(ostream& os, const IPole& ip) {
    os<<&ip<<"  ";
    for (int i=0; i<ip.cnt; i++) os<<ip.p[i]<<" ";
    return os;
  }
};

void f(void) {
  Pole a(4);     // vola se konstruktor Int - inicializuje se Int()
  cout << a << endl;
  a.set(234);
  cout << a << endl;
}

void g(void) {
  IPole a(4);   // zadny konstruktor int() neex. - neni inicializace
  cout << a << endl;
  a.set(987);
  cout << a << endl;
}

// globalni se konstruuje prvni
T u = 765;

int main(void) {
/////////////////////////////////////////////////////////////////////////////////////
  /* prvni se konstruuje globalni promenna T, te se vytvori privatni
   * objekt Int a objekt S - ktery ma v sobe dalsi objekt Int
   */
  // ruzne inicializace typu objektu typu T
  cout << "************* 789 ***********" << endl;
  T w = 789;
  /* dostavame stejny vypis jako u globalni promenne
   * - jde o ten samy objekt, a tak se vytvari stejne
   */
  cout << "********** 20  20 ***********" << endl;
  T x[2] = 20;
  /* opet uplne stejne jako minule - vytvari se dva obekty T, a to postupne
   * hnedka po sobe, oba s hodnotou 20
   */
  cout << "**********123 456 ***********" << endl;
  T y[2] = { 123, 456 };
  /* zase stejne jako minule, pro prvni nastavujeme hodnotu 123 a pro druhy 456
   */
  cout << "**********  0   0 ***********" << endl;
  T z[2];
  /* nekdo tady rad tvori pole delky 2 ... hmm, nyni se pouzije defaultni
   * konstruktor - to T() - ten je v T definovan jako T(int ii=0) = T() [kde ii=0]
   * takze kdyz zavolame T() je to jako kdybychom zavolali T(0)
   */
  cout << endl;

/////////////////////////////////////////////////////////////////////////////////////
  /* V tomto priklade se ukazuje jak dopadne volani stejne fce 2x po sobe
   */
  // inicializace pole int-u pro Int - OK
  /* Ve volani f se pouziva objekt ktery obsahuje pole objektu
   * tyto objekty se pri vytvoreni Pole inicializuji defaultnim konstruktorem,
   * a proto jsou nastaveny na 0
   */
  cout << "********* Int f() ***********" << endl;
  f();
  /* Druhe volani probehne uplne stejne
   */
  cout << "********* Int f() ***********" << endl;
  f();

  // inicializace pole int-u pro int - neinicializuje  
  /* Ve volani funkce g se vytvari objekt IPole, objekt obsahujici normalni pole ... tj
   * new int[X] - toto pole nema vlastni konstruktor a NENASTAVUJI SE MU HODNOTY PRI VYTVORENI
   * takze nase nove pole 'p' je naplneno BORDELEM Z PAMETI - to co bylo v pameti pred jeho
   * vytvorenim tam zustalo - proto mame ve vypisu nesmyslne hodnoty
   * (vsimete si ze ten bordel je z volani f() - 4 je delka pole, 0 nevim, nakonec jsou hodnoty)
   */
  cout << "********* int g() ***********" << endl;
  g();
  /* Uplne stejne jako v minulem volani g(), ale tentokrat je ten bordel v pameto to, co jsme
   * tam posledne nastavili
   */
  cout << "********* int g() ***********" << endl;
  g();
  /* Co se stane, kdyz mezi takovymy volanimi vytvorime a znicime promennou?
   * Misto (kde ted pole neni, ale bezne tam je) bude pouzito pro novou promennou.
   * To co v poli v dalsim volani g() najdeme jsou zbytky po uvolnene promenne.
   */
  cout << "********* int g() ***********" << endl;
  delete (new Int(42));
  g();
/////////////////////////////////////////////////////////////////////////////////////
  cout << "********* DESTRUKTORY ***********" << endl;
  //system("pause");
  return 0;
}
