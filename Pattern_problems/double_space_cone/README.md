# [Symmetric Pattern Problem](https://www.naukri.com/code360/problems/symmetry_6581914?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems)

## Problem Statement

Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

---

## Example:

### Example 1
**Input:**
```
N = 3
```
**Output:**
```
*         *
* *     * *
* * * * * *
* *     * *
*         *
```

### Example 2
**Input:**
```
N = 1
```
**Output:**
```
*
```

---

## Constraints:
- `1 ≤ N ≤ 25`
- **Time Limit:** 1 sec
---

## Explanation

### Example Walkthrough (N = 3)
1. For `i = 1`:
   - First half stars: `* `
   - Spaces: `      `
   - Second half stars: `* `
   - **Output:** `*         *`

2. For `i = 2`:
   - First half stars: `* * `
   - Spaces: `    `
   - Second half stars: `* * `
   - **Output:** `* *     * *`

3. For `i = 3`:
   - First half stars: `* * * `
   - Spaces: `` (no spaces)
   - Second half stars: `* * * `
   - **Output:** `* * * * * *`

4. Repeat in reverse order for the lower half.

---

## Complexity Analysis

- **Time Complexity:** `O(N^2)` due to the nested loops and the printing.
- **Space Complexity:** `O(1)` since no additional space is used apart from variables.

---

Feel free to modify the code or the documentation based on your specific requirements!

