// Mírian F. Silva - Universidade Federal de Minas Gerais (UFMG)

#include "stack.h"

struct Node {
 	  StackType key; 
  	Node* prev; 
  	Node* next;
};

stack::stack() {
  	size_ = 0;
  	end_ = new Node;
  	end_->next = end_;
  	end_->prev = end_;
}

bool stack::empty() {
  	return size_ == 0;
}

int stack::size() {
  	return size_;
}

StackType stack::top() {
  	return end_->next->key;
}

void stack::push(StackType k) {
  	Node* first = end_->next;
  	Node* node = new Node;
  	node->key = k;
  	node->prev = first->prev;
  	node->next = first;
  
  	first->prev->next = node;
  	first->prev = node;
  	size_++;
}

void stack::pop() {
	Node* first = end_->next;  
	first->prev->next = first->next;
  	first->next->prev = first->prev;
  	delete first;
  	size_--;
}

void stack::operator=(stack& p) {
  	while (!empty()) {
    	pop();
	}
  	for (Node* i = p.end_->prev; i != p.end_; i = i->prev) {
    	push(i->key);
  	}
}

stack::~stack() {
	while (!empty()) {
    	pop();
    }
    delete end_;
}
