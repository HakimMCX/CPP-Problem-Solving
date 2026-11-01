#include <iostream>
using namespace std;

int main(){
    //This tells C++: "I'm done with this memory, you can clean it up now."
    //memory management
    //forgot delete? memory leak, and it can slow down or crash your program over time.

    int *ptr = new int; //creates memory space for one integer
    *ptr = 67;
    cout << *ptr << endl;
    cout << ptr;

    delete ptr; //remove pointer

    //new and delete also valid in Dynamic arrays(unchangeable size)
    return 0;
}