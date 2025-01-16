#include <iostream>
using namespace std;

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    string CloserToSun(CelestialBody a){
      if(distance<a.distance){
        return name;
      } else {
        return a.name;
      }
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};   

int main() {
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;
  
  return 0;
  
}