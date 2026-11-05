#include <iostream>
using namespace std;

int main(){
    int x=1, y=2, z=3;
    //postfix
    x++;
    x=x++;
    x=++x;

    cout << x;

    
    return 0;
}