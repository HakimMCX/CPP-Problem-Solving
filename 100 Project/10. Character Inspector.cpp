#include <iostream>
#include <string>
using namespace std;

int main(){
    //Character Inspector
    //Read a single character. Print its ASCII code, whether it is an uppercase letter, lowercase letter, digit or symbol, and its opposite-case version if it is a letter.

    char letter;
    cout << "Enter any letter: ";
    cin >> letter;
    int ascii = int(letter);

    cout << "ASCII code of your letter: " << ascii; 
    
    return 0;
}

// int main(){
//     //String Inspector
//     //Read a word. Print its ASCII code, whether it is an uppercase letter, lowercase letter, digit or symbol, and its opposite-case version if it is a letter.

//     string word;
//     cout << "Enter any word: ";
//     cin >> word;

//     cout << "ASCII code of your word: "; 

//     for(char c : word){
//         int ascii = int(c);
//         cout << ascii << " ";
//     }

    
//     return 0;
// }