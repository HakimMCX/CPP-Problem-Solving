#include <iostream>
using namespace std;

int main(){
    struct {
        string name;
        int matric;    
        string course;
        int section;
    }student1, student2, student3;
    
    student1.name = "Hakim Nasrullah";
    student1.matric = 261907;
    student1.course = "FCS";
    student1.section = 487;

    student2.name = "Amiel Nazeef";
    student2.matric = 261918;
    student2.course = "FCS";
    student2.section = 487;

    student3.name = "Ahmad Luqman";
    student3.matric = 261962;
    student3.course = "FCS";
    student3.section = 487;

    cout << student1.name << endl << student1.matric << endl << student1.course << endl << student1.section << endl << endl;
    cout << student2.name << endl << student2.matric << endl << student2.course << endl << student2.section << endl << endl;
    cout << student3.name << endl << student3.matric << endl << student3.course << endl << student3.section << endl << endl;

    return 0;
}