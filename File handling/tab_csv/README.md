# Problem Statement

Write a program that reads a tab-delimited (`\t`) CSV file and prints the name of the oldest person in the file. Assume that there are no two people with the same age.

## Requirements
Your program must include the following line of code:
```cpp
string path = argv[1];
```
The variable `path` allows the program to accept different text files for testing.

## Expected Output
The CSV file will look like the one below:
```
Peter\t38\tDoctor
Paul\t41\tLawyer
Mary\t32\tSystems Engineer
```
The program should output:
```
The oldest person is Paul.
```

## Input Details
- The file path is passed as a command-line argument.
- The CSV file contains rows of data, with each row representing a person. Each row has three fields:
  - Name (string)
  - Age (integer)
  - Occupation (string)
- The fields are separated by a tab (`\t`).

## Output Details
- The program should print a single line indicating the name of the oldest person in the file, following the format:
```
The oldest person is [Name].
```

## Steps to Solve the Problem
1. Read the file specified by the `path` variable.
2. Parse the tab-delimited content to extract the name and age of each person.
3. Identify the person with the highest age.
4. Print the name of the oldest person using the specified format.

## Example
### Input File (example.tsv):
```
Peter\t38\tDoctor
Paul\t41\tLawyer
Mary\t32\tSystems Engineer
```

### Output:
```
The oldest person is Paul.
```

## Notes
- Ensure that the program correctly handles the tab-delimited format.
- Handle edge cases, such as:
  - Empty files.
  - Files with missing or improperly formatted data.
- Your program should gracefully handle invalid file paths and print an appropriate error message if the file cannot be read.

## Hint
You may use helper functions to separate concerns, such as one function to parse the file and another to determine the oldest person. Libraries like `ifstream` and `sstream` in C++ can be helpful for file reading and string manipulation.

