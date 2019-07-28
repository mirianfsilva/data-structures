"""
The basic building block for the linked list implementation is the node. 
Each node object must hold at least two pieces of information. First, the
node must contain the list item itself. We will call this the data field 
of the node. In addition, each node must hold a reference to the next node. 
"""

class Node(object):
	"""docstring for Node"""
	def __init__(self, value):
		#super(Node, self).__init__()
		self.value = value
		self.next = None


class UnorderedList(object):
	"""docstring for UnorderedList"""
	def __init__(self):
		#super(UnorderedList, self).__init__()
		self.head = None

	def is_empty(self):
		return self.head is None

	def add(self, arg):
		temp = Node(arg)
		temp.next = self.head
		self.head = temp


	def size(self):
		current = self.head
		count = 0
		while current is not None:
			count = count + 1
			current = current.next
		return count

	def search(self, arg):
		current = self.head

		while current is not None:
			if current.value == arg:
				return True

			current = current.next

		return False
		
