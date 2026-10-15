#include <iostream>
using namespace std;

int main(){
    string studentName[] = {"HakimMCX"};
    float studentCGPA[] = {3.5};
    bool flag = true;
    int i = 0;

    while(flag){
        i++;
        cout << "Enter your name: ";
        cin >> studentName[i];
        cout << "Enter your CGPA: ";
        cin >> studentCGPA[i];

        cout << "Do you want to enter another student? (1 for Yes, 0 for No): ";
        cin >> flag;
    }

    cout << "Student Information:" << endl;
    for(int j = 1; j <= i; j++){
        cout << "Name: " << studentName[j] << ", CGPA: " << studentCGPA[j] << endl;
    }

    return 0;
}