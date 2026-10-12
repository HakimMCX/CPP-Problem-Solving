#include <iostream>
#include <vector> //vector
#include <algorithm> //min_element
using namespace std;

int main(){
    //Minimum of Daily Temperatures #5
    //Read daily temperatures from the user and calculate the minimum. Format the output clearly and handle valid numeric input.
    //8.5/10

    vector<double> temp;
    double input;
    int x = true;
    int y = 0;

    while(x){
        cout << "Enter your " << y+1 << " day temparature [0 if done]: ";
        cin >> input;
        if(input!=0){
            temp.push_back(input);
            y++;
        }else{
            x=false;
        }
    }
    
    cout << "Minimum of temparature: " << *min_element(temp.begin(), temp.end());

    return 0;
}