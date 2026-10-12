#include <iostream>
#include <ctime>
using namespace std;

void dayOfLeapYear(int x){
    switch(x){
        case 1:
            cout << "31 Days";
            break;
        case 2:
            cout << "29 Days";
            break;
        case 3:
            cout << "31 Days";
            break;
        case 4:
            cout << "30 Days";
            break;
        case 5:
            cout << "31 Days";
            break;
        case 6:
            cout << "30 Days";
            break;
        case 7:
            cout << "31 Days";
            break;
        case 8:
            cout << "31 Days";
            break;
        case 9:
            cout << "30 Days";
            break;
        case 10:
            cout << "31 Days";
            break;
        case 11:
            cout << "30 Days";
            break;
        case 12:
            cout << "31 Days";
            break;
    }
}

void dayOfNonLeapYear(int x){
    switch(x){
        case 1:
            cout << "31 Days";
            break;
        case 2:
            cout << "28 Days";
            break;
        case 3:
            cout << "31 Days";
            break;
        case 4:
            cout << "30 Days";
            break;
        case 5:
            cout << "31 Days";
            break;
        case 6:
            cout << "30 Days";
            break;
        case 7:
            cout << "31 Days";
            break;
        case 8:
            cout << "31 Days";
            break;
        case 9:
            cout << "30 Days";
            break;
        case 10:
            cout << "31 Days";
            break;
        case 11:
            cout << "30 Days";
            break;
        case 12:
            cout << "31 Days";
            break;
    }
}

int main(){
    //Leap Year and Days in Month
    //Read a month and year. 
    //Print how many days that month has, correctly handling leap years (divisible by 4, except centuries not divisible by 400). 
    //Use a switch statement.
    
    //divisible by 4 mean if we divide by 4 we will get 0
    // Leap year : 
    //  1. year % 400 == 0
    //  2. year % 4 == 0 && year % 100 != 0
    // Not a leap year :
    //  else

    int month, year;
    
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    bool leapYear = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

    cout << leapYear;

    switch(leapYear){
        case true:
            cout << year << " is a leap year" << endl;
            dayOfLeapYear(month);
            break;
        case false:
            cout << year << " is not a leap year" << endl;
            dayOfNonLeapYear(month);
            break;
    }

    return 0;
}