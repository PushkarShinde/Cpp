#include <iostream>
using namespace std;

// Add class definitions below this line
class Dog {
public:
    string name;
    string breed;

    // Constructor
    Dog(string nm, string bd) {
        name = nm;
        breed = bd;
    }
};
// Add class definitions above this line

int main() {
    // Create and initialize dog1
    Dog dog1("Marceline", "German Shepherd");

    // Create a copy of dog1
    Dog dog2 = dog1;

    // Modify dog2
    dog2.name = "Cajun";
    dog2.breed = "Belgian Malinois";

    // Print details of dog1 and dog2
    cout << dog1.name << " " << dog1.breed << endl;
    cout << dog2.name << " " << dog2.breed << endl;

    // Compare dog1 and dog2
    if (dog1.name == dog2.name && dog1.breed == dog2.breed) {
        cout << boolalpha << true;
    } else {
        cout << boolalpha << false;
    }

    return 0;
}
