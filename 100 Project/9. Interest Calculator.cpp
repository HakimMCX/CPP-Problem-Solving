#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Interest Calculator
    //Read principal, annual rate (%) and years. Print the simple interest, and the compound interest compounded yearly (use pow from <cmath>).
    float principal, annualRate, time;

    cout << "Enter your principal: ";
    cin >> principal;
    cout << "Enter your anual rate in %: ";
    cin >> annualRate;
    cout << "Enter your time in year: ";
    cin >> time;

    cout << "Simple interest: " << (principal*annualRate*time); 
    cout << "\nCompound interest: " << (principal*pow((1+(annualRate/100)), time))-principal;
    
    return 0;   
}