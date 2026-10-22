#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n) { //Recursive Formula
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    //20. Factorial and Fibonacci Table
    //Read N (≤ 20) and print a table with columns n, n!, Fib(n) for each n from 1 to N using unsigned long long. 
    //Then try N = 25 and note in a comment where overflow happens.

    unsigned long long N;
    int fact=1, fib=1;

    cout << "Enter your number [1-20]: ";
    cin >> N;

    if(N>1 && N<=20){
    
        cout << setw(15) << "n" << setw(15) << "n!" << setw(15) << "Fib(n)" << endl;
    
        for(int x=1; x!=N+1; x++){
            for(int y=1; y!=x+1; y++){
                fact*=y;
            }
            fib=fibonacci(x);
            cout << setw(15) << x << setw(15) << fact << setw(15) << fib << endl;
            fact=1;
        }
    }else if(N>20){ //overflow happens
        cout << "Overflow Happens!";
    }
    
    return 0;
}