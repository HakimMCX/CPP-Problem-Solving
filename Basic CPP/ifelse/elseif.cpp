#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.142

int main(){
    float width, length, radius, area;
    string shape;

    cout << "Enter shape ['Rectangle' / 'Circle']: ";
    cin >> shape;
    
    if(shape=="Rectangle"){
        cout << "Enter length and width: ";
        cin >> length;
        cin >> width;
        area = length*width;
    }else if(shape=="Circle"){
        cout << "Enter radius: ";
        cin >> radius;
        area = PI*pow(radius, 2);
    }else{
        cout << "Please enter the right value!\n";
    }

    cout << "The area of " << shape << " is " << fixed << setprecision(2) << area;

    return 0;
}