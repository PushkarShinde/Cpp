# [Upper Half Region Tree Plantation](https://www.naukri.com/code360/problems/upper-half-region_6570179)

## Problem Statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field. For every value of ‘N’, print the field where the trees are represented by ‘*’.

## Input
- A single integer, ‘N’, representing the size of the field.
  - \(1 \leq T \leq 10\)
  - \(1 \leq N \leq 25\)

## Output
- A square pattern of size \(N \times N\) with the upper half region filled with ‘*’.

## Example
### Input
```
3
```
### Output
```
* * *
* *
*
```

### Input
```
1
```
### Output
```
*
```

### Input
```
4
```
### Output
```
* * * *
* * *
* *
*
```

## Explanation
### Example 1:
For \(N = 3\):
- The first row contains 3 ‘*’.
- The second row contains 2 ‘*’.
- The third row contains 1 ‘*’.

Thus, the output is:
```
* * *
* *
*
```

### Example 2:
For \(N = 1\):
- The single row contains 1 ‘*’.

Thus, the output is:
```
*
```

### Example 3:
For \(N = 4\):
- The first row contains 4 ‘*’.
- The second row contains 3 ‘*’.
- The third row contains 2 ‘*’.
- The fourth row contains 1 ‘*’.

Thus, the output is:
```
* * * *
* * *
* *
*
```