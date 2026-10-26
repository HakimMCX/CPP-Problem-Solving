#include <iostream>
using namespace std;

int minimum(int x, int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int max(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int sum(int x, int y){
    return x+y;
}

float average(int x, int y){
    return (x+y)/2;
}

float median(int x, int y){
    return (x+y)/2;
}

float mode(int x, int y){

}

int main(){
    //22. Array Statistics
    //Read N numbers into an array. 
    //Write separate functions to find the minimum, maximum, sum, average, median and mode. 
    //Print all results.

    int N[5]={}, min, max;
    bool flag=true;

    for(int i=0; i!=5; i++){
        cout << "Enter your " << i+1 << " number: ";
        cin >> N[i];
    }

    for(int i=0; i!=5 ;i++){
        min=minimum(N[i], N[i+1]);
    }

    return 0;
}