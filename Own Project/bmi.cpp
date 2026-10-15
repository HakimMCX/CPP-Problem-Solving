#include <iostream>
using namespace std;

int main(){
    cout << "BMI CALC\n";

    float height;
    float weight;
    float bmi;

    cout << "Enter your height (cm): ";
    cin >> height;
    cout << "\nEnter your weight (kg): ";
    cin >> weight;

    bmi = weight/((height/100)*(height/100));
    cout << "Your BMI is: " << bmi;

    return 0;
}