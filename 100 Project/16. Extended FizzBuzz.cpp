#include <iostream>
using namespace std;

int main(){
    //16. Extended FizzBuzz
    //For numbers 1 to 100: print "Fizz" for multiples of 3, "Buzz" for 5, "Bazz" for 7, and combine words when a number is a multiple of several. Print the number itself if none apply.
    
    
    for(int i=1; i<101; i++){
        if(i%3==0 && i%5==0){
            cout << "FizzBuzz";
        }else if(i%3==0 && i%7==0){
            cout << "FizzBazz";
        }else if(i%5==0 && i%7==0){
            cout << "BuzzBazz"
        }
        else if(i%3==0){
            cout << "Fizz";
        }else if(i%5==0){
            cout << "Buzz";
        }else if(i%7==0){
            cout << "Bazz";
        }else{
            cout << i;
        }
    }
    return 0;
}