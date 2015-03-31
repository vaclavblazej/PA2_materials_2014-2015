#include <cstdlib>
#include <iostream>

using namespace std;

class T {    
  public:
    //virtual
      void P (void){ cout << "T::P\n"; }
};

class T1 : public T {
};

class T2 : public T1 {
  public:
    //virtual
      void P(void) { cout << "T2::P\n"; }
};

class T3 : public T2 {
};

int main(int argc, char** argv) {
    cout<<"sizeof(T ): "<<sizeof(T)<<endl;
    cout<<"sizeof(T1): "<<sizeof(T1)<<endl;
    cout<<"sizeof(T2): "<<sizeof(T2)<<endl;
    cout<<"sizeof(T3): "<<sizeof(T3)<<endl;
    cout << "   .\n";
  T x;
    x.P();
  T1 x1;
    x1.P();
  T2 x2;
    x2.P();
  T3 x3;
    x3.P();
    cout << "   =\n";
    x = x1; x.P();
    x = x2; x.P();
    x = x3; x.P();
    cout << "   ->\n";
  T *p= &x; // new T;
    p->P();
  T1 *p1= &x1; //new T1;
    p1->P();
  T2 *p2= &x2; //new T2;
    p2->P();
  T3 *p3= &x3; // new T3;
    p3->P();
    cout << "   =\n";
    p = p1; p->P();
    p = p2; p->P();
    p = p3; p->P();
    //system("PAUSE");
    return 0;
}

