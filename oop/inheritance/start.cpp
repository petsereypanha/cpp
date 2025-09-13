#include"../index.h"
class Parent{
    private:
        int id;
        string name;
    public:
        string getName();
        void Input();
        void Output();
        friend void Header_Parent();
};
class Childrent: public Parent{
    private:
        string gender;
        float salary;
    public:
        void Input();
        void Output();
        friend void Header_Childrent();
};
// @Parent Class Method
string Parent::getName(){
    return name;
};
void Parent::Input(){
    cout << endl << "Input ID     : "; cin >> id;
    cout << "Input Name   : "; cin.ignore();getline(cin,name);
}
void Parent::Output(){
    cout << setw(10) << id << setw(10) << name;
}
void Header_Parent(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name";
}
// @Childrent Class Method
void Childrent::Input(){
    Parent::Input();
    cout << "Input Gender : "; cin >> gender;
    cout << "Input Slary  : "; cin >> salary;
}
void Childrent::Output(){
    Parent::Output();
    cout << setw(10) << gender << setw(9) << salary << "$" << endl;
}
void Header_Childrent(){
    Header_Parent();
    cout << setw(10) << "Gender" << setw(10) << "Salary\n" << endl;
}
// @Main Function
int main(){
    system("clear");
    // Parent *obj;
    Childrent *obj;
    int n,arg_num=4;
    char op;
    string arg[] = {
        "   A. Input",
        "   B. Output",
        "   C. Search",
        "   D. Exist"
    };
    do{
        Menu_Arr(arg,4);
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                cout << "\nInput Elment Of Product : ";
                cin >> n;
                // obj = new Parent[n];
                obj = new Childrent[n];
                for(int i = 0; i < n; i++){
                    obj[i].Input();
                }
            }break;
            case 'B':
            case 'b':{
                Header_Childrent();
                for(int i = 0; i < n; i++){
                    obj[i].Output();
                }
            }break;
            case 'C':
            case 'c':{
                string sname;
                cout << endl << "Input Name To Search : ";
                cin >> sname;
                for (int i = 0; i < n; i++){
                    if(sname == obj[i].getName()){
                        Header_Childrent();
                        obj[i].Output();
                    }
                }
            }break;
            case 'D':
            case 'd':{
                exit(0);
            }break;
        }
    }while(getchar() == 10);
    delete[] obj;
    return 0;
}


/*
    private
    protected
    public
*/