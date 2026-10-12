#include <iostream>
using namespace std;

int main(){
    //4. Average of Item Prices #4
    //Read item prices from the user and calculate the average. Format the output clearly and handle valid numeric input.
    //7.5/10 (bug)

    float itemprice;
    int x = true;
    int y = 0;
    float sum = 0;

    while(x){
        cout << "Enter your " << y+1 << " item price [0 if done]: ";
        cin >> itemprice;
        if(itemprice!=0){
            sum = sum+itemprice;
            y++;
        }else{
            x=false;
        }
    }

    cout << "Average item price: " << sum/y << endl;
    return 0;
}