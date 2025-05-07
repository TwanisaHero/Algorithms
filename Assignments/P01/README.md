# P01 – Red-Black Trees Presentation  
**Authors:** Aniah Myles & Antwan Taylor  
**Date:** March 2025  

## Description  
This project covers Red-Black Trees — a type of self-balancing binary search tree used in many real-world applications for efficient data storage and retrieval. This README serves as the foundation for our presentation and includes summarized information, citations, and exam materials.

## What is a Red-Black Tree?  
A Red-Black Tree is a binary search tree with an added color property for each node (red or black). It ensures that the tree remains approximately balanced during insertions and deletions. This results in **O(log n)** time for **search**, **insert**, and **delete** operations.

## Key Properties  
- **Node Color**: Each node is either red or black.  
- **Root Property**: The root node is always black.  
- **Red Property**: Red nodes cannot have red children (no two consecutive reds).  
- **Black Property**: Every path from a node to its descendant NIL nodes contains the same number of black nodes.  
- **Leaf Property**: All leaves (NIL nodes) are black.  

## Why Red-Black Trees?  
- They prevent unbalanced trees which can degrade performance.  
- Maintains tree height at O(log n), ensuring fast operations.  
- Better suited for frequent insertions and deletions than AVL Trees.  
- Widely used in libraries like **Java TreeMap**, **C++ STL map/set**, and even the **Linux kernel**.

## Basic Operations  
- **Insertion**: Performed like BST insertion, followed by re-coloring and rotations to maintain balance.  
- **Deletion**: Standard BST deletion, but extra steps are required if a black node is removed.  
- **Search**: Same as standard BST; starts at root and follows left or right depending on value comparison.  
- **Rotation**: Left and right rotations restructure the tree to preserve Red-Black properties.

## Real-World Applications  
- Java's `TreeMap` and `TreeSet`  
- C++ Standard Template Library (STL) `map` and `set`  
- Linux kernel process/memory management  
- Networking (e.g., IP address mapping, firewall rules)

## Time Complexity  
- **Search**: O(log n)  
- **Insertion**: O(log n)  
- **Deletion**: O(log n)  


## 🧪 Exam Questions  

### Multiple Choice  
1. What color must the root node of a Red-Black Tree always be?  
   A. Red  
   B. Black  
   C. White  
   **Answer: B**

2. Which of the following operations can violate Red-Black Tree properties and require rebalancing?  
   A. Search  
   B. Insertion  
   C. Printing  
   **Answer: B**

3. What is the time complexity for insertion in a Red-Black Tree?  
   A. O(n)  
   B. O(log n)  
   C. O(1)  
   **Answer: B**

### Fill in the Blank  
1. In a Red-Black Tree, no two _______ nodes can appear consecutively on any path.  
   **Answer: red**  

2. Every path from a node to its descendant leaves must contain the same number of _______ nodes.  
   **Answer: black**

---

## 📄 Handout Summary  

**Red-Black Tree Highlights:**  
- Self-balancing BST  
- Each node has a color (red or black)  
- Ensures O(log n) height for efficiency  
- Properties include root being black, red nodes having black children, and uniform black height  
- Used in STL, Java, OS kernels, and networks

**Quick Rules:**  
- After insertion, check for red-red violation  
- After deletion of a black node, fix double black issues  
- Use rotations (left or right) to maintain structure  

---

## 📚 Works Cited  
- https://www.geeksforgeeks.org/introduction-to-red-black-tree/  
- https://www.youtube.com/watch?v=qvZGUFHWChY  
- https://www.youtube.com/watch?v=95s3ndZRGbk  
- https://www.youtube.com/watch?v=lU99loSvD8s  


