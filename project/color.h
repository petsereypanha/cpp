#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
#include<stdlib.h>
using namespace std;
void reset(){
    printf("\33[0m");
}
void red(){
    printf("\033[1;31m");
}
void green(){
    printf("\033[1;32m");
}
void yellow(){
    printf("\33[0;33m");
}
void blue(){
    printf("\33[0;34m");
}
void purple(){
    printf("\33[0;35m");
}
void cyan(){
    printf("\33[0;36m");
}
void False(){
    printf("\033[0;101m");
}
void colorGradeA(){
    printf("\033[1;31m");
}
void colorGradeB(){
    printf("\033[0;31m");
}
void colorGradeC(){
    printf("\033[1;33m");
}
void colorGradeD(){
    printf("\033[1;32m");
}
void colorGradeE(){
    printf("\033[1;34m");
}
void colorGradeF(){
    printf("\033[1;30m");
}
void Header(){
    cyan();
    cout << endl << setw(7)<<"ID";
    cout << "     ";
    cout << left;
    cout << setw(21) << "Name"
         << setw(9)  << "Gender"
         << setw(15) << "Date_Of_Birth"
         << setw(8)  << "Table"
         << setw(7)  << "Room"
         << setw(13) << "Center"
         << setw(14) << "Total_Score"
         << setw(15) << "Total_Ranking"
         << setw(7)  << "Math"
         << setw(10) << "Biology"
         << setw(8)  << "Khmer"
         << setw(10) << "Physics"
         << setw(12) << "Chemistry"
         << setw(10) << "History"
         << setw(10) << "English"
         << "Grade\n" << endl;
    reset();
 } 