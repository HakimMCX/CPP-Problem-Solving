#include <iostream>
using namespace std;

int main(){
    //24. Searching
    //Implement linear search and binary search (iterative) on a sorted array. 
    //Both must return the index or -1, and count the number of comparisons made. 
    //Compare the counts for an array of 1000 elements.

    int sortedList[10] = {8, 12, 15, 21, 29, 34, 41, 64, 76, 91};
    int size = sizeof(sortedList)/sizeof(sortedList[0]);
    int target, count=0;

    cout << "Enter number that you want to find: ";
    cin >> target;

    //Linear Search
    for(int i=1; i<size; i++){
        count++;
        if(sortedList[i]==target){
             
        }
    }

    return 0;
}