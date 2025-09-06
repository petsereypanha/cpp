#include"header.h"
int id,hour;
string name;
float salary,rate;
void Input(){
    cout << endl << "Input ID     : "; cin >> id;
    cout << "Input Name   : "; cin.ignore();getline(cin,name);
    cout << "Input Salary : "; cin >> salary;
    cout << "Input Rate   : "; cin >> rate;
    cout << "Input Hour   : "; cin >> hour;
}
float Income(){ // type = {int long short char string double ...}
    // float income;
    // income = salary + rate*hour;
    // return income;
    return (salary + rate*hour);
}
void Output(){
    cout << endl << setw(10) << id << setw(10) << name << setw(10) << salary << "$"
         << setw(10) << Income() << "$" <<endl <<endl;
}
int main(){
    system("clear");
    int n;
    cout << "Input Number : "; cin >> n;
    for(int i = 0; i < n; i++){
        Input();
        Output();
    }
    return 0;
}