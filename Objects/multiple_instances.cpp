#include <bits/stdc++.h>
using namespace std;

class Actor{
    public:
        string first_name;
        string last_name;
        int total_movies;

    Actor(string fn, string ln, int tf){
        first_name=fn;
        last_name=ln;
        total_movies=tf;
    }
};

int main() {
    Actor Pushkar("Pushkar", "Shinde", 24); 
    Actor Anuj("Anuj", "Shinde", 8);
    cout<< Pushkar.first_name+" "+Pushkar.last_name<<endl;
    cout<< Anuj.first_name+" "+Anuj.last_name;
    return 0;
}