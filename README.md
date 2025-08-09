
## 🔬 Experiment 8 – Multidimensional Arrays in C++

### 🎯 Aim

To implement and understand operations on 2D arrays in C++ such as matrix addition, multiplication, transpose, and diagonal sum.

### 📚 Theory

A **multidimensional array** is an array with more than one index, commonly used to represent matrices and tables.
In a 2D array, data is stored in rows and columns, and elements are accessed using two indices: `array[row][column]`.

---

## 📚 Programs, Descriptions & Algorithms

---

### **1️⃣ Matrix Addition (with Dimension Check)**

**Description:** Adds two matrices if both have the same dimensions.

**Algorithm:**

1. Input `r1`, `c1`, `r2`, `c2`.
2. If `r1 != r2` or `c1 != c2` → stop.
3. Input `m1` and `m2`.
4. Add corresponding elements into `result[i][j]`.
5. Display result matrix.

---

### **2️⃣ Matrix Multiplication (with Dimension Check)**

**Description:** Multiplies two matrices if columns of first = rows of second.

**Algorithm:**

1. Input `r1`, `c1`, `r2`, `c2`.
2. If `c1 != r2` → stop.
3. Input `m1` and `m2`.
4. Initialize `result` to 0.
5. For each `result[i][j]`, sum `m1[i][k] × m2[k][j]`.
6. Display result matrix.

---

### **3️⃣ Matrix Transpose**

**Description:** Swaps rows and columns of a matrix.

**Algorithm:**

1. Input `rows` and `cols`.
2. Input `matrix`.
3. Set `transpose[j][i] = matrix[i][j]`.
4. Display transpose.

---

### **4️⃣ Diagonal Elements Addition**

**Description:** Finds sum of primary and secondary diagonals in a square matrix.

**Algorithm:**

1. Input `n`.
2. Input matrix.
3. `primarySum += matrix[i][i]`.
4. `secondarySum += matrix[i][n-1-i]`.
5. Display sums.

---

### **5️⃣ Compare One Row with Another**

**Description:**

This program compares the elements of two selected rows in a matrix and checks whether they are identical.

**Algorithm:**

1. Start
2. Input the number of rows and columns of the matrix.
3. Input all the matrix elements.
4. Input the two row numbers to compare.
5. Check if the row numbers are valid (within the matrix size).
6. Compare each element of the two rows:

   * If all elements match → rows are identical.
   * If any element differs → rows are different.
7. Display the result.
8. Stop

## ✅ Conclusion

* Learned declaration, input, and manipulation of 2D arrays in C++.
* Implemented matrix operations with dimension validation.
* Understood nested loop usage for 2D data processing.

---
