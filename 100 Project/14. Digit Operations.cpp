#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Digit Operations
    //Read a positive integer and, using only loops and % and /, 
    //print: the sum of digits, the number reversed, the count of digits, and whether it is a palindrome number.

    int num = 0, digit = 0, sum = 0;

    while(num<=0){
        cout << "Enter your positive integer: ";
        cin >> num;
    }

    int no = num;

    while(no!=0){
        no/=10;
        // cout << no << "\n";
        digit++;
    }

    int decimal = digit;

    if(digit==1){
        sum=num;
    }else if(digit==2){
        sum=(num/10)+(num%10);
    }else if(digit>2){
        sum+=num/(pow(10, digit-1));
        while(digit!=0){

            digit-=1;
        }
        sum+=num/(pow(10, decimal-1));
    }
    
    //sum=(num/100)+((num/10)%10)+(num%10);


    cout << "The number of digits: " << decimal << endl;
    cout << "The sum of digits: " << sum << endl;
    return 0;
}