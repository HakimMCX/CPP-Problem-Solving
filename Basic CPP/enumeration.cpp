#include <iostream>
using namespace std;

int main(){
    enum sectNumber{
        HAKIM = 483,
        AMIEL,
        LUQMAN,
        FARIS
    };

    sectNumber section = FARIS;
    cout << section;

    return 0;
}