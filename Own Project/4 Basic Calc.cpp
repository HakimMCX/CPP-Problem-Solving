#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2;
    char op;
    bool flag=true;
    
    
    while(flag){
        float ans;
        
        cout << "\nEnter operation ['+'/'-'/'*'/'/']: ";
        cin >> op;
        cout << "Enter num1 and num2: ";
        cin >> num1 >> num2;

        if(op=='+'){
            static_cast<int>(ans);
            ans = num1+num2;
        }else if(op=='-'){
            if(num1>num2){
                static_cast<int>(ans);
                ans = num1-num2;
            }else{
                cout << "Num1 must greater than Num2!";
            }
        }else if(op=='*'){
            static_cast<int>(ans);
            ans = num1*num2;
        }else if(op=='/'){
            if(num2!=0){
                ans = (float)num1/num2;
            }else{
                cout << "[MATH ERROR] Num2 must greater than 0 or less than zero!";
            }
        }else{
            flag=false;
        }
        cout << num1 << " " << op << " " << num2 << " = " << ans << endl;
    }

    return 0;
}