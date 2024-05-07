/*
A Node class is provided for you in the editor. A Node object has an integer data field. data. and a Node instance pointer, nezt. pointing to another node (i.e.: the next node in the list).

A Node insert function is also declared in your editor. It has two parameters: a pointer. head. pointing to the first node of a linked list, and an integer, data. that must be added to the end of the list as a new Node object.

Task
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node is added. return the reference to the head node.

Note: The head argument is null for an empty list.

Input Format
The first line contains T. the number of elements to insert. Each of the next T lines contains an integer to insert at the end of the list.

Output Format
Return a reference to the head node of the linked list.
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    getline(cin, S);
    try {
        cout << to_string(stoi(S)) << endl;
    } catch (const invalid_argument& e) {
        cout << "Bad String" << endl;
    } catch (const out_of_range& e) {
        cout << "Bad String" << endl;
    }
    return 0;
}

