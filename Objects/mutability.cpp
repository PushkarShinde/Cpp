#include <iostream>
using namespace std;

class Player {
  public:
    int health;
    int score;
    int level;
  
  Player() {
    health = 100;
    score = 0;
    level = 1;
  }
};

void PrintPlayer(Player p) {
  if (p.health <= 0) {
    cout << "This player is dead. They died on level " << p.level;
    cout << " with a score of " << p.score << "." << endl;
  }
  else {
    cout << "This player has " << p.health << " health, a score of " << p.score;
    cout << ", and is on level " << p.level << "." << endl;
  }
}

void ChangeHealth(Player p, int amount) {
  p.health += amount;
  cout << "New health = " << p.health << endl;
}

int main() {

  Player player1;
  PrintPlayer(player1);
  player1.health = 0;
  player1.score += 25;
  player1.level += 1;
  PrintPlayer(player1);
  
  ChangeHealth(player1, 20); //changes health of player1
  PrintPlayer(player1); //does not register changes from ChangeHealth function
  
  return 0;
}