#include <iostream>

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
  g(x); cout << "konec f" << endl;
}
  
int main() {
  Demo d('c');
  f(-1);
  cout << "konec main" << endl; return 0;
}
