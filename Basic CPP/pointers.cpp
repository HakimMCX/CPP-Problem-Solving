#include <iostream>
using namespace std;

int main(){
    string food = "Fried Chicken";
    string* ptr = &food; //& reference operator
    //string * ptr = &food; //3 ways to declare a pointer variable
    //string *ptr = &food;

    cout << food << endl;

    cout << &food << endl;

    cout << ptr << endl; //Reference

    cout << *ptr << endl; //Dereference

    *ptr = "Hamburger"; // Change the value of the pointer

    cout << food; //food also change
    return 0;
}