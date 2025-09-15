#include"./index.h"
class Woker{
    private:
        int id,hour;
        char name[20];
        float salary,rate,income;
    public:
        static float tax;
    public:
        char* getName();
        void Input();
        void Output();
        friend void Header();
};
float Woker::tax = 0.5;
char* Woker::getName(){
    return name;
};
void Woker::Input(){
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Name     : "; cin.ignore();cin.getline(name,20);
    cout << "Input Hour     : "; cin >> hour;
    cout << "Input Rate     : "; cin >> rate;
    cout << "Input Salary   : "; cin >> salary;
    income = ((salary) + (rate*hour) - ((salary) + (rate*hour))*tax);
}
void Woker::Output(){
    cout << setw(5) << id << setw(15) << name << setw(10) << hour
         << setw(10) << rate << setw(10) << tax << setw(9) << salary
         << "$" << setw(9) << income << "$" << endl;
}
void Header(){
    cout << endl << setw(5) << "ID" << setw(15) << "Name" << setw(10) << "Hour"
         << setw(10) << "Rate" << setw(10) << "Tax" << setw(10) << "Salary"
         << setw(10) << "Income" << endl;
}
int main(){
    system("clear");
    Woker wk,obj;
    int n,op;
    fstream NIT,temp;
    do{
        cout << endl << "===============| MENU |==================" << endl;
        cout << "   1. Write " << endl;
        cout << "   2. Read  " << endl;
        cout << "   3. Search  " << endl;
        cout << "   4. Update  " << endl;
        cout << "   5. Delete  " << endl;
        cout << "   6. Insert  " << endl;
        cout << "   7. Add  " << endl;
        cout << "   8. Exite  " << endl;
        cout << "Please Select One Oprion : ";
        cin >> op;
        if(op == 1){
            NIT.open("./data_text/woker.dat",ios::out|ios::binary);
            if(!NIT){
                cout << endl << "Create File Error ..!" << endl;
                exit(0);
            }
            cout << endl << "Input Number Of Woker : ";cin >> n;
            for(int i = 0; i < n; i++){
                wk.Input();
                NIT.write((char*)&wk,sizeof(wk));
            }
            NIT.close();
        }
        if(op == 2){
            NIT.open("./data_text/woker.dat",ios::in|ios::binary);
            if(!NIT){
                cout << endl << "Open File Error ..!" << endl;
                exit(0);
            }
            Header();
            while(NIT.read((char*)&wk,sizeof(wk))){
                wk.Output();
            }
            NIT.close();
        }
        if(op == 3){
            NIT.open("./data_text/woker.dat",ios::in|ios::binary);
            if(!NIT){
                cout << endl << "Open File Error ..!" << endl;
                exit(0);
            }
            char sname[20];
            cout << endl << "Input Woker Name : ";cin.ignore().getline(sname,20);
            while(NIT.read((char*)&wk,sizeof(wk))){
                if(strcmp(sname,wk.getName())==0){
                    Header();
                    wk.Output();
                }
            }
            NIT.close();
        }
        if(op == 4){
            NIT.open("./data_text/woker.dat",ios::in|ios::binary);
            if(!NIT){
                cout << endl << "Open File Error ..!" << endl;
                exit(0);
            }
            temp.open("temp.dat",ios::out|ios::binary);
            if(!temp){
                cout << endl << "Create File Error ..!" << endl;
                exit(0);
            }
            char sname[20];
            cout << endl << "Input Woker Name : ";cin.ignore().getline(sname,20);
            while(NIT.read((char*)&wk,sizeof(wk))){
                 if(strcmp(sname,wk.getName())==0){
                    wk.Input();
                    temp.write((char*)&wk,sizeof(wk));
                 }else{
                    temp.write((char*)&wk,sizeof(wk));
                 }
            }
            NIT.close();
            temp.close();
            remove("./data_text/woker.dat");
            rename("temp.dat","./data_text/woker.dat");
        }
        if(op == 5){
            NIT.open("./data_text/woker.dat",ios::in|ios::binary);
            if(!NIT){
                cout << endl << "Open File Error ..!" << endl;
                exit(0);
            }
            temp.open("temp.dat",ios::out|ios::binary);
            if(!temp){
                cout << endl << "Create File Error ..!" << endl;
                exit(0);
            }
            char sname[20];
            cout << endl << "Input Woker Name : ";cin.ignore().getline(sname,20);
            while(NIT.read((char*)&wk,sizeof(wk))){
                 if(strcmp(sname,wk.getName())==0){
                    cout << "Remove Woker Success !" << endl; 
                 }else{
                    temp.write((char*)&wk,sizeof(wk));
                 }
            }
            NIT.close();
            temp.close();
            remove("./data_text/woker.dat");
            rename("temp.dat","./data_text/woker.dat");
        }
        if(op == 6){
            NIT.open("./data_text/woker.dat",ios::in|ios::binary);
            if(!NIT){
                cout << endl << "Open File Error ..!" << endl;
                exit(0);
            }
            temp.open("temp.dat",ios::out|ios::binary);
            if(!temp){
                cout << endl << "Create File Error ..!" << endl;
                exit(0);
            }
            char sname[20];
            cout << endl << "Input Woker Name : ";cin.ignore().getline(sname,20);
             while(NIT.read((char*)&wk,sizeof(wk))){
                 if(strcmp(sname,wk.getName())==0){
                   obj.Input();
                   temp.write((char*)&obj,sizeof(obj));
                   temp.write((char*)&wk,sizeof(wk));
                 }else{
                    temp.write((char*)&wk,sizeof(wk));
                 }
            }
            NIT.close();
            temp.close();
            remove("./data_text/woker.dat");
            rename("temp.dat","./data_text/woker.dat");
        }
        if(op == 7){
            NIT.open("./data_text/woker.dat",ios::app|ios::binary);
            if(!NIT){
                cout << endl << "Create File Error ..!" << endl;
                exit(0);
            }
            cout << endl << "Input Number Of Woker : ";cin >> n;
            for(int i = 0; i < n; i++){
                wk.Input();
                NIT.write((char*)&wk,sizeof(wk));
            }
            NIT.close();
        }
    }while(op != 8);
    return 0;
}