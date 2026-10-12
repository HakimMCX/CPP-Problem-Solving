#include <iostream>
using namespace std;

int main(){
    //Maximum of Three
    //Read three numbers and print the largest and the smallest, using only if statements (no arrays, no std::max).

    float num1, num2, num3;

    cout << "Enter your three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    if(num1>num2){
        if(num1>num3){
            if(num2>num3){
                cout << "Largest number: " << num1;
                cout << "\nSmallest number: " << num3;
            }else{
                cout << "Largest number: " << num1;
                cout << "\nSmallest number: " << num2;
            }
        }else{
                cout << "Largest number: " << num3;
                cout << "\nSmallest number: " << num2;
        }
    }else{
        if(num1<num3){
            if(num2>num3){
                cout << "Largest number: " << num2;
                cout << "\nSmallest number: " << num1;
            }else{
                cout << "Largest number: " << num3;
                cout << "\nSmallest number: " << num1;
            }
        }else{
                cout << "Largest number: " << num2;
                cout << "\nSmallest number: " << num3;
        }
    }

    //Ignore same value

    return 0;
}