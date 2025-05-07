# A03 – Binary Search Tree: Delete Method

**Author:** Antwan Taylor  
**Date:** February 2025  

---

## 📝 Description  
This project extends a basic Binary Search Tree (BST) by implementing a **delete method**. Deletion in a BST involves multiple cases that must be handled carefully to preserve tree properties:

### 📌 Deletion Cases
- **Leaf Node (no children):**  
  Simply remove the node.
  
- **One Child:**  
  Replace the node with its child.
  
- **Two Children:**  
  Replace the node with the **in-order successor** (smallest node in the right subtree) or **in-order predecessor** (largest node in the left subtree).

> ⚠️ **Important:** When replacing with the in-order successor or predecessor, ensure the BST structure remains valid.

### 🔄 Edge Cases
- Deleting the **root node**.
- Deleting from a **tree with only one node**.

---

## 📁 Files

| # | File Name     | Description                                           |
|:-:|---------------|-------------------------------------------------------|
| 1 | [`main.cpp`](./main.cpp) | Implements the BST delete method and related logic.  |

---

## 📚 Prerequisites
- Basic knowledge of **Binary Search Trees (BST)**.
- A working **C++ compiler** (e.g., `g++`).

---

## ⚙️ Instructions

| Step | Action                  | Command                                |
|:----:|-------------------------|----------------------------------------|
| 1    | Compile the program     | `g++ main.cpp -o bst_delete`           |
| 2    | Run the program         | `./bst_delete`                         |
| 3    | Test deletion cases     | Provide input cases and observe output |

---

## 🔄 Program Flow

1. A BST is created with initial nodes.
2. The user selects a node to delete.
3. The program determines the correct deletion strategy.
4. The tree structure is updated and printed to show the result.
