/*
Task
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, neat. pointing to another node (i.e.: the next node in a list). A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

Note: The head pointer may be null, indicating that the list is empty. Be sure to reset your neat pointer when performing deletions to avoid breaking the list.
*/


import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class Solution {
    public Node removeDuplicates(Node head) {
        Node prev = head;

        while (prev != null) {
            Node next = prev.next;

            if (next != null && prev.data == next.data) {
                prev.next = next.next;
            } else {
                prev = prev.next;
            }
        }

        return head;
    }

    public Node insert(Node head, int data) {
        Node p = new Node(data);
        if (head == null) {
            head = p;
        } else if (head.next == null) {
            head.next = p;
        } else {
            Node start = head;
            while (start.next != null) {
                start = start.next;
            }
            start.next = p;
        }
        return head;
    }

    public void display(Node head) {
        Node start = head;
        while (start != null) {
            System.out.print(start.data + " ");
            start = start.next;
        }
    }

    public static void main(String[] args) {
        Solution mylist = new Solution();
        Node head = null;
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for (int i = 0; i < T; i++) {
            int data = scanner.nextInt();
            head = mylist.insert(head, data);
        }
        head = mylist.removeDuplicates(head);
        mylist.display(head);
        scanner.close();
    }
}