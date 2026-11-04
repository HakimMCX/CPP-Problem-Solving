#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int size = 5;
    int target = 30;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Found at index: " << result;
    } else {
        cout << "Not found";
    }

    return 0;
}

// vector<int> sortedNumbers = {1, 3, 7, 19, 27, 57, 99};
// int num, index;
    
// cout << "Enter number that you find: ";
// cin >> num;

// for(int i=0; i!=sortedNumbers.size(); i++){
//     if(sortedNumbers[i]==num){
//         index = i;
//         break;
//     }
        
//     i++;
// }

// cout << "Your index number: " << index;#include <iostream>