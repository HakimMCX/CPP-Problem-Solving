#include <iostream>
using namespace std;

int main(){
    cout << "PRINT PEOPLE NAME";
    string name[5] = {"Hakim", "Hassan", "Hasif", "Mikhail", "Ajmal"};
    for (int i=0; i!=5; i++){
        cout << "\nMy name is " << name[i];
    }
    return 0;
}