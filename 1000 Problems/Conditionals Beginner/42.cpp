#include <iostream>
using namespace std;

int main(){
    //Validate Triangle Type #2  
    //Write a program that uses conditional logic to validate a triangle type. Include at least three possible outcomes and display a clear result.  
    
    int angleside;

    cout << "How many equal side of triangle?: ";
    cin >> angleside;

    if(angleside==3){
        cout << "Equilateral Triangle";
    }else if(angleside==2){
        cout << "Isosceles Triangle";
    }else if(angleside==1 | angleside==0){
        cout << "Scalance Triangle";
    }else{
        cout << "This is not a Triangle";
    }
    
    return 0;
}