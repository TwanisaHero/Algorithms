# A03 - Binary Search Tree Delete Method

## Description:
This project extends a basic binary search tree (BST) by implementing a delete method. The deletion process in a BST is more complex than insertion or searching, as it involves multiple cases that must be handled correctly.

When deleting a node in a BST, we consider the following cases:

- **Node has no children (Leaf Node)** – Simply remove the node.
- **Node has one child** – Replace the node with its child.
- **Node has two children** – Replace the node with the in-order successor (smallest node in the right subtree) or in-order predecessor (largest node in the left subtree).

### Additional Considerations:
- If replacing with the in-order successor, ensure the BST properties are maintained.
- Edge cases include deleting the root node or handling a tree with only one node.

## File:
- **main.cpp** – Contains the implementation of the BST delete method and related functions.
