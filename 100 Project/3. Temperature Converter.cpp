#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Temperature Converter
    //Read a temperature in Celsius and convert it to Fahrenheit and Kelvin. 
    //Print results to exactly 2 decimal places using <iomanip>.
    
    float celsius, fahrenheit, kelvin;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9/5)*celsius+32;
    kelvin = celsius+273;

    cout << fixed << setprecision(2);
    cout << celsius << "C = " << fahrenheit << "F = " << kelvin << "K";

    return 0;
}