#include <iostream>
#include <cmath>
using namespace std;

int powerTen(int x){
    int y=1;
    while(x!=0){
        y*=10;
        x-=1;
    }
    return y;
}

int main(){
    //Digit Operations
    //Read a positive integer and, using only loops and % and /, 
    //print: the sum of digits, the number reversed, the count of digits, and whether it is a palindrome number.

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
        cout << "LOG: " << sum << endl;
        while(digit!=2){
            //temp+=1;

            sum+=static_cast<int>(num/(pow(10, digit-2))) % static_cast<int>(pow(10, 1)); 
            //% only for integer value, so we convert pow() into integer
            cout << "LOG: " << sum << endl;

            digit-=1;
        }
        sum+=num%static_cast<int>(pow(10, 1));
        cout << "LOG: " << sum << endl;
        }
    //  else if(digit>2){
    //     sum+=num/powerTen(decimal-1);
    //     cout << "LOG: " << sum << endl;
    //     while(digit!=2){
    //         temp+=1;

    //         sum+=(num/(powerTen(digit-2))) % powerTen(temp); 
    //         //% only for integer value, so cannot use pow() bcz it will return decimal number, instead we using our own function
    //         cout << "LOG: " << sum << endl;

    //         digit-=1;
    //     }
    //     sum+=num/(pow(10, decimal-1));
    //     cout << "LOG: " << sum << endl;
    // }


    cout << "The number of digits: " << decimal << endl;
    cout << "The sum of digits: " << sum << endl;
    return 0;
}