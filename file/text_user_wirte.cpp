#include"./index.h"
c
void User::Input(){
    cout << endl << "Input ID     : ";cin >> id;
    cout << "Input Name   : ";cin.ignore();cin.getline(name,20);
    cout << "Input Age    : ";cin >> age;
    cout << "Input Salary : ";cin >> salary;
}
int main(){
    system("clear");
    fstream file;
    int n;
    User obj;
    file.open("./data_text/user.txt",ios::app);
    if(!file){
        cout << "Create File Not Found ..!" << endl;
        exit(0);
    }
    cout << endl << "Input Element Of User : ";cin >> n;
    for(int i = 0; i < n; i++){
        obj.Input();
        file.write((char*)&obj, sizeof(obj));
    }
    file.close();
    return 0;
}


/*
    Mode File
        - ios::in  = write
        - ios::out = read
        - ios::app = write read
        - ios::ate = poiter
*/