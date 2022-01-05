class ListNode:
    def __init__(self, val, next):
        self.val = val 
        self.next = next

def addTwoNumbers(l1: ListNode, l2: ListNode):
    if l1 == None:
        return l2
    if l2 == None:
        return l1
    
