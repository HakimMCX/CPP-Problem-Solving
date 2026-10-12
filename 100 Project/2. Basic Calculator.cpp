#include <iostream>
using namespace std;

int main(){
    //Basic Calculator
    //Read two numbers and print their sum, difference, product, quotient and remainder. Show what happens when you divide two ints versus two doubles, and explain the difference in a comment.

    //int num1, num2;
    float num1, num2;

    cout << "Enter your first number: ";    
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    //int sum = num1+num2, difference = num1-num2,  product = num1*num2, quotient = num1/num2, remainder = num1%num2;
    float sum = num1+num2, difference = num1-num2,  product = num1*num2, quotient = num1/num2;

    //cout << "Sum: " << sum << endl << "Difference: " << difference << endl << "Quotient: " << quotient << "\nProduct: " << product << "\nRemainder: " << remainder;
    cout << "Sum: " << sum << endl << "Difference: " << difference << endl << "Quotient: " << quotient << "\nProduct: " << product;

    //If we are using data type integer as a input, the quotient will be zero if we devide 2 integer that must have remainder
    //While if we using data type float, the quotient will be the exact answer

    return 0;
}