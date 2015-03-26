// stack.h

#ifndef _STACK_
#define _STACK_

/*
Signatura:
init: ->Stack
empty(_): Stack -> bool
push(_,_): Stack,Elem ->Stack
top(_): Stack -> Elem
pop(_): Stack -> Stack

implementace pomoci rozsiritelneho pole
*/

#include "array.h"

template <class Elem>
class Stack {
public:
  Stack();
  bool empty() const {return vrch<0;}
  void push(const Elem& x);
  Elem top() const;
  void pop();
private:
  Array<Elem> pole;
  int vrch;
};

template <class Elem>
Stack<Elem>::Stack() {
  vrch = -1;
}

template <class Elem>
Elem Stack<Elem>::top() const {
  if (empty()) throw "zasobnik je prazdny";
  return pole[vrch];
}

template <class Elem>
void Stack<Elem>::pop() {
  if (empty()) return;
  vrch--;
}

template <class Elem>
void Stack<Elem>::push(const Elem& x) {
  if (vrch>=pole.length()-1) 
    pole.extend(2*pole.length());
  pole[++vrch] = x;
}

#endif 
