#include <iostream>
#include <string>
using namespace std;

int main(){
    //Character Inspector
    //Read a single character. Print its ASCII code, whether it is an uppercase letter, lowercase letter, digit or symbol, and its opposite-case version if it is a letter.

    char word;
    cout << "Enter any word: ";
    cin >> word;

    string temp = string(1, word); //1 mean repaeat char once //converting char to string to use string library
    cout << "ASCII code of your word: "; 

    for(char c : temp){
        int ascii = int(c);
        cout << ascii << ", ";
    }

    
    return 0;
}