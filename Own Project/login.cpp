#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //DATA BASE
    string username[3] = {"HakimMCX", "KokoGT", "Cue"};
    string password[3] = {"hakimgan123", "kotak123", "123gg"};
    bool admin[3] = {true, false, false};

    cout << "LOGIN\n";

    string usernameInput;
    string passwordInput;
    int index = 0;

    clock_t before = clock();

    cout << "Username: ";
    cin >> usernameInput;
    cout << "Password: ";
    cin >> passwordInput;

    for(string user : username){
        if (usernameInput==user){
            if(passwordInput==password[index]){
                cout << "Welcome back " << username[index] << "!";
                break;
            }else{
                cout << "The password you entered is incorrect!";
                break;
            }
        }else{
            cout << "The username you entered is not register yet!";
            break;
        }
        index+=1;
    }
    
    clock_t duration = clock() - before;
    
    cout << "\nTime taken: "  << duration << " ms";

    return 0;
}