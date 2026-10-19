#include <iostream>
using namespace std;

int main(){
    //18. ATM Menu
    //Build a menu-driven ATM using do-while and switch: 
    //Check Balance, Deposit, Withdraw, Exit. 
    //Block withdrawals that exceed the balance and reject negative amounts. 
    //Start with a balance of RM 1000.

    bool flag = true;
    float balance = 1000.00, deposit=-1, withdraw=-1;
    int menu=0;

    do{
        cout << "\n------ATM Menu------\n";
        cout << "Check Balance [1]" << endl <<  "Deposit [2]" << endl << "Withdraw [3]" << endl << "Exit [4]";
        cout << "\n--------------------";

        cout << "\nEnter your option: ";
        while(menu<1 || menu>6){
            cin >> menu;
        }
        cout << "--------------------";

        switch (menu)
        {
        case 1:
            cout << "\n----Check Balance----";
            cout << "\nYour balance: " << balance << "$";
            cout << "\n--------------------";
            menu=0;
            break;
        
        case 2:
            cout << "\n\n------Deposit------";
            cout << "\nYour balance: " << balance << "$";
            cout << "\n--------------------";
            while(deposit<50){
                cout << endl << "How many you want deposit? [MIN:50$] [0 to cancel]: ";
                cin >> deposit;
                cout << "--------------------\n";
                if(deposit==0){
                    break;
                }else if(deposit>=50){
                    balance+=deposit;
                    cout << "\nYour " << deposit << "$ deposit was successful!";
                    cout << "\nYour balance now: " << balance << "$";
                    cout << "\n--------------------\n";
                }
            }
            deposit=0;
            menu=0;
            break;

            cout << "\n\n------Deposit------";
            cout << "\nYour balance: " << balance << "$";
            cout << "\n--------------------";
            while(deposit<50){
                cout << endl << "How many you want deposit? [MIN:50$] [0 to cancel]: ";
                cin >> deposit;
                if(deposit==0){
                    break;
                }
            }
            balance+=deposit;
            cout << "Your deposit was successful!";
            menu=0;
            break;

        case 3:
            cout << "\n\n------Withdraw------";
            cout << "\nYour balance: " << balance << "$";
            cout << "\n--------------------";
            while(withdraw<50){
                cout << endl << "How many you want withdraw? [MIN:50$] [0 to cancel]: ";
                cin >> withdraw;
                cout << "--------------------\n";
                if(withdraw==0){
                    break;
                }else if(withdraw>balance){
                    cout << "Unable to withdraw. Insufficient balance!";
                    cout << "\n--------------------\n";
                    break;
                }else if(withdraw<=balance){
                    balance-=withdraw;
                    cout << "\nYour " << withdraw << "$ withdrawal was successful!";
                    cout << "\nYour balance now: " << balance << "$";
                    cout << "\n--------------------\n";
                }
            }
            withdraw=0;
            menu=0;
            break;
        
        case 4:
            flag=false;
            cout << "\nThank you for using us!";
            cout << "\n--------------------";
            break;
        }


    }while(flag==true);

    return 0;
}