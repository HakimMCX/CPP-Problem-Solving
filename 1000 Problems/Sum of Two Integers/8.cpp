#include <iostream>
using namespace std;

int main(){
    //Percentage of Five Test Scores #8  
    //Read five test scores from the user and calculate the percentage. Format the output clearly and handle valid numeric input.
    
    float score, sum = 0;
    int x = 1;

    while(x!=6){
        cout << "Enter your " << x << " test scores: ";
        cin >> score;
        sum += score;
        x++;
    }

    cout << "Five test scores percentage: " << (sum/500)*100 << "%";

    return 0;
}