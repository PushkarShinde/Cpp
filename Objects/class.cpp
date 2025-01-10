#include <bits/stdc++.h>
using namespace std;

   
class Actor {
  public:
    string first_name;
    string last_name;
    int total_films;
};

  

int main() {
  
  //add code below this line
  
  Actor Pushkar;
  Pushkar.total_films = 80;
  Pushkar.first_name = "Helen";
  Pushkar.last_name = "Mirren";
  cout << Pushkar.first_name +  ' ' + Pushkar.last_name << endl;
  Pushkar.total_films = 80;

  //add code above this line
  
  return 0;
  
}

  