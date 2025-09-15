#include"./index.h"
int main(){
    fstream file_name;
    char value[15];
    file_name.open("NIT.txt",ios::out);
    cout << "Input Value    : "; cin.get(value,20);
    file_name << value;
    file_name.close();
    return 0;
}