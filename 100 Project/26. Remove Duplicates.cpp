#include <iostream>
using namespace std;

int main(){
    //Given an unsorted array, write a function that removes duplicates 
    //while preserving the first occurrence order, and returns the new size. 
    //Do not use any STL containers.

    int unsortedArray[] = {21, 76, 23, 18, 49, 95, 76, 42};
    int size = sizeof(unsortedArray)/sizeof(unsortedArray[0]);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            }else if(unsortedArray[i]==unsortedArray[j]){
                unsortedArray[j] = -1; // Mark duplicates with -1
            }
        }
    }
    
    return 0;
}