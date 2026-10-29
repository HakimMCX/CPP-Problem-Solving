#include <iostream>
using namespace std;

int main(){
    string food = "fried rice";
    string &lunch = food; //use & for reference

    cout << lunch;

    
    return 0;
}