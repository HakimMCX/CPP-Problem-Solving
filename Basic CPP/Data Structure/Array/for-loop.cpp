#include <iostream>
using namespace std;

int main(){
    float itemPrice[10] = {10.50, 22.50, 60.00, 42.20, 52.30, 59.67, 23.65, 19.60, 40.50, 6.50};
    float sum = 0;

    //for (declaration; condition; increment operator)
    for(int x=0; x!=10; x++){
        cout << "Item with index 0: " << itemPrice[x] << endl;
        sum += itemPrice[x];
    }

    cout << "Sum of price: " << sum; 

    return 0;
}