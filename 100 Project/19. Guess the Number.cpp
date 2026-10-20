#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main(){
    //19. Guess the Number
    //The computer picks a random number from 1–100 (<random>). 
    //The user guesses repeatedly and gets "too high" or "too low" hints. 
    //At the end, show the number of attempts. Limit to 7 attempts.

    int number, randomNumber, attempt=7;

    srand(time(0));
    randomNumber = rand() % (101);

    while(number!=randomNumber && attempt!=0){
        cout << "\nGuess a number from 1-100: ";
        cin >> number;
        if(number==randomNumber){
            cout << "Congrats! Your guess is correct!";
        }
        else if(number<randomNumber){
            cout << number << " too low.";
        }else if(number>randomNumber){
            cout << number << " too high.";
        }
        attempt-=1;
        if(attempt>1){
            cout << " You have only " << attempt << " attempts left.";
        }else{
            cout << " You have only " << attempt << " attempt left.";
        }
    }

    if(attempt<=0){
        cout << " You have reach limit of attempt.";
    }
    
    return 0;
}