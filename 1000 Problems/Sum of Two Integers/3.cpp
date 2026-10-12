#include <iostream>
using namespace std;

int main(){
    //Product of Five Test Scores #3
    //Read five test scores from the user and calculate the product. Format the output clearly and handle valid numeric input.  
    //7.5/10 product tu hasil darab

    int score[5];
    int x = 1;
    int product = 1;

    while(x!=6){
        cout << "Enter your " << x << " number : ";
        cin >> score[x];
        product *= score[x]; 
        x++;
    }

    cout << "Product of your test scores : " << product;

    return 0;
}