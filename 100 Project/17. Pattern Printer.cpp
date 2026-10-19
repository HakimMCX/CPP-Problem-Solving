#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // 17. Pattern Printer
    // Read N and print three patterns: a [right-angled number triangle], an [inverted star pyramid], and a [hollow diamond] of height N.

    int N;

    cout << "Enter your number: ";
    cin >> N;

    //Right-angled number triangle
    for(int y=1; y<=N; y++){
        for(int x=1; x<=y; x++){
            cout << x;
        }
        cout << endl;
    }

    cout << endl;

    //Inverted star pyramid
    for(int j=0; j!=N; j++){
        cout << setw(5-j);
        for(int i=1; i<=(2*j+1); i++){
            cout << "*";
        }  
        cout << endl;
    }

    cout << endl;

    //Hollow diamond
    for(int m=0; m!=N; m++){
        if(m==N-1){
            break;
        }
        cout << setw(5-m);
        for(int n=1; n<=(2*m+1); n++){
            cout << "*";
        }  
        cout << endl;
    }
    for(int m=N-1; m!=-1; m--){
        cout << setw(N-m);
        for(int n=1; n<=(2*m+1); n++){
            cout << "*";
        }  
        cout << endl;
    }

    return 0;
}