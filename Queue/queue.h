#include <string>
#define QueueType int 

// The type of elements contained in the queue is defined by QueueType. The QueueType value must be set at compile time.
struct Node;
class queue {
	public:
  	// Create an empty queue in O(1).
	queue();
 
	// Releases the allocated memory for all elements of the queue in O(n), where n is the number of elements in the queue.
	~queue();
 
	// Tests whether the queue is empty in O(1).
  	bool empty();
 
 	// Return queue size in O(1).
	int size();
 
	// Returns the element that is at the beginning of the queue in O(1).
    // precondition: the queue can not be empty.
    QueueType front();
 
	// Returns the last element of the queue in O(1).
	// precondition: the queue can not be empty.
    QueueType back();
 
	// Insert k at the end of the queue in O(1).
	void push(QueueType k);
 
	// Remove the element that is at beginning of the queue in O(1).
	// precondition: the queue can not be empty.
	void pop();
 
	// Let the current queue be equal to q in O(n + m), where m = q.size () and n is the number of elements in the current queue.
  	void operator=(queue& q);
 
	private:
	int size_;
	Node* end_;
};
