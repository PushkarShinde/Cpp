# Problem Statement

Write a program that reads a text file and returns:
1. The number of lines in the file.
2. The total number of characters in the file.

## Requirements
Your program must include the following line of code:
```cpp
string path = argv[1];
```
The variable `path` allows the program to accept different text files for testing.

## Expected Output
The output of your program should be:
```
4 line(s)
228 character(s)
```
This indicates the file contains 4 lines and a total of 228 characters.

## Input Details
- The file path is passed as a command-line argument.
- The file will contain a mix of text, spaces, and possibly empty lines.

## Output Details
- The program should print the number of lines in the file, followed by the total number of characters.
- Use the format:
  - `<number> line(s)` for lines.
  - `<number> character(s)` for characters.

## Steps to Solve the Problem
1. Read the file specified by the `path` variable.
2. Count the number of lines in the file.
3. Count the total number of characters in the file, including spaces and newlines.
4. Print the results in the specified format.

## Example
### Input File (example.txt):
```
Hello, world!
Welcome to file processing.
This is the third line.
And this is the last one.
```

### Output:
```
4 line(s)
105 character(s)
```

## Notes
- Make sure to handle edge cases, such as empty files or files with only whitespace.
- Your program should gracefully handle invalid file paths and print an appropriate error message if the file cannot be read.

## Hint
You may use helper functions to separate concerns, such as one function to count lines and another to count characters. The `ifstream` class in C++ can be helpful for file reading.

