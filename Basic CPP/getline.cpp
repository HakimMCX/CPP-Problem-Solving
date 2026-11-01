#include <iostream>
using namespace std;

int main(){
    //cin.ignore() before getline() to avoid getline read \n of cin(remove newline)

    int year;
    string studentName;
    
    cout << "Enter year: ";
    cin >> year;

    cin.ignore(); //Remove the remaining newline //compulsory

    cout << "Enter your full name: ";
    getline(cin, studentName);
    //cin >> studentName; //dont use this if you want input include space

    cout << studentName << " is from " << year;

    return 0;
}