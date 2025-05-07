# 🧠 AVL Tree Insertion & Rebalancing Project

---

## 🔹 Set 1: Left-Right and Right-Left Rotations  
**Insertion Sequence:** `10, 20, 30, 15, 25, 5, 35, 27`

---

### 🔸 Step 1: Insert 10  
> No imbalance. No rotation needed.  
![Step 1](set1_step1.png)

---

### 🔸 Step 2: Insert 20  
> No imbalance. No rotation needed.  
![Step 2](set1_step2.png)

---

### 🔸 Step 3: Insert 30  
> Imbalance at node 10  
> Performed **RR Rotation** at 10  
![Step 3](set1_step3.png)

---

### 🔸 Step 4: Insert 15  
> No imbalance. No rotation needed.  
![Step 4](set1_step4.png)

---

### 🔸 Step 5: Insert 25  
> No imbalance. No rotation needed.  
![Step 5](set1_step5.png)

---

### 🔸 Step 6: Insert 5  
> No imbalance. No rotation needed.  
![Step 6](set1_step6.png)

---

### 🔸 Step 7: Insert 35  
> No imbalance. No rotation needed.  
![Step 7](set1_step7.png)

---

### 🔸 Step 8: Insert 27  
> No imbalance. No rotation needed.  
![Step 8](set1_step8.png)

---

## 🔹 Set 2: Multiple Rotations in Different Branches  
**Insertion Sequence:** `50, 40, 45, 60, 55, 70, 35, 30, 65, 75, 43`

---

### 🔸 Step 1: Insert 50  
> No imbalance. No rotation needed.  
![Step 1](set2_step1.png)

---

### 🔸 Step 2: Insert 40  
> No imbalance. No rotation needed.  
![Step 2](set2_step2.png)

---

### 🔸 Step 3: Insert 45  
> Imbalance at node 50  
> Performed **LR Rotation** at 50  
![Step 3](set2_step3.png)

---

### 🔸 Step 4: Insert 60  
> No imbalance. No rotation needed.  
![Step 4](set2_step4.png)

---

### 🔸 Step 5: Insert 55  
> Imbalance at node 50  
> Performed **RL Rotation** at 50  
![Step 5](set2_step5.png)

---

### 🔸 Step 6: Insert 70  
> Imbalance at node 45  
> Performed **RR Rotation** at 45  
![Step 6](set2_step6.png)

---

### 🔸 Step 7: Insert 35  
> No imbalance. No rotation needed.  
![Step 7](set2_step7.png)

---

### 🔸 Step 8: Insert 30  
> Imbalance at node 40  
> Performed **LL Rotation** at 40  
![Step 8](set2_step8.png)

---

### 🔸 Step 9: Insert 65  
> Imbalance at node 60  
> Performed **RL Rotation** at 60  
![Step 9](set2_step9.png)

---

### 🔸 Step 10: Insert 75  
> No imbalance. No rotation needed.  
![Step 10](set2_step10.png)

---

### 🔸 Step 11: Insert 43  
> No imbalance. No rotation needed.  
![Step 11](set2_step11.png)

---

## 🔹 Set 3: Alternating Insertions Causing Frequent Rebalancing  
**Insertion Sequence:** `100, 90, 110, 80, 95, 85, 105, 120, 102, 108`

---

### 🔸 Step 1: Insert 100  
> No imbalance. No rotation needed.  
![Step 1](set3_step1.png)

---

### 🔸 Step 2: Insert 90  
> No imbalance. No rotation needed.  
![Step 2](set3_step2.png)

---

### 🔸 Step 3: Insert 110  
> No imbalance. No rotation needed.  
![Step 3](set3_step3.png)

---

### 🔸 Step 4: Insert 80  
> No imbalance. No rotation needed.  
![Step 4](set3_step4.png)

---

### 🔸 Step 5: Insert 95  
> No imbalance. No rotation needed.  
![Step 5](set3_step5.png)

---

### 🔸 Step 6: Insert 85  
> Imbalance at node 100  
> Performed **LL Rotation** at 100  
![Step 6](set3_step6.png)

---

### 🔸 Step 7: Insert 105  
> No imbalance. No rotation needed.  
![Step 7](set3_step7.png)

---

### 🔸 Step 8: Insert 120  
> No imbalance. No rotation needed.  
![Step 8](set3_step8.png)

---

### 🔸 Step 9: Insert 102  
> Imbalance at node 100  
> Performed **RL Rotation** at 100  
![Step 9](set3_step9.png)

---

### 🔸 Step 10: Insert 108  
> No imbalance. No rotation needed.  
![Step 10](set3_step10.png)

---
