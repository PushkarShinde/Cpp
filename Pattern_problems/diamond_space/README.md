# [Symmetric Pattern Problem](https://www.naukri.com/code360/problems/symmetric-void_6581919?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)

## Problem Statement

Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

---

## Example

### Example 1
**Input:**
```
N = 3
```
**Output:**
```
* * * * * *
* *     * *
*         *
*         *
* *     * *
* * * * * *
```

### Example 2
**Input:**
```
N = 1
```
**Output:**
```
* *
* *
```

---

## Constraints

- `1 <= N <= 25`
- **Time Limit:** 1 second

---

## Solution Explanation

The pattern for any given `N` can be described as follows:
1. The total number of rows is `2 * N`.
2. The first `N` rows form the top half of the symmetric pattern, while the last `N` rows are the reverse of the top half.
3. Each row consists of a combination of `*` characters and spaces, arranged to form a symmetric structure.

### Algorithm
1. Loop through the first `N` rows:
   - For row `i` (0-indexed), print `N - i` `*` characters, followed by `2 * i` spaces, and then `N - i` `*` characters again.
2. Mirror these rows to form the lower half of the pattern.

---

## Sample Input/Output

### Input 1:
```
3
```

### Output 1:
```
* * * * * *
* *     * *
*         *
*         *
* *     * *
* * * * * *
```

### Input 2:
```
1
```

### Output 2:
```
* *
* *
```

