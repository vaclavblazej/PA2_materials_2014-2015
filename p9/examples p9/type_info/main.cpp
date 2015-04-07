#include <cstdlib>
#include <iostream>
#include <typeinfo>

using namespace std;

struct Base {};
struct Derived: Base {};
struct PolyBase {virtual void Member(){}};
struct PolyDerived: PolyBase {};

int main(int argc, char *argv[])
{  int i;
   int *pi;
    cout<<"int is: "<<typeid(int).name()<<endl;
    cout<<"i   is: "<<typeid(i).name()<<endl;
    cout<<"pi  is: "<<typeid(pi).name()<<endl;
    cout<<"*pi is: "<<typeid(*pi).name()<<endl<<endl;

    Derived derived;
    Base* pbase =&derived;
    cout<<"*derived is: "<<typeid(derived).name()<<endl;
    cout<<"*pbase   is: "<<typeid(*pbase).name()<<endl;
    cout<<boolalpha<<"same type? "
          <<(typeid(derived)==typeid(*pbase))<<endl<<endl;

    PolyDerived polyderived;
    PolyBase* ppolybase =&polyderived;
    cout<<"*polyderived is: "<<typeid(polyderived).name()<<endl;
    cout<<"*ppolybase   is: "<<typeid(*ppolybase).name()<<endl;
    cout<<boolalpha<<"same type? "
          <<(typeid(polyderived)==typeid(*ppolybase))<<endl<<endl;

    //system("PAUSE");
    return EXIT_SUCCESS;
}
