#include<iomanip>
#include<iostream>
class Persion{
    private:
        int id,age,hour;
        string name;
        float salary;
    public:
        static float tax,rate;
    public:
        Persion();
        Persion(int id,string name,int age,int hour,float salary);
        void Input();
        float Income();
        void Output();
        friend void Header();
};
// @Classs Method
float Persion::rate = 5.4F;
float Persion::tax = 7.2F;
Persion::Persion(){};
Persion::Persion(int id,string name,int age,int hour,float salary){
    this->id = id;
    this->name = name;
    this->age = age;
    this->hour = hour;
    this->salary = salary;
};
void Persion::Input(){
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Name     : "; cin.ignore();getline(cin,name);
    cout << "Input Age      : "; cin >> age;
    cout << "Input Hour     : "; cin >> hour;
    cout << "Input Salary   : "; cin >> salary;
}
float Persion::Income(){
    return (
        (salary) + (rate*hour) - (salary*tax)/100
    );
};
void Persion::Output(){
    cout << setw(10) << id << setw(10) << name << setw(10)
         << age << setw(10) << hour << setw(9) << salary << "$" << setw(9)
         << Income() << "$" << endl;
};
void Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name" << setw(10)
         << "Age" << setw(10) << "Hour" << setw(10) << "Salary" << setw(10)
         << "Income" << endl << endl;
};
int main(){
    system("clear");
    int n,menu_n = 4;
    char op;
    Persion *obj,obj_p(0,"Jing",34,0,900);
    string arg_menu[] = {
        "   A. Contructor ",
        "   B. Input ",
        "   C. Output ",
        "   E. Exit ",
    };
    Again:{
        Menu_Arr(arg_menu,menu_n);
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                Header();
                obj_p.Output();
            }break;
            case 'B':
            case 'b':{
                cout << "\nInput Number of Persion : ";
                cin >> n;
                obj = new Persion[n];
                for(int i = 0; i < n; i++){
                    // obj[i].Input();
                    (obj+i)->Input();
                }
            }break;
            case 'C':
            case 'c':{
                Header();
                for(int i = 0; i < n; i++){
                    // obj[i].Output();
                    (obj+i)->Output();
                }
            }break;
            case 'E':
            case 'e':{
                exit(0);
            }break;
        }
    }if(getchar() == 10) goto Again;
    delete[] obj;
    return 0;
}



/*
class Student{
    private:
        int code,age;
        string name,gender;
        float score1,score2,score3,score4;
    public:
        Student();
        Student(param);
        void Input();
        float Total();
        float Avg();
        char Grad();
        void Output();
        void Header();
};
*/