#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
    struct user{
        string username;
        string password;
        string backupPassword;
        bool admin;
        string dateRegister;
        string timeRegister;
        float timeTakenToRegister;
    };

    //DATA BASE:
    user HakimMCX;
    user Koko;
    user Amba;

    
    cout << setw(5) << "LOGIN" << setw(5);

    clock_t before = clock();

    user firstUser;
    cout << "Username: ";
    cin >> firstUser.username;
    cout << "Password: ";
    cin >> firstUser.password;
    cout << firstUser.username;


    clock_t duration = clock() - before);
    
    cout << "Time taken to login:"  << duration << "Seconds";

    return 0;
}