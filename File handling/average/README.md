# Problem Statement

Write a program that reads a comma-delimited CSV file with four columns and returns the average of each column in the file. Assume that the CSV files used will only contain 3 rows and 4 columns.

## Requirements
Your program must include the following line of code:
```cpp
string path = argv[1];
```
The variable `path` allows the program to accept different text files for testing.

## Expected Output
The CSV file will look like the one below:
```
1,5,10,30
19,15,10,15
10,4,-2,15
```
The program should output:
```
10 8 6 20
```
Here:
- `10` represents the average of the numbers in the first column.
- `8` represents the average of the numbers in the second column.
- `6` represents the average of the numbers in the third column.
- `20` represents the average of the numbers in the fourth column.

## Input Details
- The file path is passed as a command-line argument.
- The CSV file contains exactly 3 rows and 4 columns of integer values.

## Output Details
- The program should print four space-separated integers representing the average of each column.
- The averages should be rounded down to the nearest integer (if necessary).

## Steps to Solve the Problem
1. Read the file specified by the `path` variable.
2. Parse the CSV file to extract integers from each of the four columns.
3. Calculate the average of each column.
4. Print the averages as a single line of space-separated integers.

## Example
### Input File (example.csv):
```
1,5,10,30
19,15,10,15
10,4,-2,15
```

### Output:
```
10 8 6 20
```

## Notes
- Ensure that the program correctly parses the comma-delimited format.
- Handle edge cases, such as:
  - Files with incorrect formatting (e.g., missing values).
  - Files containing non-numeric values.
- Your program should gracefully handle invalid file paths and print an appropriate error message if the file cannot be read.

## Hint
You may use helper functions to separate concerns, such as one function to parse the file and another to calculate the averages. Libraries like `ifstream` and `stringstream` in C++ can be helpful for file reading and string manipulation.

