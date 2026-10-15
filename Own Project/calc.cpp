#include <iostream>
using namespace std;

int main() {
    float x;
    float y;
    int s;

    cout << "CALCULATOR" << "\n";
    cout << "NO1: ";
    cin >> x;
    cout << "SYMBOL[1=+ 2=- 3=* 4=/]: ";
    cin >> s;
    cout << "NO2: ";
    cin >> y;
    
    if (s==1){
        cout << "RESULT: " << x+y;
    }else if (s==2){
        cout << "RESULT: " << x-y;
    }else if (s==3){
        cout << "RESULT: " << x*y;
    }else if (s==4){
        cout << "RESULT: " << x/y;
    }else{
        cout << "DUMB!";
    }

    return 0;
}