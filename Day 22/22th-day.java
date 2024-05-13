/*
Task
The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer, root, pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.

Input Format

The locked stub code in your editor reads the following inputs and assembles them into a binary search tree:
The first line contains an integer, n, denoting the number of nodes in the tree.
Each of the  subsequent lines contains an integer, data, denoting the value of an element that must be added to the BST.

Output Format

The locked stub code in your editor will print the integer returned by your getHeight function denoting the height of the BST.
*/


import java.io.*;
import java.util.*;

// Node class definition
class Node {
    int data;
    Node left;
    Node right;
    
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}

class BinarySearchTree {
    Node root;

    Node insert(Node root, int data) {
        if (root == null) {
            this.root = new Node(data);
            return this.root;
        }

        if (data <= root.data) {
            if (root.left != null) {
                insert(root.left, data);
            } else {
                root.left = new Node(data);
            }
        } else {
            if (root.right != null) {
                insert(root.right, data);
            } else {
                root.right = new Node(data);
            }
        }

        return this.root;
    }

    int getHeight(Node root) {
        if (root == null) return -1;
        return Math.max(getHeight(root.left), getHeight(root.right)) + 1;
    }
}

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BinarySearchTree tree = new BinarySearchTree();
        Node root = null;
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int data = scanner.nextInt();
            root = tree.insert(root, data);
        }
        System.out.println(tree.getHeight(root));
        scanner.close();
    }
}


