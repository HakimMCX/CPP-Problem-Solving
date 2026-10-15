#include <iostream>
using namespace std;

int main(){
    //15. Prime Finder
    //Read two numbers A and B and print all prime numbers between them, 10 per line. Optimise the primality check to test divisors only up to √n.

    int A, B;
    bool prime;

    cout << "Enter your first number: ";
    cin >> A;
    cout << "Enter your second number: ";
    cin >> B;

    prime = (A>1) && (A%A)==0;

    while(A!=B){
        if(prime==true){
            cout << "Prime number:" << A << " ";
        }
    
        A++;
    }

    return 0;
}