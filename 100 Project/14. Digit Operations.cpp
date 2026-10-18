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

    int decimal = digit , temp = 0;

    if(digit==1){
        sum=num;
    }else if(digit==2){
        sum=(num/10)+(num%10);
    }else if(digit>3){
        sum+=num/static_cast<int>(pow(10, decimal-1));
        cout << sum << endl;
        while(digit!=2){
            temp+=1;

            sum+=static_cast<int>(num/pow(10, digit-2)) % static_cast<int>(pow(10, temp)); 
            //% only for integer value, so change it to int first, use static_cast<int>
            cout << sum << endl;

            digit-=1;
        }
        sum+=num/(pow(10, decimal-1));
        cout << sum << endl;
    }
    


    cout << "The number of digits: " << decimal << endl;
    cout << "The sum of digits: " << sum << endl;
    return 0;
}