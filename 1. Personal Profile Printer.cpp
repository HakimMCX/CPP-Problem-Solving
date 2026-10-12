#include <iostream>
using namespace std;

int main(){
    /*Personal Profile Printer
Ask the user for their name, age, height (in metres) and favourite number. 
Print one neatly formatted paragraph using all four values. Use the correct data type for each (string, int, double).
*/
    string name;
    int age;
    float height;
    string number;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in metres): ";
    cin >> height;
    cout << "Enter your favourite number: ";
    cin >> number;

    cout << "\nYour name is " << name << ". You're " << age << " years old. Your height is " << height << " metres tall. And Your favourite number is " << number << ".";
    
    return 0;
}