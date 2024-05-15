# Task
# A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, neat. pointing to another node (i.e.: the next node in a list). A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

# Note: The head pointer may be null, indicating that the list is empty. Be sure to reset your neat pointer when performing deletions to avoid breaking the list.


def removeDuplicates(self,head):
    current = head
    while current:
        while current.next and current.data == current.next.data:
            current.next = current.next.next
        current = current.next
    return head