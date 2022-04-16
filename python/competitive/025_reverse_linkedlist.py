public ListNode reverseList(ListNode head) {
    ListNode prev = null;
    ListNode curr = head;
    while (curr != null) {
        ListNode nextTemp = curr.next;
        curr.next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head: 'ListNode') -> 'ListNode':
        new_head = None
        while head:
            tmp = head.next
            head.next = new_head
            new_head = head
            head = tmp
            
        return new_head```


class Solution(object):
    def reverseList(self, head):
        pre = None
        cur = head
        
        while cur:
            # record pointer to the next node 
            # cuz we'll change the pointer of cur node to pre node,
            # but we still want to move forward
            nextTemp = cur.next
            # reverse the pointer of current node to the pre one
            cur.next = pre
            # update pre & cur pointer
            pre = cur
            cur = nextTemp
        
        return pre