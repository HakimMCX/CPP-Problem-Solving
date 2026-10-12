#include <iostream>
using namespace std;

int main(){
    //Difference of Three Integers #2
    //Read three integers from the user and calculate the difference. Format the output clearly and handle valid numeric input.
    //9/10

    int no1;
    int no2;
    int no3;
    int diff12;
    int diff23;
    int diff13;
    int diff3;

    cout << "Enter your first number: ";
    cin >> no1;
    cout << "Enter your second number: ";
    cin >> no2;
    cout << "Enter your third number: ";
    cin >> no3;

    diff12 = no1-no2;
    diff23 = no2-no3;
    diff13 = no1-no3;
    diff3 = no1-no2-no3;

    cout << "Difference between your first number and your second number is :" << diff12 << endl;
    cout << "Difference between your second number and your third number is :" << diff23 << endl;
    cout << "Difference between your first number and your third number is :" << diff13 << endl;;
    cout << "Difference between your first number, your second number and  your third number is :" << diff3;

    return 0;
}