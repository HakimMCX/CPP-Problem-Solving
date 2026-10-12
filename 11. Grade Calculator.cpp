#include <iostream>
using namespace std;

int main(){
    //Grade Calculator
    //Read a mark (0–100) and print the grade: 
    //A (80+), B (70–79), C (60–69), D (50–59), F (below 50). 
    //Reject invalid input (negative or above 100) and ask again.

    int mark;
    char grade;
    bool flag = true;

    
    while(flag){
        cout << "\nEnter your mark [0-100, -1 if done]: ";
        cin >> mark;

        if(mark>=80){
            grade = 'A';
            cout << "Your grade is " << grade;
        }else if(mark>=70){
            grade = 'B';
            cout << "Your grade is " << grade;
        }else if(mark>=60){
            grade = 'C';
            cout << "Your grade is " << grade;
        }else if(mark>=50){
            grade = 'D';
            cout << "Your grade is " << grade;
        }else if(mark>=0){
            grade = 'F';
            cout << "Your grade is " << grade;
        }else if(mark==-1){
            flag = false;
            cout << "Thank you for supporting us!";
        }else{
            cout << "Please enter the right value!";
        }
    }
    
    
    return 0;
}