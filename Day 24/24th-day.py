# Task
# A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.

# Hint: You'll find a queue helpful in completing this challenge.

# Function Description
# Complete the levelOrder function in the editor below. levelOrder has the following parameter:
# - Node pointer root: a reference to the root of the tree

# Prints
# - Print node.data items as space-separated line of integers. No return value is expected.


def levelOrder(self, root):
        if root is None:
            return

        queue = [root]

        while queue:
            node = queue.pop(0)
            print(node.data, end=" ")

            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)