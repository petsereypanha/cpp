#include"head.h"
struct Persion{
    int id;
    string name,gender;
    float salary,hour,rate;
}obj;
void Input();
float Income();
void Output();
void Header();
int main(){
    system("clear");
    char op;
    Again:{
        cout << endl << "=============| MENU |=============" << endl;
        cout << "   A. Input " << endl;
        cout << "   B. Output " << endl;
        cout << "   C. Exits " << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                Input();
            }break;
            case 'B':
            case 'b':{
                Header();
                Output();
            }break;
            case 'C':
            case 'c':{
                exit(0);
            }break;
        }
    }if(getchar() == 10) goto Again;

    return 0;
}
void Input(){
    cout << endl << "Input Persion ID     : "; cin >> obj.id;
    cout << "Input Persion Name   : "; cin >> obj.name;
    cout << "Input Persion Gender : "; cin >> obj.gender;
    cout << "Input Persion Salary : "; cin >> obj.salary;
    cout << "Input Persion Hour   : "; cin >> obj.hour;
    cout << "Input Persion Rate   : "; cin >> obj.rate;
}
float Income(){
    return (obj.salary + (obj.hour*obj.rate));
}
void Output(){
    cout  << obj.id << setw(10) << obj.name
         << setw(10) << obj.gender << setw(10) << obj.salary
         << setw(10) << obj.hour << setw(10) << obj.rate
         << setw(10) << Income() << endl;
}
void Header(){
    cout << endl << "ID" << setw(10) << "Name"
         << setw(10) << "Gender" << setw(10) << "Salary"
         << setw(10) << "Hour" << setw(10) << "Rate"
         << setw(10) << "Income" << endl;
}
