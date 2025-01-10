#include <bits/stdc++.h>
using namespace std;

class Actor{
    public:
        string first_name;
        string last_name;
        int total_movies;

    Actor(){
        // Use 'this->' to refer to the class attributes
        first_name="Pushkar";
        last_name="Shinde";
        total_movies=24;
    }
};

int main() {
    Actor Pushkar;
    cout<< Pushkar.first_name+" "+Pushkar.last_name;
    return 0;
}