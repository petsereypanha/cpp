#include"header.h"
int id[10],hour[10];
char name[10][20];
float salary[10],rate[10];
void Input(int ind);
float Income(int ind);
void Output(int ind);
int Search(int n);
void Header();
int main(){
    system("clear");
    int n,op,m;
    do{
        cout << endl << "=============| MENU |==============" << endl;
        cout << "1. Input" << endl;
        cout << "2. Output" << endl;
        cout << "3. Search" << endl;
        cout << "4. Update" << endl;
        cout << "5. Add More" << endl;
        cout << "6. Exits " << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        switch(op){
            case 1:{
                cout << endl << "Input Element Of Employee : ";
                cin >> n;
                for(int i = 0; i < n; i++){
                    Input(i);
                }
            }break;
            case 2:{
                Header();
                for(int i = 0; i < n; i++){
                    Output(i);
                }
            }break;
            case 3:{
                int index = Search(n);
                if (index == -1){
                    cout << endl << "Search Is Not Found ..!" << endl;
                }else{
                    Header();
                    Output(index);
                    cout << endl << "Search Successful ..!" << endl;
                }
            }break;
            case 4:{
                int index = Search(n);
                if (index == -1){
                    cout << endl << "Search Is Not Found ..!" << endl;
                }else{
                    Input(index);
                    cout << endl << "Search Successful ..!" << endl;
                }
            }break;
            case 5: {
                bool b = false; // bool = {true,false}
                cout << "Input Element of Employee to Add  : ";
                cin >> m;
                for(int i = n; i < n+m; i++){
                    Input(i);
                    b=true;
                }
                // n += m; // n = n + m;
                if (b == false){
                    cout << endl << "Add Is Not Found ..!" << endl;
                }else{
                    cout << endl << "Add Successful ..!" << endl;
                }
            }break;
        }
    }while(op != 6);
    return 0;
}
void Input(int ind){
    cout << "\nInput Id       : "; cin >> id[ind];
    cout << "Input Name     : "; cin.ignore();cin.get(name[ind],20);
    cout << "Input Salary   : "; cin >> salary[ind];
    cout << "Input Hour     : "; cin >> hour[ind];
    cout << "Input Rate     : "; cin >> rate[ind];
}
float Income(int ind){
    return (salary[ind] + hour[ind]*rate[ind]);
}
void Output(int ind){
    cout << setw(10) << id[ind] << setw(10) << name[ind]
         << setw(10) << rate[ind] << setw(10) << hour[ind]
         << setw(9) << salary[ind] << "$"
         << setw(9) << Income(ind) << "$" << endl;
}
void Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name"
         << setw(10) << "Rate" << setw(10) << "Hour"
         << setw(10) << "Salary"
         << setw(11) << "Income\n" << endl;
}
int Search(int n){
    int index = -1,sid;
    cout << "Input ID To Search    : "; cin >> sid;
    for(int i = 0; i < n; i++){
        if(sid == id[i]){
            index = i;
        }
    }
    return index;
}