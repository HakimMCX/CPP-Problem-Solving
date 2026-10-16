#include <iostream>
#include <vector>
using namespace std;

int main(){
    //15. Prime Finder
    //Read two numbers A and B and print all prime numbers between them, 10 per line. Optimise the primality check to test divisors only up to √n.

    int A=0, B=0, x=0;
    bool maybe;
    vector<int> prime;

    while(A<=0 || B<=0){
        cout << "Enter your first positive number: ";
        cin >> A;
        cout << "Enter your second positive number: ";
        cin >> B;
    }

    while(A!=B){
        if(A==1){
            maybe = false;
        }else if(A==2){
            maybe = true;
        }else{
            for(int i=2; i!=A; i++){
                if((A%i)!=0){
                    maybe = true;
                }else{
                    maybe = false;
                    break;
                }
            }
        }

        if(maybe==true){
            prime.push_back(A);
        }
        
        A++;
    }

    if(A==B){
        if(A==1){
            maybe = false;
        }else if(A==2){
            maybe = true;
        }else{
            for(int i=2; i!=A; i++){
                if((A%i)!=0){
                    maybe = true;
                }else{
                    maybe = false;
                    break;
                }
            }
        }

        if(maybe==true){
            prime.push_back(A);
        }
    }

    cout << "Prime number: ";
    while(x!=prime.size()){
        cout << prime[x] << " ";
        x++;
    }

    return 0;
}