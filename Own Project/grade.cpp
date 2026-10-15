#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "GRED CHECKER\n";

    int mark;
    string grade;
    
    cout << "Enter your mark: ";
    cin >> mark;

    if(mark>=90){
        grade="A+";
    } else if(mark>=80){
        grade="A";
    } else if(mark>=75){
        grade="A-";
    } else if(mark>=70){
        grade="B+";
    } else if(mark>=65){
        grade="B";
    } else if(mark>=60){
        grade="C+";
    } else if(mark>=55){
        grade="C";
    } else if(mark>=50){
        grade="D";
    } else if(mark>=45){
        grade="E";
    } else{
        grade="G";
    }
        
    cout << "Your Grade is: " << grade;     

    return 0;
}