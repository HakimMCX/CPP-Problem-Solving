#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;

int main(){
    int limit, randomNumber;
    bool flag=true;

    srand(time(0));

    while(flag){
        cout << "Enter your limit random number: ";
        cin >> limit;
        // Generate a random number between 0 and 100
        if(limit>0){
            randomNumber = rand() % (limit+1);
            cout << randomNumber << "\n";   
        }   
    }

    return 0;
}