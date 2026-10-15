#include <iostream>
using namespace std;

int main(){
    //Declaration of size in array is compulsory
    //

    string name[6] = {"Nazmi", "Nasrul", "Naim", "Ica", "Tisya", "Haani"};
    int age[6] = {20, 18, 15, 12, 10, 7};
    int x;
    
    cout << "From the array? What number of index you're?: ";
    cin >> x;

    cout << "My name is " << name[x] << " and I " << age[x] << " years old.";
    
    return 0;
}