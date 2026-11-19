#include <iostream>
using namespace std;

int main(){
    //EXAMPLE 
    
    // char status;
    // int service;
    // float percent, salary, newSalary;

    // cout << "Enter status (F for Full-time, P for Part-Time): ";
    // cin >> status;
    // cout << "Enter years of service: ";
    // cin >> service;

    // if(status=='F'){
    //     if(service<5){
    //         percent = 0.04;
    //     }else{
    //         percent = 5.0;
    //     }
    // }else if(status=='P'){
    //     if(service<5){
    //         percent = 0.025;
    //     }else{
    //         percent = 0.03;
    //     }
    // }else{
    //     cout << "Please enter the right value!";
    // }

    // newSalary = salary+salary*percent;
    // cout << "New salary: " << newSalary;

    //OTHER EXAMPLE

    int num1, num2;
    char op;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;
    cout << "Enter operation ['-' / '/']: ";
    cin >> op;

    if(op=='-'){
        if(num1>num2){
            cout << "Answer: " << num1-num2;
        }else{
            cout << "Num1 must greater than Num2";
        }
    }else if(op=='/'){
        if(num2!=0){
            cout << "Answer: " << static_cast<float>(num1)/num2;
        }else{
            cout << "Math Error";
        }
    }
    
    return 0;
}

