#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Digit Operations
    //Read a positive integer and, using only loops and % and /, 
    //print: the sum of digits, the number reversed, the count of digits, 
    //and whether it is a palindrome number.

    int num = 0, digit = 0, sum = 0;

    while(num<=0 && num<=2147483647){ //max of integer 2,147,483,647
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
    }else if(digit>2){
        sum+=num/static_cast<int>(pow(10, decimal-1));
        //cout << "LOG: " << sum << endl;
        while(digit!=2){
            //temp+=1;

            sum+=static_cast<int>(num/(pow(10, digit-2))) % static_cast<int>(pow(10, 1)); 
            //% only for integer value, so we convert pow() into integer
            //cout << "LOG: " << sum << endl;

            digit-=1;
        }
        sum+=num%static_cast<int>(pow(10, 1));
        //cout << "LOG: " << sum << endl;
    }
    
    digit = decimal; //return the real value of digit
    
    cout << "The sum of digits: " << sum << endl;
    cout << "The number reversed: ";
    if(digit==1){
        cout << num;
    }else if(digit==2){
        cout << (num%10) << (num/10) ;
    }else if(digit>2){
        while(digit!=0){
            cout << (num%static_cast<int>(pow(10, decimal-digit+1))) / static_cast<int>(pow(10, decimal-digit));
            digit-=1;
        }
    }
    cout << "\nThe count of digits: " << decimal << endl;
    return 0;
}