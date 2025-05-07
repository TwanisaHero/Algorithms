# Hashing Homework – Strategies and Collision Resolution  
**Due:** 03-17-2025 (Mon @ 2:00)  
**Author:** Antwan Taylor  

## Description  
This assignment deepens your understanding of hash tables by exploring both open addressing (closed hashing) and open hashing (separate chaining). You will simulate insertions using various collision resolution techniques and analyze how table size affects performance and collisions.

## Objectives  
- Differentiate between open hashing and closed hashing  
- Apply linear probing, quadratic probing, and chaining  
- Analyze the impact of poor table sizes on collision frequency  
- Simulate insertions and visualize final hash table states  

## Part A: Conceptual Questions  

**What is a hash table and why is collision resolution necessary?**: A hash table is a data structure that maps keys to values using a hash function. Collisions occur when two keys map to the same index. Collision resolution is necessary to handle such conflicts and maintain performance.  
**What are the key differences between open hashing and closed hashing?**: Open hashing (chaining) uses linked lists at each bucket to store multiple keys. Closed hashing (open addressing) keeps all elements in the array, resolving collisions by probing.  
**Briefly describe at least two methods for resolving collisions in open addressing:**  
- Linear Probing: Check the next index (i + 1, i + 2, ...) until an empty slot is found.  
  - Pros: Simple and cache-friendly  
  - Cons: Causes clustering  
- Quadratic Probing: Use a quadratic interval (i + 1², i + 2², ...) for probing.  
  - Pros: Reduces primary clustering  
  - Cons: May not probe all slots unless table size is prime  
**Which collision resolution technique can handle more values than table slots?**: Chaining, since each slot can store a list of multiple values, exceeding the number of table positions.  
**What is the worst performance (Big O) for each type of collision resolution?**:  
- Chaining: O(n)  
- Linear Probing: O(n)  
- Quadratic Probing: O(n)  
**How does the choice of table size affect the distribution of keys?**: A good table size (typically prime) helps distribute keys uniformly. Poor sizes (e.g., powers of 2) cause uneven distribution and clustering.  
**What are the pitfalls of using a poor table size?**: Poor sizes increase collisions due to overlapping key patterns and prevent efficient use of probing sequences.  

## Part B: Simulation and Diagram Exercises  

**Exercise 1 – Open Hashing (Separate Chaining)**  
Keys: 5, 22, 17, 18, 35, 101, 16, 0, 8  
Hash Function: h(k) = k mod 10  
Table Size: 10  
Resulting Table:  
Index | Chain  
------|-----------------  
0     | 0  
1     | 101  
2     | 22  
3     |  
4     |  
5     | 5 → 35  
6     | 16  
7     | 17  
8     | 8 → 18  
9     |  

**Exercise 2 – Closed Hashing (Linear Probing)**  
Keys: 5, 22, 17, 18, 35, 101, 16, 0, 8  
Hash Function: h(k) = k mod 10  
Table Size: 10  
Resulting Table:  
Index | Value  
------|--------  
0     | 0  
1     | 101  
2     | 22  
3     |  
4     |  
5     | 5  
6     | 16  
7     | 17  
8     | 8  
9     | 18  
Clustering Observed: Keys like 35 would struggle for space after initial collisions as slots fill up, illustrating primary clustering.  

**Exercise 3 – Impact of Poor Table Sizes**  
Keys: 5, 10, 15, 20, 25, 30, 35, 40  

Table Size = 10  
Index | Chain  
------|----------------------------  
0     | 10 → 20 → 30 → 40  
5     | 5 → 15 → 25 → 35  

Table Size = 11 (Prime)  
Index | Value  
------|--------  
5     | 5  
6     | 15  
7     | 25  
8     | 35  
10    | 10  
Conclusion: Prime-sized tables distribute keys more uniformly, reducing clustering.  

## Extra Credit – Alternate Collision Technique  

Keys: 12, 23, 34, 45, 56, 67, 78, 89  
Method: Quadratic Probing  
Hash Function: h(k) = k mod 11  
Table Size: 11  
Probing Formula: (k + i²) mod 11  
Approximate Table:  
Index | Value  
------|--------  
0     | 89  
1     | 23  
2     | 45  
5     | 56  
7     | 67  
8     | 34  
9     | 12  
10    | 78  
Benefit: Reduces clustering compared to linear probing  
Drawback: Needs a prime-sized table to ensure all slots can be probed  

## Part C: Reflection & Design (Optional)  

**Explain how choosing a poor hash table size can lead to performance degradation in real-world applications:**: Bad sizes cause frequent collisions and longer probe chains or list traversals, increasing access times significantly.  
**How do open and closed hashing strategies differ in their handling of collisions in high-load scenarios?**: Open hashing tolerates higher load factors by chaining more entries per bucket. Closed hashing fills quickly, risking full-table probes and rehashing delays.  
**If you were to design a hash table for a high-frequency trading system where every millisecond counts, which collision resolution strategy might you choose and why?**: Double hashing with prime-sized tables provides fast, cache-efficient access and avoids linked list overhead. It minimizes clustering and maintains speed under load.  
**How might you combine the benefits of chaining and open addressing to design a hybrid hash table?**: Use fixed-size arrays or mini-buffers at each index. This preserves fast array access while allowing multiple entries per slot, reducing overflow and pointer overhead.
