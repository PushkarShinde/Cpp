# Problem Statement

Write a program that reads a comma-delimited CSV file and prints all the cities that reside in the Southern Hemisphere. Note that any latitude with a negative value is south of the equator.

## Requirements
Your program must include the following line of code:
```cpp
string path = argv[1];
```
The variable `path` allows the program to accept different text files for testing.

## Expected Output
The CSV file will look like the one below:
```
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139
```

The program should output:
```
The following cities are in the Southern Hemisphere: Perth, Port Moresby.
```

## Input Details
- The file path is passed as a command-line argument.
- The CSV file contains rows of data, with each row representing a city. Each row has four fields:
  - City (string)
  - Country (string)
  - Latitude (integer)
  - Longitude (integer)
- The fields are separated by a comma (`,`).

## Output Details
- The program should print a single line listing all cities in the Southern Hemisphere, separated by commas.
- The output should follow this format:
```
The following cities are in the Southern Hemisphere: [City1], [City2], ...
```

## Steps to Solve the Problem
1. Read the file specified by the `path` variable.
2. Parse the CSV file to extract city names and their corresponding latitudes.
3. Identify cities with a negative latitude value.
4. Print the names of these cities in the specified format.

## Example
### Input File (example.csv):
```
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139
```

### Output:
```
The following cities are in the Southern Hemisphere: Perth, Port Moresby.
```

## Notes
- Ensure that the program correctly handles the comma-delimited format.
- Handle edge cases, such as:
  - Empty files.
  - Files with missing or improperly formatted data.
- Your program should gracefully handle invalid file paths and print an appropriate error message if the file cannot be read.

## Hint
You may use helper functions to separate concerns, such as one function to parse the file and another to filter cities by latitude. Libraries like `ifstream` and `sstream` in C++ can be helpful for file reading and string manipulation.

