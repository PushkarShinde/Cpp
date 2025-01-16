#include <iostream>
#include <vector>
using namespace std;

class Meal {
  public:
    void AddDrink(string drink) {
      drinks.push_back(drink);
    }
    void PrintDrinks() {
      cout << "Drinks: ";
      if (drinks.size() == 0) {
        cout <<  "None" << endl;
      }
      else if (drinks.size() == 1) {
        cout <<  drinks[0] << endl;
      }
      else {
        for (int i = 0; i < drinks.size() - 1; i++) {
          cout << drinks.at(i) << ", ";
        }
        cout << "and " << drinks.at(drinks.size() - 1) << endl;
      }
    }
    void AddAppetizer(string app) {
      appetizers.push_back(app);
    }
    void PrintAppetizers() {
      for (auto a: appetizers) {
        cout << a << endl;
      }
    }
    void AddMainCourse(string mc) {
      main_courses.push_back(mc);
    }
    void PrintMainCourses() {
      for (auto a: main_courses) {
        cout << a << endl;
      }
    }
    void AddDessert(string dessert) {
      desserts.push_back(dessert);
    }
    void PrintDesserts() {
      for (auto a: desserts) {
        cout << a << endl;
      }
    }
  
  private:
    vector<string> drinks;
    vector<string> appetizers;
    vector<string> main_courses;
    vector<string> desserts;
};
    

int main() {

  Meal dinner;
  dinner.PrintDrinks();                                                        
  dinner.AddDrink("water");
  dinner.PrintDrinks();
  dinner.AddDrink("lemonade");
  dinner.PrintDrinks();
  dinner.AddDrink("tea");
  dinner.PrintDrinks();
  dinner.AddDrink("coffee");                                                   
  dinner.PrintDrinks();
  
  return 0;
}