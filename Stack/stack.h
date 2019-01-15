// Mírian F. Silva - Universidade Federal de Minas Gerais (UFMG)

#ifndef TRUNK_STACK_SRC_STACK_H_
#define TRUNK_STACK_SRC_STACK_H_

#include <string>

struct Node;

class stack {
	  public:
  	stack(); // O(1)

  	// Releases the allocated memory for all elements of the stack in O(n), 
	  //where n is the number of elements in the stack.
  	~stack();

  	bool empty(); // O(1)

  	int size(); // O(1)

	// Returns the element that is at the top of the stack in O(1).
    // precondition: the queue can not be empty.
  	StackType top();

  	// Insert k at the top of the stack in O(1).
  	void push(SType k);

  	void pop(); // remove O(1)

  	// Let the current stack be equal to p in O(n + m), 
	  // where m = p.size () and n is the number of elements in the current stack.
  	void operator=(stack& p);

	  private:
  	int size_;
	  Node* end_;
};

#endif  // TRUNK_STACK_SRC_STACK_H_
