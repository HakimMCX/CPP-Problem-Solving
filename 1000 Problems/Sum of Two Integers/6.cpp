#include <iostream>
using namespace std;

int main(){
    //Maximum of Two Integers #6
    //Read two integers from the user and calculate the maximum. Format the output clearly and handle valid numeric input.  
    //8.5/10
        
    int no1;
    int no2;

    cout << "Enter your first number: ";
    cin >> no1;
    cout << "Enter your second number: ";
    cin >> no2;

    if(no1>no2){
        cout << no1 << " is greater than" << no2;
        cout << "\nSo, " << no1 << " is the maximum.";
    }else if(no2>no1){
        cout << no2 << " is greater than" << no1;
        cout << "\nSo, " << no2 << " is the maximum.";
    }else{
        cout << no1 << " is equavalent to " << no2;
    }

    //cout << "\nThe maximum is " << max(no1, no2);

    return 0;
}