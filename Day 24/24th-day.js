/*
Task
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, neat. pointing to another node (i.e.: the next node in a list). A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

Note: The head pointer may be null, indicating that the list is empty. Be sure to reset your neat pointer when performing deletions to avoid breaking the list.
*/



this.removeDuplicates=function(head){
  
  let prev = head;
  
  while(prev){
    let next = prev.next;
      
    if(next && prev.data == next.data){
    prev.next = next.next
    }
    else{
    prev = prev.next;
    }
  }     

  return head;
}