#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "array.h"

/*		empty(init) = true
		empty(add(q,x)) = false
		front(init) = error
		front(add(init,x)) = x
		front(add(q,x))) = front(q) (pro q != init)
		remove(init) = init
		remove(add(init,x)) = init
		remove(add(q,x))) = add(remove(q),x) (pro q != init)
*/
template <class Elem>
class Queue{
public:
	Queue();           // init: -> Queue
	bool empty();      // empty(_): Queue -> bool
	Queue<Elem> & add(Elem e);     // add(_,_): Queue,Elem -> Queue (vložení na konec fronty)
	Elem front();      // front(_): Queue -> Elem (hodnota na čele fronty)
	Queue<Elem> & remove();  // remove(_): Queue -> Queue (odebrání prvku na čele)
private:
	// implement via linked list
	// implement using Array
};

#endif /* __QUEUE_H__ */
