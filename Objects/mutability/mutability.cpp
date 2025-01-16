#include <iostream>
using namespace std;

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }
    // Returns the current number of passengers
    int GetPassengers() {
      return passengers;
    }

    // Adds passengers and updates fares
    void Board(int p) {
      if (p >= 0) { // Ensure only positive values are allowed
        passengers += p; // Add new passengers
        total_fares += CalculateFares(p); // Update total fares
      }
    }

    double CalculateFares(int new_passengers) {
      return new_passengers * fare; // Calculate fares for new passengers
    }

    // Removes passengers, ensuring the count doesn't go below zero
    void Disembark(int pex) {
      if (pex >= 0) { // Ensure only positive values are allowed
        passengers = max(0, passengers - pex); // Ensure passengers don't go below zero
      }
    }

    // Returns the total fares collected
    double GetFares() {
      return total_fares;
    }
    
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;
};

int main() {

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;
  
  return 0;
  
}