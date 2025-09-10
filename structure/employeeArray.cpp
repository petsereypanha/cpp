#include"head.h"
struct Employee{
    int id,hour;
    string name;
    float salary,rate;
    double income;
};
int main(){
    Employee em[20];
    int n;
    char op;
    do{
        system("clear");
        cout << endl << "=============| MENU |===============" << endl;
        cout << " A. Input " << endl;
        cout << " B. Output " << endl;
        cout << " C. Exit " << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                cout << endl << "Input Element Of Employee : ";
                cin >> n;
                for(int i = 0; i < n; i++){
                    cout << endl << "Input ID      : "; cin >> em[i].id;
                    cout << "Input Name    : "; cin.ignore();getline(cin,em[i].name);
                    cout << "Input Salary  : "; cin >> em[i].salary;
                    cout << "Input Rate    : "; cin >> em[i].rate;
                    cout << "Input Hour    : "; cin >> em[i].hour;
                    em[i].income = em[i].salary + (em[i].hour * em[i].rate);
                }
            }break;
            case 'B':
            case 'b':{
                cout << setw(10) << "ID" << setw(10) << "Name"
                         << setw(10) << "Salary" << setw(10) << "Rate"
                         << setw(10) << "Hour" << setw(10) << "Income" <<endl;
                for(int i = 0; i < n; i++){
                    cout << setw(10) << em[i].id << setw(10) << em[i].name
                         << setw(10) << em[i].salary << setw(10) << em[i].rate
                         << setw(10) << em[i].hour << setw(10) << em[i].income <<endl;
                }
                getchar();
            }break;
            case 'C':
            case 'c':{
                exit(0);
            }break;
        }
    }while(getchar() == 10);
    return 0;
}
