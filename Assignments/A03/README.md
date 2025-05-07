# A04 – Hash Table Insertion and Analysis

**Author:** Antwan Taylor  
**Date:** February 2025  

## Description
This assignment explores the behavior of hash tables using both **open hashing (separate chaining)** and **closed hashing (open addressing)**. Simulations and conceptual questions reinforce understanding of collision resolution strategies, hash function design, and performance considerations.

## Part A: Conceptual Questions

### 1. What is a hash table and why is collision resolution necessary?
A hash table is a data structure that maps keys to values using a hash function. Collision resolution is necessary because multiple keys can hash to the same index, leading to conflicts in where data should be stored.

### 2. Differences between open hashing and closed hashing
- **Open Hashing (Separate Chaining):** Each bucket contains a linked list of all entries that hash to the same index. Collisions are stored in chains.
- **Closed Hashing (Open Addressing):** All entries are stored within the table. Collisions are resolved by probing for another open slot.

### 3. Collision Resolution Methods
- **Linear Probing:** Searches linearly for the next open slot.
  - Pros: Simple to implement.
  - Cons: Leads to clustering.
- **Quadratic Probing:** Jumps quadratically (e.g., +1², +2², ...) to resolve collisions.
  - Pros: Reduces clustering.
  - Cons: Can still fail to find an empty slot if the table is poorly sized.

**Method that can handle more values than slots:**  
**Chaining**, since it allows multiple values at one slot via linked lists.

**Worst-case time complexity (Big-O):**
- **Linear Probing:** O(n)
- **Quadratic Probing:** O(n)
- **Chaining:** O(n), but average case is better if chains are short

### 4. Hash Table Size and Key Distribution
Using a poorly chosen table size (like a power of 2 or round number) causes more collisions because patterns in key values align with table indices. A **prime number** reduces such patterns and distributes keys more uniformly.

---

## Part B: Simulation Exercises

### Exercise 1: Open Hashing (Separate Chaining)

**Keys:**  
`5, 22, 17, 18, 35, 101, 16, 0, 8`  
**Table Size:** 10  
**Hash Function:** h(k) = k mod 10

| Index | Contents            |
|-------|---------------------|
| 0     | 0                   |
| 1     | 101                 |
| 2     | 22                  |
| 3     |                     |
| 4     |                     |
| 5     | 5 → 35              |
| 6     | 16                  |
| 7     | 17                  |
| 8     | 8 → 18              |
| 9     |                     |

**Collisions:**
- Index 5: 5 and 35
- Index 8: 8 and 18

---

### Exercise 2: Closed Hashing (Open Addressing, Linear Probing)

**Keys:**  
`5, 22, 17, 18, 35, 101, 16, 0, 8`  
**Table Size:** 10  
**Hash Function:** h(k) = k mod 10

| Index | Key     |
|-------|---------|
| 0     | 0       |
| 1     | 101     |
| 2     | 22      |
| 3     |         |
| 4     |         |
| 5     | 5       |
| 6     | 16      |
| 7     | 17      |
| 8     | 8       |
| 9     | 18      |

**Clustering Observed:**  
- 35 is skipped as it would hash to 5 but that’s taken. Then 6, 7, 8, and 9 are all taken. It would go in a new index if available.  
(Since 10 slots only, 35 cannot be placed — table full without rehashing.)

---

### Exercise 3: Impact of Poor Table Size

**Keys:** `5, 10, 15, 20, 25, 30, 35, 40`

#### Table Size = 10 (Poor Choice)

All keys map to `index = 5, 0, 5, 0, 5, 0...`, causing **heavy clustering**.

| Index | Key      |
|-------|----------|
| 0     | 10 → 20 → 30 → 40 |
| 1     |          |
| 2     |          |
| 3     |          |
| 4     |          |
| 5     | 5 → 15 → 25 → 35  |
| 6     |          |
| 7     |          |
| 8     |          |
| 9     |          |

#### Table Size = 11 (Prime)

Keys distribute more evenly:

| Index | Key  |
|-------|------|
| 0     |      |
| 1     |      |
| 2     |      |
| 3     |      |
| 4     |      |
| 5     | 5    |
| 6     | 17   |
| 7     |      |
| 8     |      |
| 9     |      |
| 10    | 10   |

**Conclusion:** Prime table size distributes keys more uniformly, reducing clustering.

---

## Extra Credit: Quadratic Probing

**Keys:** `12, 23, 34, 45, 56, 67, 78, 89`  
**Table Size:** 11  
**Hash Function:** h(k) = k mod 11

**Probing formula:**  
`h(k) = (k + i²) mod 11` for i = 0, 1, 2,...

| Index | Key |
|-------|-----|
| 0     | 67  |
| 1     | 23  |
| 2     | 45  |
| 3     |     |
| 4     |     |
| 5     | 56  |
| 6     | 89  |
| 7     | 78  |
| 8     | 34  |
| 9     | 12  |
| 10    |     |

**Benefit:** Avoids primary clustering.  
**Drawback:** Harder to guarantee space coverage without rehashing.

---

## Part C: Reflection

### Real-World Impact
Using a poor table size or naive probing method causes clustering and performance issues — especially in real-time systems, it can lead to significant slowdowns or failure to insert.

### High-Frequency Trading Scenario
For speed-critical systems, **chaining** or **double hashing** with well-sized tables is preferred to avoid re-probing and clustering delays.

### Hybrid Design
A hybrid could use **open addressing with overflow chains** or **chaining with bounded arrays** in buckets to reduce pointer overhead while still handling load flexibly.

