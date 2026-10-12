#include <iostream>
using namespace std;

int main(){
    //Classify Age Eligibility #1  
    //Write a program that uses conditional logic to classify a age eligibility. Include at least three possible outcomes and display a clear result.  
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age>18){
        cout << "You're University Student";
    }else if(age >12){
        cout << "You're High Scool Student";
    }else if(age>6){
        cout << "You're Primary School Student";
    }
    return 0;
}