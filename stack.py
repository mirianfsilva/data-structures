#using a Python list as a Stack

class Stack(object):
	"""docstring for Stack"""
	def __init__(self):
		#super(Stack, self).__init__()
		self._args = []

	def push(self):
		self._args.append(arg)

	def pop(self):
		return self._args.pop()

	def is_empty(self):
		return not bool(self._args)

	def size(self):
		return len(self._args)
		
#---------------------
# alternative push, pop
	def push(self, arg):
		self._args.insert(0,arg)

	def pop(self, arg):
		return self._args.pop(0)	