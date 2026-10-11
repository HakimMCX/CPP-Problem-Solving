#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Interest Calculator
    //Read principal, annual rate (%) and years. Print the simple interest, and the compound interest compounded yearly (use pow from <cmath>).
    float principal, anualrate, time;

    cout << "Enter your principal: ";
    cin >> principal;
    cout << "Enter your anualrate in %: ";
    cin >> anualrate;
    cout << "Enter your time in year: ";
    cin >> time;

    cout << "Simple interest: " << (principal*anualrate*time); 
    cout << "\nCompound interest: " << (principal*pow((1+(anualrate/100)), time))-principal;
    
    return 0;   
}