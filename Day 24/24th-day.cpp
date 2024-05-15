/*
Task
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, neat. pointing to another node (i.e.: the next node in a list). A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

Note: The head pointer may be null, indicating that the list is empty. Be sure to reset your neat pointer when performing deletions to avoid breaking the list.
*/


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        Node* prev = head;
        
        while (prev) {
            Node* next = prev->next;
            
            if (next && prev->data == next->data) {
                prev->next = next->next;
                delete next;
            } else {
                prev = prev->next;
            }
        }     
 
        return head;
    }

    Node* insert(Node* head, int data) {
        Node* p = new Node(data);
        if (head == nullptr) {
            head = p;
        } else if (head->next == nullptr) {
            head->next = p;
        } else {
            Node* start = head;
            while (start->next != nullptr) {
                start = start->next;
            }
            start->next = p;
        }
        return head;
    }

    void display(Node* head) {
        Node* start = head;
        while (start) {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main() {
    Solution mylist;
    Node* head = nullptr;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int data;
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);
    mylist.display(head);
    return 0;
}

