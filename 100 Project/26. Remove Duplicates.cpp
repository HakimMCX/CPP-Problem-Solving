#include <iostream>
using namespace std;

int main(){
    //Given an unsorted array, write a function that removes duplicates 
    //while preserving the first occurrence order, and returns the new size. 
    //Do not use any STL containers.

    int unsortedArray[] = {21, 76, 23, 21, 18, 49, 95, 76, 42, 76};
    int size = sizeof(unsortedArray)/sizeof(unsortedArray[0]);
    int newSize=0;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }else if(unsortedArray[i]==unsortedArray[j]){
                unsortedArray[i]=-1;
            }
        }
    }
    
    for(int x=0; x<size; x++){
        if(unsortedArray[x]==-1){
            continue;
        }
        newSize++;
        cout << unsortedArray[x] << " ";
    }

    cout << "\nNew Size: " << newSize;

    return 0;
}