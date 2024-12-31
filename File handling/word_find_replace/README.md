# Problem Statement

Write a program that reads a text file. The file path is stored in the variable `path`.

The task is to replace every instance of the word `Burma` in the file with `Myanmar` and print the results. The output should reflect this transformation accurately.

## Expected Output
The final output of the program should be:

```
Myanmar is a country in Southeast Asia.
The capital of Myanmar is Naypyidaw.
Its population is about 54 million people.
Myanmar is a former British colony.
```

## Hint
You can use the `FindAndReplace()` function to replace all instances of `Burma` with `Myanmar`. Ensure that the file's content is stored as a string before applying this function.

## Constraints
1. The file at the given `path` contains text that mentions the word `Burma` multiple times.
2. The program must only replace the exact word `Burma` with `Myanmar` (case-sensitive).
3. The structure and formatting of the original text should remain intact after the transformation.

## Example

### Input File (example.txt):
```
Burma is a country in Southeast Asia.
The capital of Burma is Naypyidaw.
Its population is about 54 million people.
Burma is a former British colony.
```

### Output:
```
Myanmar is a country in Southeast Asia.
The capital of Myanmar is Naypyidaw.
Its population is about 54 million people.
Myanmar is a former British colony.
```

## Steps to Solve the Problem
1. Open and read the content of the file specified by the `path` variable.
2. Store the file's content in a string.
3. Use the `FindAndReplace()` function to replace all instances of `Burma` with `Myanmar`.
4. Print the modified content to the standard output.

## Notes
- Ensure you handle large files gracefully if the file size is considerable.
- The program should not modify the original file; it should only print the transformed content.

