#include <iostream>
using namespace std;

int main(){
    //Absolute Difference of Three Integers #7  
    //Read three integers from the user and calculate the absolute difference. Format the output clearly and handle valid numeric input. 

    int num1, num2, num3;   
    
    cout << "Enter your first numbers: ";
    cin >> num1;
    cout << "Enter your second numbers: ";
    cin >> num2;
    cout << "Enter your third numbers: ";
    cin >> num3;

    cout << "Absolute difference of your three numbers is " << abs(num1-num2-num3);

    return 0;
}