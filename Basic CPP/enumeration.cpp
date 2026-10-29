#include <iostream>
using namespace std;

int main(){
    enum sectNumber{
        HAKIM = 483,
        AMIEL,
        LUQMAN,
        FARIS
    };

    sectNumber section1 = HAKIM;
    sectNumber section2 = AMIEL;
    sectNumber section3 = LUQMAN;
    sectNumber section4 = FARIS;
    cout << section1;
    cout << section2;
    cout << section3;
    cout << section4;

    return 0;
}
