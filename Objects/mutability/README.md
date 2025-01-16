# Subway Class Implementation

## Overview
The `Subway` class simulates a basic subway system, tracking the number of passengers on board and calculating the total fares collected. The class provides functionality to board and disembark passengers, ensuring proper fare calculations and adherence to constraints such as no negative passenger counts.

---

## Class Features

### Attributes
- **fare** (`const double`): Fixed fare per passenger (`2.40`).
- **passengers** (`int`): Tracks the current number of passengers on the subway.
- **total_fares** (`double`): Cumulative total of all fares collected.

### Public Methods

1. **`GetPassengers()`**
   - Returns the current number of passengers.

2. **`Board(int p)`**
   - Accepts a positive integer `p` representing the number of passengers boarding.
   - Ensures the number is positive.
   - Updates the total fares using the helper function `CalculateFares()`.

3. **`Disembark(int p)`**
   - Accepts a positive integer `p` representing the number of passengers exiting.
   - Ensures the total number of passengers does not go below zero.

4. **`GetFares()`**
   - Returns the total fares collected as a `double`.

### Private Methods

1. **`CalculateFares(int p)`**
   - Calculates the fare for `p` passengers boarding and adds it to `total_fares`.

---

## Implementation Details

### Constructor
The default constructor initializes:
- `passengers` to `0`.
- `total_fares` to `0.0`.

### Functionality
- **Passenger Tracking**: Ensures passenger count cannot be negative.
- **Fare Calculation**: Maintains a cumulative record of total fares collected.
- **Validation**: Ensures only valid (non-negative) inputs are processed.

---

## Constraints
- Fare per passenger is fixed at `2.40`.
- Input values for boarding and disembarking must be non-negative integers.
- The minimum number of passengers on the subway is `0`.

---

## Example Usage

### Code
```cpp
Subway s;
cout << s.GetPassengers() << endl;
s.Board(23);
s.Disembark(12);
cout << s.GetPassengers() << endl;
cout << s.GetFares() << endl;
```

### Expected Output
```plaintext
0
11
55.2
```

---

## Notes
1. **Encapsulation**: Helper functions like `CalculateFares` should be private for better encapsulation.
2. **Error Handling**: Ensure edge cases (e.g., disembarking more passengers than present) are handled gracefully.
3. **Code Clarity**: Maintain clear documentation and logical organization of class functions.

This class provides a robust foundation for simulating subway operations while adhering to best practices in C++ development.

