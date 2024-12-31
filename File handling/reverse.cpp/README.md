# Problem Statement

Write a program that reads a text file and prints its contents in reverse order.

## Requirements
Your program must include the following line of code:
```cpp
string path = argv[1];
```
The variable `path` allows the program to accept different text files for testing.

## Expected Output
The output of your program should display the contents of the file in reverse order, preserving newlines and formatting. For example, if the input file contains:
```
He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’
‘Boy, you will never see your father again; you must come with me.’
‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
```

The program should output:
```
The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
‘Boy, you will never see your father again; you must come with me.’
He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’
```

## Input Details
- The file path is passed as a command-line argument.
- The file will contain multiple lines of text, including possible empty lines or trailing newlines.

## Output Details
- The program should print the contents of the file in reverse order, line by line.

## Steps to Solve the Problem
1. Read the file specified by the `path` variable.
2. Store the lines of the file in a container, such as a vector or list.
3. Reverse the order of the lines.
4. Print the reversed lines while preserving their original content and formatting.

## Example
### Input File (example.txt):
```
Line 1
Line 2
Line 3
```

### Output:
```
Line 3
Line 2
Line 1
```

## Notes
- Ensure that newlines at the end of lines in the original file are preserved in the output.
- Handle edge cases such as:
  - Empty files.
  - Files with only one line.
- Your program should gracefully handle invalid file paths and print an appropriate error message if the file cannot be read.

## Hint
You may use helper functions to separate concerns, such as one function to read the file and another to reverse its contents. The `ifstream` class in C++ can be helpful for file reading.

