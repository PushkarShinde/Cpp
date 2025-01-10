#include <bits/stdc++.h>
using namespace std;

class Actor{
    public:
        string first_name;
        string last_name;
        int total_movies;

    Actor(string fn, string ln){
        first_name=fn;
        last_name=ln;
        total_movies=0;
    }
};

int main() {
    Actor Pushkar("Pushkar", "Shinde");
    cout<< Pushkar.first_name+" "+Pushkar.last_name<< " did "<< Pushkar.total_movies<<" films in total."<<endl;
    Pushkar.total_movies=24;
    cout<< Pushkar.first_name+" "+Pushkar.last_name<< " did "<< Pushkar.total_movies<<" films in total."<<endl;
    return 0;
}