#include <iostream>
using namespace std;

int main(){
    //16. Extended FizzBuzz
    //For numbers 1 to 100: print "Fizz" for multiples of 3, "Buzz" for 5, "Bazz" for 7, and combine words when a number is a multiple of several. Print the number itself if none apply.
    
    
    for(int i=1; i<101; i++){
        if(i%3==0){
            cout << "Fizz";
        }
    }
    return 0;
}