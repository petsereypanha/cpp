#include"header.h"
int main(){
    system("clear");
    int id,hour,n;
    string name;
    float salary,rate;
    double Income;
    cout << "Input Element Of Worker : "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << endl << "Input ID.   "<< i+1<<"  : "; cin >> id;
        cout << "Input Name. "<< i+1<<"  : "; cin.ignore();getline(cin,name);
        cout << "Input Salary."<< i+1<<" : "; cin >> salary;
        cout << "Input Hour. "<< i+1<<"  : "; cin >> hour;
        cout << "Input Rate. "<< i+1<<"  : "; cin >> rate;
        Income = salary + (rate * hour);

        cout << endl << id << setw(10) << name << setw(10) << salary <<"$"<< setw(10) << Income <<"$"<< endl;
    }
    return 0;
}
/*
    Home Work
    @ Employee
        id,name,gender,salary,rate,hour,tax,bouns,Income

    if hour < 45.  bouns = 10%(salary)
    if hour > 45.  bouns = 0(salary)

    while loop

*/