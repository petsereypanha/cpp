#include"head.h"
struct Persion{
    int id;
    string name,gender;
    float salary;
    struct Time{
       int hour;
       float rate;
       string dob;
    }tm;
} *object;
void Header();
void Input(Persion *object,int index);
void Output(Persion *object,int index);
double Total(Persion *object,int index);
double Income(Persion *object,int index);
int main(){
    system("clear");
    int n,op,m;
    object = (struct Persion *)calloc(n,sizeof(struct Persion));
    Again:{

        cout << endl << "=================| MENU |===================" << endl;
        cout << " 1. Input " << endl;
        cout << " 2. Output " << endl;
        cout << " 3. Search " << endl;
        cout << " 4. Add More " << endl;
        cout << " 5. Exit " << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        if(op == 1){
            cout << endl << "Input Number Of Perion : ";
            cin >> n;
            for (int i = 0; i < n; i++){
                Input(object,i);
            }
        }
        if(op == 2){
            Header();
            for(int i = 0; i < n; i++){
                Output(object,i);
            }
        }
        if(op == 3){
            string name;
            bool b = false;
            cout << endl << "Input Name To Search : ";
            cin >> name;
            for(int i = 0; i < n; i++){
                if(name == (object+i)->name){
                    Header();
                    Output(object,i);
                    b = true;
                    cout << endl << "Search Is Successful ..!" <<endl;
                }
            }
            if(b == false){
                cout << endl << "Search Is Not Found ..!" <<endl;
            }
        }
        if(op == 4){
            cout << endl << "Input Number To Add : ";
            cin >> m;
            object = (struct Persion*)realloc(object,m*sizeof(struct Persion));
            for(int i = n; i < n+m; i++){
                Input(object,i);
            }
            n += m;
            cout << endl << "Add Is Successfull ..!" << endl;
        }
    }if(op != 5) goto Again;
    free(object);
    return 0;
}
void Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name" << setw(10)
         << "Gender" << setw(10) << "Salary" << setw(10) << "Hour"
         << setw(10) << "Rate" << setw(15) << "DOB" << setw(10)
         << "Total" << setw(10) << "Income" << endl;
}
void Input(Persion *object,int index){
    cout << endl << "Input ID       :"; cin >> (object+index)->id;
    cout << "Input Name     :"; cin.ignore();getline(cin,(object+index)->name);
    cout << "Input Gender   :"; cin >> (object+index)->gender;
    cout << "Input Salary   :"; cin >> (object+index)->salary;
    cout << "Input Hour     :"; cin >> (object+index)->tm.hour;
    cout << "Input Rate     :"; cin >> (object+index)->tm.rate;
    cout << "Input DOB      :"; cin >> (object+index)->tm.dob;
}
void Output(Persion *object,int index){
    cout << setw(10) << (object+index)->id << setw(10) <<(object+index)->name << setw(10)
         << (object+index)->gender << setw(9) << (object+index)->salary << "$" << setw(10) << (object+index)->tm.hour
         << setw(10) << (object+index)->tm.rate << setw(15) << (object+index)->tm.dob << setw(10)
         << Total(object,index) << setw(9) << Income(object,index) << "$" << endl;
}
double Total(Persion *object,int index){
    double allTotal;
    allTotal = (object+index)->tm.hour * (object+index)->tm.rate;
    return allTotal;
}
double Income(Persion *object,int index){
    return (
        Total(object,index) + (object+index)->salary
    );
}



/*
Home Work
    Book_Store {
        id,name,category;
        Data{
            qty,price;
            discount;
        }
    }

*/