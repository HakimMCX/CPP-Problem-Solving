#include <iostream>
using namespace std;

int main(){
    //15. Prime Finder
    //Read two numbers A and B and print all prime numbers between them, 10 per line. Optimise the primality check to test divisors only up to √n.

    int A, B;

    cout << "Enter your first number: ";
    cin >> A;
    cout << "Enter your second number: ";
    cin >> B;

    while(A!=B){
        if(A>1){
            cout << "Prime number:" << A << " ";
        }

        A++;
    }



    //bool prime =  A && (A%A)==0;

    return 0;
}