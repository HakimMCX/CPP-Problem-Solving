#include <iostream>
using namespace std;

int main(){
    string food = "Fried Chicken";
    string* ptr = &food; 
    // string * ptr = & food; //3 ways to declare a pointer variable
    // string *ptr = & food;

    cout << food << endl;

    cout << &food << endl;

    cout << ptr << endl; 
    
    return 0;
}