#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    //Geometry Calculator
    //Calculate the area and perimeter of a rectangle, the area and circumference of a circle (use const double PI), 
    //and the area of a triangle given three sides (Heron's formula).

    const float pi = 3.142;
    float length, width, area, perimeter, radius, circumference;
    float a, b, c;

    //PHASE 1

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    area = (0.5)*length*width; //dont use 1/2 becuz it will be 0 becuz integer
    perimeter = 2*(length*width);

    cout << fixed << setprecision(2);
    cout << "The area of rectangle is " << area << " and the perimeter of rectangle is " << perimeter;   

    //PHASE 2

    cout << "\nEnter radius of circle: ";
    cin >> radius;

    area = pi*pow(radius, 2);
    circumference = 2*pi*radius;

    cout << fixed << setprecision(2);
    cout << "The area of circle is " << area << " and the circumference is " << circumference;

    //PHASE 3

    cout << "\nEnter 3 sides of triangle: ";
    cin >> a >> b >> c;

    perimeter = (a+b+c)/2;
    area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
    
    cout << "The area of triangle is " << area;

    return 0;
}