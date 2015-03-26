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

implementace pomoci spojoveho seznamu
pop a top spojeny do jedine metody pop
*/

template <class Elem>
class Stack {
public:
  Stack() {top = 0;}
  ~Stack();
  bool empty() const {return top==0;}
  void push(const Elem& x) {top = new Item(x, top);}
  Elem pop();
private:
  struct Item {
    Elem value;
    Item* next;
    Item(Elem e, Item* n) : value(e), next(n) {}
  };
  Item* top;
};

template <class Elem>
Elem Stack<Elem>::pop() {
  if (empty()) throw "zasobnik je prazdny";
  Elem res = top->value;
  Item* p = top;
  top = top->next;
  delete p;
  return res;
}

template <class Elem>
Stack<Elem>::~Stack() {
  Item* p;
  while (top) {
    p=top;
    top=top->next;
    delete p;
  }
}
  
#endif