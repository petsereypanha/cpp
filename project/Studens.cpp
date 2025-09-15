#include <iostream>
#include<string>
#include <fstream>
using namespace std;
bool IsLoggedIn(){
    string password,pw;
    cout << "Enter Password :"; cin >> password;
    ifstream read("logfile.txt");
    getline(read,pw);
    if(pw == password){
        return true;
    }else{
        return false;
    }
}
struct Studens
{
    int id;
    string name,gender;
    double score;
}st[50],tem[50],tempsort;
int main(){
    int choice;
    cout << "1. Register\n2. Login\nPlease Choice :"; cin >> choice;
    if(choice == 1){
        string password;
        cout << "Select a Password :"; cin >> password;
        ofstream file;
        file.open("logfile.txt");
        file << password;
        file.close();
        main();
    }else if(choice == 2){
        bool status = IsLoggedIn();
        if(!status){
            string password;
            ifstream read("logfile.txt");
            getline(read,password);
            cout << "False Login !" << endl;
            cout << "True Password :" << password << endl;
            system("PAUSE");
            return 0;
        }else{
            fstream stu,temp;
            int op,i,j,n;
            cout << "Succesfully  Logged in!" << endl;
            Again:
               cout << endl << "1. Input " << endl;
               cout << "2. Ouput " << endl;
               cout << "3. Sort  " << endl;
               cout << "4. Exit  " << endl;
               cout << "Please Select One Option :"; cin >> op;
               switch(op){
                    case 1:{
                        stu.open("student.bin",ios::out|ios::app|ios::binary);
                        if(!stu){
                            cout << "Error! in creating file ...!";
                            exit(0);
                        }
                        cout << "Input Number Of Record :";cin >> n;
                        for(i=0;i<n;i++){
                            cout << "\n______________| Record #" << i+1 << " |_______________" <<endl;
                            cout << "Input ID     :";cin >> st[i].id;
                            cout << "Input Name   :";cin >> st[i].name;
                            cout << "Input Gender :";cin >> st[i].gender;
                            cout << "Input Score  :";cin >> st[i].score;
                            stu.write(reinterpret_cast<char*>(&st[i]),sizeof(st));
                        }
                        stu.close();
                    }break;
                    case 2:{
                        stu.open("student.bin",ios::in|ios::binary);
                        if(!stu){
                            cout << "Error! in opening file ..!\n";
                            exit(0);
                        }
                        cout << setw(12) << "ID" << setw(14) << "Name" << setw(16) << "Gender" << setw(15) << "Score" << endl;
                        while(stu.read(reinterpret_cast<char*>(&st[i]),sizeof(st))){
                                cout << setw(12) << st[i].id << setw(14) << st[i].name << setw(16) << st[i].gender << setw(15) << st[i].score << endl;
                        }
                        stu.close();
                    }break;
                    case 3:{
                        int op,count=0;
                            cout << endl << "1. Sort By Name " << endl;
                            cout << "2. Sort By Score " << endl;
                            cout << "Please Select One Option  :"; cin >> op;
                                if(op == 1){
                                    temp.open("Temp.bin",ios::out|ios::app|ios::binary);
                                    stu.open("student.bin",ios::in|ios::binary);
                                    while(stu.read(reinterpret_cast<char*>(&st[i]),sizeof(st))){
                                        st[i] = tem[count] ;
                                        count++;
                                    }
                                    stu.clear();
                                    remove("student.bin");
                                    for(i=0;i<count;i++){
                                        for(j=i+1;j<count;j++){
                                            if(tem[i].name < tem[i].name){
                                                tempsort = tem[i];
                                                tem[i] = tem[j];
                                                tem[j] = tempsort;
                                            }
                                        }
                                        temp.write(reinterpret_cast<char*>(&tem[i]),sizeof(tem));
                                    }
                                    cout << "Sort Is Completed ..!" << endl;
                                    temp.close();
                                    stu.close();
                                    remove("student.bin");
                                    rename("Temp.bin","student.bin");
                                }
                                else if(op == 2){
                                    temp.open("Temp.bin",ios::out|ios::app|ios::binary);
                                    stu.open("student.bin",ios::in|ios::binary);
                                    while(stu.read(reinterpret_cast<char*>(&st[i]),sizeof(st))){
                                        st[i] = tem[count] ;
                                        count++;
                                    }
                                    for(i=0;i<count;i++){
                                        for(j=i+1;j<count;j++){
                                            if(tem[i].score > tem[i].score){
                                                tempsort = tem[i];
                                                tem[i] = tem[j];
                                                tem[j] = tempsort;
                                            }
                                        }
                                        temp.write(reinterpret_cast<char*>(&tem[i]),sizeof(tem));
                                    }
                                    cout << "Sort Is Completed ..!" << endl;
                                    temp.close();
                                    stu.close();
                                    remove("student.bin");
                                    rename("Temp.bin","student.bin");
                                }
                    }break;
                    case 4:{
                        exit(0);
                    }break;
               }
            if(op!=10) goto Again;
        }
    }
    return 0;
}