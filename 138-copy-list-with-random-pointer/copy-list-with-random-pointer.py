"""
# Definition for a Node.
class Node:
    def __init__(self, x, next=None, random=None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution(object):
    def copyRandomList(self, head):
        """
        :type head: Node
        :rtype: Node
        """
        temp = head
        dict1 = {}

        while temp:
            copy = Node(temp.val)
            dict1[temp] = copy
            temp = temp.next

        temp = head

        while temp:
            copy = dict1.get(temp)
            copy.next = dict1.get(temp.next)
            copy.random = dict1.get(temp.random)
            temp = temp.next

        return dict1.get(head)

        