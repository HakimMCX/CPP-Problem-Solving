#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //20. Factorial and Fibonacci Table
    //Read N (≤ 20) and print a table with columns n, n!, Fib(n) for each n from 1 to N using unsigned long long. 
    //Then try N = 25 and note in a comment where overflow happens.

    unsigned long long N = 100;
    int fact=1, fib=1;

    while(N>20){
        cout << "Enter your number [1-20]: ";
        cin >> N;

        cout << setw(10) << "n" << setw(10) << "n!" << setw(10) << "Fib(n)" << endl;

        for(int x=1; x!=N+1; x++){
            for(int y=1; y!=x+1; y++){
                fact*=y;
            }
            cout << setw(10) << x << setw(10) << fact << setw(10) << fib << endl;
        }

    }
    
    return 0;
}