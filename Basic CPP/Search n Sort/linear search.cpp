#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> sortedNumbers = {1, 3, 7, 19, 27, 57, 99};
    int num, index;
    
    cout << "Enter number that you find: ";
    cin >> num;

    for(int i=0; i!=sortedNumbers.size(); i++){
        if(sortedNumbers[i]==num){
            index = i;
            break;
        }
        
        i++;
    }

    cout << "Your index number: " << index;

    return 0;
}