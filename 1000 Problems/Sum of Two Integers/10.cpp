#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Remainder of Daily Temperatures #10  
    //Read daily temperatures from the user and calculate the remainder. Format the output clearly and handle valid numeric input.  
    //int temp, sum=0, y=1;
    float temp, sum=0, y=1;
    bool flag=true;

    while(flag){
        cout << "Enter your " << y << " day temperature [0 if done]: ";
        cin >> temp;
        if (temp!=0){
            sum+=temp;
            y++;
        }else{
            flag = false;
            y-=1;
        }
    }

    float remainder = fmod(sum, y); 
    //int remainder = sum%y; //utk int
    
    cout << "Remainder of your daily temperature: " << remainder;

    return 0;
}                                                                                                                       