#include <iostream>
#include <iomanip>
using namespace std;

void banner(){
    cout << "------------------------------------";
}

float totalPrice(int x, float y){
    return x*y;
}

int main(){
    int amount;
    float unitPrice, sumPrice;
    bool flag=true;

    
    
    while(flag){
        banner();
        cout << endl << "W E L C O M E  T O  I N T E C H S S" << endl;
        banner();

        cout << "\nEnter the amount you buy [0 to cancel]: ";
        cin >> amount;
        cout << "Enter the unitPrice: [0 to cancel]: ";
        cin >> unitPrice;

        if(amount==0 || unitPrice==0){
            cout << "See you soon!";
            break;
        }else{
            sumPrice = totalPrice(amount, unitPrice);
            cout << fixed << setprecision(2) << "The total of price is: " << sumPrice << endl;
        }
    }

    return 0;
}