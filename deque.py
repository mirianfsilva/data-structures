"""
A deque, also known as a double-ended queue, is an ordered collection of items similar to the queue. 
It has two ends, a front and a rear, and the items remain positioned in the collection. What makes 
a deque different is the unrestrictive nature of adding and removing items. New items can be added 
at either the front or the rear.

-- Implementation of a deque using a Python list
"""

class Deque(object):
	"""docstring for Deque"""
	def __init__(self, arg):
		self._arg = []

	#O(1)
	def add_front(self, item):
		self._arg.append(item)

	#O(n)
	def add_rear(self, item):
		self._arg.insert(0, item)

	#O(1)
	def remove_front(self):
		return self._arg.pop()

	#O(n)
	def remove_rear(self):
		return self._arg.pop(0)

	def is_empty(self):
		self._arg == []

	def size(self):
		return len (self._arg)