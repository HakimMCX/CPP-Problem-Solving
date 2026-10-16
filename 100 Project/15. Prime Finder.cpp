#include <iostream>
#include <vector>
using namespace std;

int main(){
    //15. Prime Finder
    //Read two numbers A and B and print all prime numbers between them, 10 per line. Optimise the primality check to test divisors only up to √n.

    int A, B, x=0;
    bool maybe;
    vector<int> prime;

    cout << "Enter your first number: ";
    cin >> A;
    cout << "Enter your second number: ";
    cin >> B;

    while(A!=B){
        for(int i=2; i!=A; i++){
            if((A%i)==0){
                break;
            }
            prime.push_back(A);
        }
        A++;
    }

    if(A==B){
        for(int i=2; i!=A; i++){
            if((A%i)!=0){
                maybe = true;
            }else{
                maybe = false;
            }
        }
    }

    if(maybe==true){
        prime.push_back(A);
    }

    cout << "Prime number: ";
    while(x!=prime.size()){
        cout << prime[x] << " ";
        x++;
    }

    return 0;
}