# Celestial Body Comparison Program

## Problem Description
This program is designed to compare celestial bodies based on their distances from the sun. The objective is to determine which celestial body is closer to the sun using a member function within the `CelestialBody` class.

---

## Requirements
You are provided with a partially implemented program:

```cpp
#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}
```

### Functionality to Implement
- Add a `CloserToSun` member function to the `CelestialBody` class.
- The function should compare the distances of two celestial bodies and return the name of the body that is closer to the sun.
- Do not modify the `main` function.

---

## Implementation Details

### Class Member Function: `CloserToSun`
The `CloserToSun` function must:
- Accept another `CelestialBody` object as a parameter.
- Compare the `distance` of the current object with the `distance` of the passed object.
- Return the `name` of the celestial body with the smaller `distance`.

### Example Input and Output
#### Input:
```cpp
CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
CelestialBody venus("Venus", 12103.6, 108160000, 0);
cout << mercury.CloserToSun(venus) << endl;
```

#### Output:
```
Mercury
```

---

## Constraints
- The comparison is based solely on the `distance` attribute.
- Assumes valid inputs for celestial bodies, including positive distances and non-empty names.

---

## Summary
This program effectively determines which celestial body is closer to the sun using a simple comparison of their distances. By encapsulating the functionality within the `CelestialBody` class, the solution adheres to object-oriented principles.