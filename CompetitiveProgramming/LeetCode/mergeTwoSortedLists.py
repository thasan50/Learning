from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        temp = head
        curr1 = list1
        curr2 = list2
        while curr1 and curr2:
            if curr1.val < curr2.val:
                temp.next = curr1
                curr1 = curr1.next
            else:
                temp.next = curr2
                curr2 = curr2.next
            temp = temp.next
        if curr1:
            temp.next = curr1
        else:
            temp.next = curr2
        return head.next



        # Stuff below was my attempt, running into some ListNode errors? But the stuff above is basically what I was doing. So I guess the lesson to take away is to use pointers to the given linked lists rather than modify the nodes directly, and have a dummy node for the head. Don't try to get fancy with starting from the first node of list1 or list2.
        # if list1.val <= list2.val:
        #     list3 = ListNode(list1.val)
        #     list1 = list1.next
        # else:
        #     list3 = ListNode(list2.val)
        #     list2 = list2.next
        # head = list3
        # while list1 or list2:
        #     if not list1:
        #         list3.next = ListNode(list2.val)
        #         list2 = list2.next
        #     elif not list2:
        #         list3.next = ListNode(list1.val)
        #         list1 = list1.next
        #     else:
        #         if list1.val <= list2.val:
        #             list3.next = ListNode(list1.val)
        #             list1 = list1.next
        #         else:
        #             list3.next = ListNode(list2.val)
        #             list2 = list2.next
        #     list3 = list3.next
        # return head



            
        # So the idea is that I'd exist on two linked lists, and I'd progress in one if the value of my node is less than or equal to the node in the other linked list.
        