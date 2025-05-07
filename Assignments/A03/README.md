# A03 - Binary Search Tree Delete Method  

## Author: Antwan Taylor  
## Date: February 2025  

### Description  
This project extends a basic binary search tree (BST) by implementing a delete method. The deletion process in a BST is more complex than insertion or searching, as it involves multiple cases that must be handled correctly.  

When deleting a node in a BST, we consider the following cases:  

- **Node has no children (Leaf Node)** – Simply remove the node.  
- **Node has one child** – Replace the node with its child.  
- **Node has two children** – Replace the node with the in-order successor (smallest node in the right subtree) or in-order predecessor (largest node in the left subtree).  

### Additional Considerations:  
- If replacing with the in-order successor, ensure the BST properties are maintained.  
- Edge cases include deleting the root node or handling a tree with only one node.  

### Files  

|   #   | File        | Description                                      |
| :---: | ---------- | ------------------------------------------------ |
|   1   | `main.cpp` | Implements the BST delete method and related functions. |

### Prerequisites:  
- Basic understanding of binary search trees (BST).  
- A C++ compiler (such as `g++`).  

### Instructions  

| Step | Action                           | Command/Format                         |
| ---- | -------------------------------- | -------------------------------------- |
| 1    | **Compile the program**          | `g++ main.cpp -o bst_delete`          |
| 2    | **Run the program**              | `./bst_delete`                         |
| 3    | **Test deletion cases**          | Provide input cases and observe output. |

### Program Flow  

- The BST is created with initial nodes.  
- The user selects a node to delete.  
- The program handles deletion based on the three main cases.  
- The BST structure is updated and displayed.  
