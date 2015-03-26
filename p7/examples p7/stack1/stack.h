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
*/

template <class Elem>
class Stack {
public:
  Stack() {vrch = 0;}
  ~Stack();
  bool empty() const {return vrch==0;}
  void push(const Elem& x) {vrch = new Item(x, vrch);}
  Elem top() const;
  void pop();
private:
  struct Item {
    Elem value;
    Item* next;
    Item(Elem e, Item* n) : value(e), next(n) {}
  };
  Item* vrch;
};

template <class Elem>
Elem Stack<Elem>::top() const {
  if (empty()) throw "zasobnik je prazdny";
  return vrch->value;
}

template <class Elem>
void Stack<Elem>::pop() {
  if (empty()) return;
  Item* p = vrch;
  vrch = vrch->next;
  delete p;
}

template <class Elem>
Stack<Elem>::~Stack() {
  Item* p;
  while (vrch) {
    p=vrch;
    vrch=vrch->next;
    delete p;
  }
}

#endif 
