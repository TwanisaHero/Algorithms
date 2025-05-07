# A03 – Binary Search Tree: Delete Method

**Author:** Antwan Taylor  
**Date:** February 2025  

## Description  
This project adds a **delete method** to a Binary Search Tree (BST), expanding on the code developed in class. Deleting a node from a BST is more complex than insertion or searching because it requires handling several distinct cases while preserving the BST property.

## Deletion Cases

- **Case 1: Leaf Node (No Children)**  
  - *Example:* Delete `5` from this tree:  
    ```
        10
       /  \
      5    15
    ```
    Result:  
    ```
        10
          \
          15
    ```

- **Case 2: Node with One Child**  
  - *Example:* Delete `5` from this tree:  
    ```
        10
       /
      5
       \
        6
    ```
    Result:  
    ```
        10
       /
      6
    ```

- **Case 3: Node with Two Children**  
  - *Example:* Delete `10` from this tree:  
    ```
        10
       /  \
      5    15
           /
         12
    ```
    Replace `10` with in-order successor (`12`):  
    ```
        12
       /  \
      5    15
    ```



## Files

| # | File Name     | Description                                           |
|:-:|---------------|-------------------------------------------------------|
| 1 | [`main.cpp`](./main.cpp) | Implements the BST delete method with all edge cases handled. |

## Prerequisites

- Familiarity with Binary Search Trees
- Working C++ compiler (`g++` or similar)

## Instructions

| Step | Action                  | Command                                |
|:----:|-------------------------|----------------------------------------|
| 1    | Navigate to A03 folder  | `cd assignments/A03`                   |
| 2    | Compile the program     | `g++ main.cpp -o bst_delete`           |
| 3    | Run the program         | `./bst_delete`                         |
| 4    | Test delete operations  | Enter different keys to remove from tree |
