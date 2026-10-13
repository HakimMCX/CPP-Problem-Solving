#include <iostream>
using namespace std;

int main(){
    //Digit Operations
    //Read a positive integer and, using only loops and % and /, 
    //print: the sum of digits, the number reversed, the count of digits, and whether it is a palindrome number.

    int num = 0, sum = 0, digit = 0;

    while(num<=0){
        cout << "Enter your positive integer: ";
        cin >> num;
    }

    while(num!=0){
        num/10;
    }

    cout << "The sum of digits: " << digit;
    return 0;
}