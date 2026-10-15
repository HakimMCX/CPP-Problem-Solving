#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
    struct user{
        string username;
        string password;
        bool admin;
        string dateRegister;
        string timeRegister;
        float timeTakenToRegister;
    };
    
    cout <<  << "LOGIN";

    clock_t before = clock();

    user firstUser;
    cout << "Enter your Username"
    cin >> firstUser.username;

    clock_t duration = clock() - before;
    
    return 0;
}