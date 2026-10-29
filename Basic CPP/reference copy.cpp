#include <iostream>
using namespace std;

int main(){
    string food = "fried rice";
    string &lunch = food; //use & for reference variable

    cout << lunch;

    
    return 0;
}