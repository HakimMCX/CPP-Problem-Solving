#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Multiplication Table
    // Read N and print the multiplication table from 1 to N as a neatly aligned grid using nested loops and setw.
    
    int N, x = 0, y = 0, z = 0 ;

    cout << "Enter your number: ";
    cin >> N;
 
    cout << setw(5) << "X" << setw(4);

    while(y<=N){
        if(x==0){
            while(x<=N){
                cout << x << setw(5);
                x++;
            }
            cout << endl;
        }

        if(y>0){
            cout << endl;
        }

        cout << setw(5) << y << setw(4);
        while (z<=N){
            cout << z*y << setw(5);
            z++;
        }
        z=0;
        y++;
    }
    return 0;
}