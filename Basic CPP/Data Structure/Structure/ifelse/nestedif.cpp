#include <iostream>
using namespace std;

int main(){
    char status;
    int service;
    float percent, salary, newSalary;

    cout << "Enter status (F for Full-time, P for Part-Time): ";
    cin >> status;
    cout << "Enter years of service: ";
    cin >> service;

    if(status=='F'){
        if(service<5){
            percent = 0.04;
        }else{
            percent = 5.0;
        }
    }else if(status=='P'){
        if(service<5){
            percent = 0.025;
        }else{
            percent = 0.03;
        }
    }else{
        cout << "Please enter the right value!";
    }

    newSalary = salary+salary*percent;
    cout << "New salary: " << newSalary;
    
    return 0;
}