/*
Task
A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.

Hint: You'll find a queue helpful in completing this challenge.

Function Description
Complete the levelOrder function in the editor below. levelOrder has the following parameter:
- Node pointer root: a reference to the root of the tree

Prints
- Print node.data items as space-separated line of integers. No return value is expected.
*/


#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

class BinarySearchTree {
public:
    Node *root;

    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            root = new Node(data);
            return root;
        }

        if (data <= root->data) {
            if (root->left)
                insert(root->left, data);
            else
                root->left = new Node(data);
        } else {
            if (root->right)
                insert(root->right, data);
            else
                root->right = new Node(data);
        }

        return root;
    }

    void levelOrder(Node* root) {
        if (root == nullptr) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* node = q.front();
            q.pop();
            cout << node->data << " ";

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }
};

int main() {
    BinarySearchTree tree;
    tree.root = nullptr;

    int n, data;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> data;
        tree.root = tree.insert(tree.root, data);
    }

    tree.levelOrder(tree.root);
    return 0;
}

