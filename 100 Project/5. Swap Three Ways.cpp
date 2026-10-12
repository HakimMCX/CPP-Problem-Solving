#include <iostream>
using namespace std;

int main(){
    //Swap Three Ways
    //Swap two integers using (a) a temporary variable, (b) arithmetic only (no temp), and (c) std::swap. Print the values before and after each method.
    int a = 6, b = 7, temp;

    //Temporary variable
    cout << "Before: " << a << b;
    temp = b;
    b = a;
    a = temp;
    cout << "\nAfter: " << a << b;

    //Arithmetic
    cout << "\nBefore: " << a << b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter: " << a << b;

    //std::swap
    cout << "\nBefore: " << a << b;
    swap(a, b);
    cout << "\nAfter: " << a << b;
    
    return 0;
}