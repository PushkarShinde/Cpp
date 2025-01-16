# Alpha Triangle Problem

## Problem Description
Sam is researching Alpha-Triangles and needs to create them for different integers ‘N’. An Alpha-Triangle is represented by a triangular pattern of alphabets in reverse order.

For a given value of ‘N’, print the corresponding Alpha-Triangle.

### Constraints
- `1 ≤ N ≤ 25`
- Time Limit: 1 sec

### Input Format
An integer `N` representing the number of rows in the Alpha-Triangle.

### Output Format
The triangular pattern of alphabets in reverse order.

---

## Example

### Input:
```
N = 3
```

### Output:
```
C
C B
C B A
```
---

## Explanation of the Code

1. **Function Definition**: The `printAlphaTriangle` function generates and prints the Alpha-Triangle pattern for a given value of `N`.
    - The outer loop controls the number of rows.
    - The inner loop prints the characters in each row, decrementing from the start character (`A + (N - 1)`).

2. **Main Function**:
    - Accepts user input for `N`.
    - Validates that `N` lies within the range `[1, 25]`.
    - Calls the `printAlphaTriangle` function to generate the pattern.

---

## How to Run

1. Copy the code into a C++ compiler or IDE.
2. Compile and run the program.
3. Input a value for `N` within the range `[1, 25]`.
4. Observe the Alpha-Triangle pattern in the output.

---

## Sample Input/Output

### Example 1
**Input:**
```
N = 4
```
**Output:**
```
D
D C
D C B
D C B A
```

### Example 2
**Input:**
```
N = 1
```
**Output:**
```
A
