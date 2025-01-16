#include <bits/stdc++.h>
using namespace std;

class Player{
    private:
        int health;
        int score;
        int level;

    public:
        Player(){
            health=100;
            score=0;
            level=1;
        }

        void changelevel(){
            level+=1;
            cout << "Class change: "<< level<< endl;
        }
};

int main() {
    Player pushkar;
    pushkar.changelevel();
    return 0;
}