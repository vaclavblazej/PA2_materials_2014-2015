#include <iostream>
using namespace std;
 
int main() {
    int a = 4;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;
    int *********j = &i;
    int **********k = &j;

    cout << a << endl;
    cout << &a << " " << b << endl;

    **********k = 20;

    cout << a << endl;
    cout << &a << " " << b << endl;

    *********k = (int*)20;
    //**********k = 20; // segfault!

    cout << a << endl;
    cout << &a << " " << b << endl;

    return 0;
}