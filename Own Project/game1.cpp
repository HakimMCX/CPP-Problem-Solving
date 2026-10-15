#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dist(0, 1); // 1 to 10
    cout << "GUEST GAME\n\n";
    
    int hp=3;
    int point;
    
    while(hp!=0){
        int answ;
        int quest = dist(gen);
        cout << "HP: " << hp << " P: " << point << " ";
        cout << "0 or 1: ";
        cin >> answ;

        if (answ == quest){
            cout << "CORRECT!\n";
            point++;
        } else{
            cout << "INCORRECT!\n";
            hp=hp-1;
        }
    }
    cout << "Congrats! Your Points: " << point;

    return 0;
}