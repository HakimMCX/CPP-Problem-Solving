#include <iostream>
using namespace std;

int gcd(int x, int y){
    int q, r;
    if(x>y){
        while(r!=0){
            q=x/y;
            r=x%y;
            x=y;
            y=r;
        }
    }else{

    }
}

int lcm(int x, int y){

}

int main(){
    //GCD (Greatest Common Divisor) and LCM (Least Common Multiple)
    //Write int gcd(int, int) using Euclid's algorithm and int lcm(int, int) that uses it. 
    //Test with at least 5 pairs, including a pair where one number is 0.

    int pairNumber1[5] = {12, 48, 7, 24, 0};
    int pairNumber2[5] = {18, 18, 5, 36, 8};

    return 0;
}