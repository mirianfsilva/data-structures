// Mirian F. Silva - Universidade Federal de Minas Gerais (UFMG)

// The type of elements contained in the queue is defined by QueueType. 
//The QueueType value must be set at compile time.

#include "queue.h"
#define QueueType int 

struct Node {
	QueueType key;
	Node* prev;
    Node* next;
};
 
queue::queue() {
    size_= 0;
    end_= new Node;
    end_->next =end_;
    end_->prev =end_;
}
 
bool queue::empty() {
    return size_== 0;
}
 
int queue::size() {
    return size_;
}
 
QueueType queue::front() {
    return end_->next->key;
}
 
QueueType queue::back() {
    return end_->prev->key;
}
 
void queue::push(QueueType k) {
    Node* node= new Node;
    node->key=k;
    node->prev=end_->prev;
    node->next=end_;
    end_->prev->next=node;
    end_->prev = node;
    size_+=1;
}
 
void queue::pop() {
    Node* first = end_->next;
    first->prev->next = first->next;
    first->next->prev = first->prev;
    delete first;
    size_-=1;
}
 
void queue::operator=(queue& q) {
    while (!empty()){
        pop();
    }
    for (Node* i=q.end_->next; i!=q.end_; i= i->next){
        push(i->key);
    }
}
 
queue::~queue() {
    while(!empty()){
        pop();
    }
    delete end_;
}
