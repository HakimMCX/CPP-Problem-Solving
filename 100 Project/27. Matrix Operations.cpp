#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //27. Matrix Operations
    //Read two matrices (up to 5×5) and perform addition and multiplication. Check that dimensions are compatible before multiplying and print a clear error if not.

    int row, col;
    int num = 5;
    
    cout << "Enter the number of row: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    for(int j=0; j!=row; j++){
        for(int i=0; i!=col; i++){
            cout << setw(2) << num;
        }
        cout << setw(2) << num << endl;
    }

    return 0;
}