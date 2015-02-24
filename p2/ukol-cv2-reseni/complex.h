#ifndef __COMPLEX__
#define __COMPLEX__

class Complex{
private:
  int real;
  int imag;
public:
  Complex();
  Complex(const Complex &x);
  Complex(int real, int imag);
  void print()const;
  float abs()const ;
  void add(const Complex x);
  void diff(const Complex x);
};

Complex add(const Complex x, const Complex y);
Complex diff(const Complex x, const Complex y);

#endif /*__COMPLEX__*/
