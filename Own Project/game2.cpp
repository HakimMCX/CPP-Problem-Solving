#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    
    uniform_int_distribution<int> dist(0, 10); // 1 to 10
    
    int hp=3;
    int score=0;
    
    cout << "QUIZ GAME\n";

    while (hp!=0){
        cout << "HP: " << hp << " S: " << score << endl;
        int x = dist(gen);
        int y = dist(gen);
        int sym = dist(gen);
        int answ;

        if (sym<5){
            int quest = x + y;
            cout << x << " + " << y << " = ";
            cin >> answ;
            if (answ == quest){
                score++;
                cout << "CORRECT!\n";
            } else{
                hp-=1;
                cout << "INCORRECT!\n";
            }
        } else{
            int quest = x - y;
            cout << x << " - " << y << " = ";
            cin >> answ;
            if (answ == quest){
                score++;
                cout << "CORRECT!\n";
            } else{
                hp-=1;
                cout << "INCORRECT!\n";
            }
        }
    }
    cout << "Congrats! Your Score: " << score;
    return 0;
}