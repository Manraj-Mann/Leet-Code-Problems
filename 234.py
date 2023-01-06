# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):

    l = ListNode()
    def check(self , head):
        if head == None:
            return True
        res = self.check(head.next) and (head.val == self.l.val)
        self.l = self.l.next
        return res

    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        self.l = head
        return self.check(head)

