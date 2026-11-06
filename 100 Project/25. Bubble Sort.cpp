#include <iostream>
using namespace std;

int main(){
    //25. Bubble Sort
    //Implement bubble sort with an early-exit optimisation. 
    //Count and print the number of swaps and passes. 
    //Use a boolean parameter to choose ascending or descending order.

    int unsortedList[10] = {24, 14, 82, 67, 52, 91, 21, 54, 98, 72};

    for(int i=0; i < sizeof(unsortedList)-1; i++){
        for(int j=0; j < sizeof(unsortedList)-1; j++){
            if(unsortedList[j]>unsortedList[j+1]){
                swap(unsortedList[j], unsortedList[j+1]);
            }
        }
    }

    for(int i=0; i < sizeof(unsortedList); i++){
        cout << unsortedList[i] << " ";
    }

    return 0;
}
