#using a Python list as a queue

class Queue(object):
	"""docstring for Queue"""
	def __init__(self, args):
		#super(Queue, self).__init__()
		self._args = []
		
	def enqueue(self):
		self._args.insert(0, arg)

	def dequeue(self):
		return self._args.pop()

	def is_empty(self):
		return self._args == []

	def size(self):
		return len (self._args)