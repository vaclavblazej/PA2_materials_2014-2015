// stack.h

#ifndef _STACK_
#define _STACK_

#include <iostream>

class Prvek {
public:
   virtual ~Prvek () { }
   virtual void  print(std::ostream&) const = 0;
   friend std::ostream& operator<<(std::ostream& s, const Prvek& p)
      {p.print(s); return s;}
};

class Stack {
   struct Elem {
      Prvek *hodn;
      Elem  *dalsi;
      Elem(Prvek *h, Elem *d) {hodn = h; dalsi = d;}
   };
   Elem *vrch;
  public:
   Stack()       {vrch = 0;}
   ~Stack();
   void push(Prvek* p);
   Prvek* pop();
   int isEmpty() {return vrch == 0;}
   friend std::ostream& operator<<(std::ostream&, Stack&);
};

#endif