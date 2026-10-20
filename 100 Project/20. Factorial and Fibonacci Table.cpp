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

        cout << setw(2) << "n" << setw(2) << "n!" << setw(2) << "Fib(n)" << endl;

        for(int x=N; x!=0; x-=1){
            fact*=x;
            //if(x=)
            //fib=0;
            for(int i=1; i<=N; i++){
                cout << setw(2) << N << setw(2) << fact << setw(2) << fib << endl;
            }
        }

    }
    
    return 0;
}