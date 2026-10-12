#include <iostream>
using namespace std;

int main(){
    //Odd, Even and Sign
    //Read an integer. Using the ternary operator, print whether it is odd or even, and whether it is positive, negative or zero.

    int num;
    cout << "Enter any integer: ";
    cin >> num;

    if(num>0){
        if((num/2)==0){
            cout << "The integer is even number.";
        }else{
            cout << "The integer is odd number.";
        }
        cout << "\nYour number is positive real number.";
    }else if(num==0){
        if((num/2)==0){
            cout << "The integer is even number.";
        }else{
            cout << "The integer is odd number.";
        }
        cout << "\nYour number is zero.";
    }else{
        if((num/2)==0){
            cout << "The integer is even number.";
        }else{
            cout << "The integer is odd number.";
        }
        cout << "\nYour number is negative real number.";
    }
    
    return 0;
}