#include <iostream>
using namespace std;

int main(){
    //Seconds Converter
    //Read a total number of seconds and print it as HH:MM:SS with leading zeros (e.g. 3725 → 01:02:05).
    int sec, min, hour;

    cout << "Enter your time in seconds: ";
    cin >> sec;

    hour = sec/60/60;
    min = (sec-(hour*60*60))/60;
    sec = (sec-(hour*60*60)-(min*60)); 
    

    if(hour>=10){ //hour
        if(min>=10){ //min
            if(sec>=10){ //sec
                cout << "Time: " << hour << ":" << min << ":" << sec;
            }else{
                cout << "Time: " << hour << ":" << min << ":0" << sec;
            }
        }else{ //min
            if(min>=10){ //sec
                cout << "Time: " << hour << ":0" << min << ":" << sec;
            }else{
                cout << "Time: " << hour << ":0" << min << ":0" << sec;
            }
        }
    }else{ //hour
        if(min>=10){
            if(sec>=10){
                cout << "Time: 0" << hour << ":" << min << ":" << sec;
            }else{
                cout << "Time: 0" << hour << ":" << min << ":0" << sec;
            }
        }else{
            if(sec>=10){
                cout << "Time: 0" << hour << ":0" << min << ":" << sec;
            }else{
                cout << "Time: 0" << hour << ":0" << min << ":0" << sec;
            }
        }
    }
    
    //cout << "Time: " << hour << ":" << min << ":" << sec;
    

    return 0;
}