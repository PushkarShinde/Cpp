# [N/2-Dimensional Forest Visualizer](https://www.naukri.com/code360/problems/n-2-forest_6570178?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)

## Problem Statement
Sam is making a forest visualizer. An N-dimensional forest is represented by a pattern of size \( N \times N \) filled with '*'.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with '*'.

For every value of \( N \), help Sam print the corresponding N/2-dimensional forest.

## Example
### Input:
\[
N = 3
\]

### Output:
\[
*  
* *  
* * *  
\]

## Detailed Explanation
For \( N = 3 \), the output represents the lower triangle of a 3x3 matrix:
- Row 1 contains 1 '*'
- Row 2 contains 2 '*'
- Row 3 contains 3 '*'

## Constraints
- \( 1 \leq N \leq 25 \)
- Time Limit: 1 second

## Input Format
- A single integer \( N \)

## Output Format
- A pattern with '*' representing the lower triangle of size \( N \times N \).

## Examples

### Sample Input 1:
```
3
```

### Sample Output 1:
```
*
* *
* * *
```

### Explanation of Sample Input 1:
For \( N = 3 \): Fill all the rows and columns in the lower triangle of a 3x3 matrix with '*'.

---

### Sample Input 2:
```
1
```

### Sample Output 2:
```
*
```