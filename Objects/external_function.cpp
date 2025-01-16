#include <bits/stdc++.h>
using namespace std;

class Player{
    public:
        int health;
        int score;
        int level;

        Player(){
            health=100;
            score=0;
            level=1;
        }
};

void changelevel(Player p){
    p.level+=1;
    cout << "External change: "<< p.level<< endl;
}

int main() {
    Player pushkar;
    changelevel(pushkar);
    return 0;
}