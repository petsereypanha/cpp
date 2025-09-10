#include"head.h"
typedef struct Worker {
    int id;
    string name;
    struct Money{
        float salary,rate,hour;
        double income;
    }obj;
}Object;
void Header();
void Input(Object *wk,int index);
void Display(Object *wk,int index);
int main(){
    system("clear");
    Object *wk,tem;
    Object arr[10];
    int op,n;
    wk = (Object *)malloc(n*sizeof(*wk));
    // wk = new Object[10];
    if(wk == NULL){
        cout << "Create Location Error ..!" << endl;
        exit(0);
    }
    do{
        cout << endl << "============| MENU |=================" << endl;
        cout << " 1. Input " << endl;
        cout << " 2. Output " << endl;
        cout << " 3. Sort " << endl;
        cout << " 5. Exits" << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        if(op == 1){
            cout << endl << "Input Number Of Worker : ";
            cin >> n;
            for(int i = 0; i < n; i++){
                // Input(arr,i);
                Input(wk,i);
            }
        }
        if(op == 2){
            Header();
            for(int i = 0; i < n; i++){
                // Display(arr,i);
                Display(wk,i);
            }
        }
        if(op == 3){
            for(int i = 0; i < n; i++){
                for(int j = i+1; j < n; j++){
                    if((wk+i)->obj.income < (wk+j)->obj.income){
                         tem     = *(wk+i);
                        *(wk+i) = *(wk+j);
                        *(wk+j) = tem;
                    }
                }
            }
            cout << endl << "Sort Is Successful ..!" << endl;
        }
    }while(op != 5);
    free(wk);
    return 0;
}
void Header(){
    cout << endl << "ID" << setw(10) << "Name" << setw(10) << "Salary"
         << setw(10) << "Rate" << setw(10) << "Hour" << setw(10)
         << "Income\n" <<endl;
}
void Input(Object *wk,int index){
    cout << endl << "Input ID       : "; cin >> (wk+index)->id;
    cout << "Input Name     : ";cin.ignore(),getline(cin,(wk+index)->name);
    cout << "Input Salary   : ";cin >> (wk+index)->obj.salary;
    cout << "Input Rate     : ";cin >> (wk+index)->obj.rate;
    cout << "Input Hour     : ";cin >> (wk+index)->obj.hour;
    (wk+index)->obj.income = ((wk+index)->obj.salary + ((wk+index)->obj.rate * (wk+index)->obj.hour));
}
void Display(Object *wk,int index){
    cout << (wk+index)->id << setw(10) << (wk+index)->name << setw(9)
         << (wk+index)->obj.salary << "$" << setw(10) << (wk+index)->obj.rate << setw(10)
         << (wk+index)->obj.hour << setw(9) << (wk+index)->obj.income << "$" <<endl;
}

/*
    Home Work

    Search
    Insert
    Sort
*/