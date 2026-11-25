#include <iostream>
using namespace std;

int main(){
    char option;
    string text;

    cout << "Select option [A/B]: ";
    option = cin.get();
    
    if(option=='A'){
        cout << "Enter full sentences: ";
        cin.ignore();
        getline(cin, text);
    }else if(option=='B'){
        cout << "Enter a single word: ";
        cin >> text;
    }else{
        cout << "Exiting.";
    }
}