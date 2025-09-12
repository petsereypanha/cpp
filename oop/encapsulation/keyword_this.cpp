#include"../index.h"
class Users{
    private:
        int id;
        string password,name,phone;
        float salary;
    public:
        Users();
        Users(int id,string name,string password,string phone,float salary);
        int getId();
        string getName();
        void setName(string name);
        void setPassword(string password);
        void setSalary(float salary);
        void Input();
        void Header();
        void Output();
};
// @Class Method
Users::Users(){};
Users::Users(int id,string name,string password,string phone,float salary){
    this->id = id;
    this->name = name;
    this->password = password;
    this->phone = phone;
    this->salary = salary;
}
int Users::getId(){
    return this->id;
};
string Users::getName(){
    return this->name;
};
void Users::setName(string name){
    this->name = name;
};
void Users::setPassword(string password){
    this->password = password;
};
void Users::setSalary(float salary){
    this->salary = salary;
};
void Users::Input(){
    cout << endl << "Input ID     : "; cin >> id;
    cout << "Input Name   : "; cin.ignore();getline(cin,name);
    cout << "Input Pass   : "; cin.ignore();getline(cin,password);
    cout << "Input Phone  : "; cin.ignore();getline(cin,phone);
    cout << "Input Salary : "; cin >> salary;
};
void Users::Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "NAME" << setw(10)
         << "Password" << setw(10) << "Phone" << setw(10) << "Salary\n" << endl;
};
void Users::Output(){
    cout << setw(10) << id << setw(10) << name << setw(10)
         << password << setw(10) << phone << setw(10) << salary << endl;
};
// @Main Function
int main(){
    system("clear");
    int op,n,arg=3;
    Users obj[10],obj1(1,"Kang","12345","092222222",933.6F),sub;
    string Args[] = {
        "1. Contructor with Paramter",
        "2. Input",
        "3. Output",
        "4. Exist"
    };
    do{
        Menu_Arr(Args,arg);
        cin >> op;
        if(op==1){
            sub.Header();
            obj1.Output();
        }break;
        if(op==2){
            cout << endl << "Input Number Of Users  : ";
            cin >> n;
            for(int i = 0; i < n; i++){
                obj[i].Input();
            }
        }break;
        if(op==3){
            sub.Header();
            for(int i = 0; i < n; i++){
                obj[i].Output();
            }
        }break;
    }while(op != 4);
    return 0;
}

// Home Work
/*
    Search() by (id and name);
    Update() name,password,salary;
    Insert() by (id and name);
    Delete()
*/