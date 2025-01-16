# [Reverse N-Number Crown](https://chatgpt.com/c/676e7e62-58f8-8004-9377-e2ab51ba655e)

## Problem Statement

Aryan and his friends are very fond of patterns. They want to create the **Reverse N-Number Crown** for a given integer `N`.

Given `N`, print the corresponding pattern as described below.

---

## Examples

### Example 1
**Input:**
```
N = 3
```
**Output:**
```
1         1
1 2     2 1
1 2 3 3 2 1
```

### Example 2
**Input:**
```
N = 4
```
**Output:**
```
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
```

### Example 3
**Input:**
```
N = 7
```
**Output:**
```
1                         1
1 2                     2 1
1 2 3                 3 2 1
1 2 3 4             4 3 2 1
1 2 3 4 5         5 4 3 2 1
1 2 3 4 5 6     6 5 4 3 2 1
1 2 3 4 5 6 7 7 6 5 4 3 2 1
```

---

## Input Format
- A single integer `N` that represents the height of the crown.

---

## Output Format
- Print the pattern corresponding to the input `N`.

---

## Explanation
- For a given `N`, the pattern consists of `N` rows.
- Each row `i` (1-indexed) contains:
  - Numbers incrementing from `1` to `i`.
  - Spaces between the left and right halves of the pattern, reducing as `i` increases.
  - Numbers decrementing from `i` to `1`.

### Example Walkthrough
#### For `N = 3`:
- Row 1: `1         1` (1 space between numbers)
- Row 2: `1 2     2 1` (2 spaces between numbers)
- Row 3: `1 2 3 3 2 1` (No spaces in between)

#### For `N = 4`:
- Row 1: `1             1`
- Row 2: `1 2         2 1`
- Row 3: `1 2 3     3 2 1`
- Row 4: `1 2 3 4 4 3 2 1`

---

## Constraints
- `1 ≤ N ≤ 20`
- **Time Limit:** 1 second.

---

## Complexity Analysis
- **Time Complexity:** `O(N^2)` because each row prints up to `2 * N - 1` elements.
- **Space Complexity:** `O(1)` since no additional data structures are used.

---

## Implementation Notes
1. Use nested loops:
   - Outer loop to iterate through the rows.
   - Inner loops to print the incrementing numbers, spaces, and decrementing numbers.
2. The spaces reduce symmetrically as the rows increase.
3. Proper formatting is crucial to align the pattern.

