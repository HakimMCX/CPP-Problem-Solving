#include <iostream>
using namespace std;
int main(){
    //Sum of Two Integers #1
    //Read two integers from the user and calculate the sum. Format the output clearly and handle valid numeric input.  
    //9.5/10
    
    int no1;
    int no2;
    int sum;

    cout << "Enter your first number : ";
    cin >> no1;
    cout << "Enter your second number: ";
    cin >> no2;

    sum = no1+no2;

    cout << "The sum of your first number and second number is : " << sum;

    return 0;
}