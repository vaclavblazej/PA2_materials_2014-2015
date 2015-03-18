#include <iostream>
#include <cstdlib>

using namespace std;

class Demo {
    char znak;
  public:
    Demo(char z) : znak(z) {}
    ~Demo() {cout << "destr " << znak << endl;}
 };
void g(int x) {
  Demo d('a');
  cout << "g(" << x << ")\n";
  if (x<0) throw "nedovoleny parametr";
  cout << "g O.K.\n";
}
  
void f(int x) {
  Demo d('b');
  cout << "f(" << x << ")\n";
  try {
    g(x);
    cout << "konec f" << endl;
  }
  catch (char e) {cout << "catch v f: " << e << endl;}
}
  
int mainx(void) {
  Demo d('c');
  try {
    f(-1);
    cout << "konec try" << endl;
  }
  catch (const char *e) {cout << e << endl;}
  cout << "konec main" << endl;
  return 0;
}  
  
int main(void) {
  int ii=mainx();
  //system("PAUSE");
  return ii;   
}
