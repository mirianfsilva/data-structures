"""
Simulate a situation that requires data to be managed in a FIFO manner.

This game is equivalent of the famous Josephus problem. 
A general simulation of Hot Potato.

To simulate the circle, we will use a queue. 
Assume that the child holding the potato will be at the front of the queue. 
Upon passing the potato, the simulation will simply dequeue and then immediately
enqueue that child, putting her at the end of the line. She will then wait until 
all the others have been at the front before it will be her turn again. After num
dequeue/enqueue operations, the child at the front will be removed permanently and 
another cycle will begin. This process will continue until only one name remains 
(the size of the queue is 1).

"""

from collections import deque

def hot_potato(num, names):
	queue = deque()
	for name in names:
		queue.appendleft(name)

	while len(queue) > 1:
		for _ in range(num):
			queue.appendleft(queue.pop())

		queue.pop()

	return queue.pop()

hot_potato(9, ('Harry','Ron','Hermione','Cedrico','Minerva','Sirius','Fred','Jorge'))

# => Fred