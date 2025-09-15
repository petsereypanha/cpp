#include"color.h"
using namespace std;
fstream twl,temp;
bool f=false;
class Science{
    private:
        int id,table;
        char name[70],gender[10],room[10],center[20],dfb[50];  // dfb=date of birth
        double math,biology,history,khmer,physics,chemistry,english;
    public:
        int    getID();
        char  *getName();
        void   Input();
        double Total();
        double Total_Rank();
        char   Math();
        char   Sub75(double x);
        char   Sub50(double y);
        // char   SubE50(double Z);
        char   Grade();
        void   Output();
        void   falseGrade();
        void   color (char sub);
};
int Science::getID(){
    return id;
}
char *Science::getName(){
    return name;
}
void Science::Input(){
    green();
    cout << "Input ID              :"; cin >> id;
    cout << "Input Name            :"; cin.ignore();cin.getline(name,70);
    cout << "Input Gender          :"; cin >> gender;
    cout << "Input Date_Of_Birth   :"; cin.ignore();cin.getline(dfb,50);
    cout << "Input Table           :"; cin >> table;
    cout << "Input Room            :"; cin >> room;
    cout << "Input Center          :"; cin >> center;
    do{
        cout << "Input Math      |125| :"; cin >> math;
        cout << "Input Biology   |75|  :"; cin >> biology;
        cout << "Input Khmer     |75|  :"; cin >> khmer;
        cout << "Input Physics   |75|  :"; cin >> physics;
        cout << "Input Chemistry |75|  :"; cin >> chemistry;
        cout << "Input History   |50|  :"; cin >> history;
        cout << "Input English   |50|  :"; cin >> english;
        if((math<=0||math>=125.01)){cout << "\n Input Math Again ..!\n\n";}
        if((biology<=0||biology>=75.01)){cout<< "\n Input Biology Again ...!\n\n";}
        if((khmer<=0||khmer>=75.01)){cout<< "\n Input Khmer Again ...!\n\n";}
        if((physics<=0||physics>=75.01)){cout<< "\n Input Physics Again ...!\n\n";}
        if((chemistry<=0||chemistry>=75.01)){cout<< "\n Input Chemistry Again ...!\n\n";}
        if((history<=0||history>=50.01)){cout<< "\n Input History Again ...!\n\n";}
        if((english<=0||english>=50.01)){cout<< "\n Input English Again ...!\n\n";}
    }while ((math<=0||math>=125.01)|
            (biology<=0||biology>=75.01)|
            (khmer<=0||khmer>=75.01)|
            (physics<=0||physics>=75.01)|
            (chemistry<=0||chemistry>=75.01)|
            (history<=0||history>=50.01)|
            (english<=0||english>=50.01));
            history = history-25;
            english = english-25;
    reset();
}
double Science::Total(){
    return (math+biology+history+khmer+physics+chemistry+english);
}
double Science::Total_Rank(){
    return (Total()/4.75);
}
char Science::Math(){
    return  (math<=125 && math>=112)?  'A'
            :(math<112 && math>=100)? 'B'
            :(math<100 && math>=87)?  'C'
            :(math<87 && math>=75)?   'D'
            :(math<75 && math>=62)?   'E'
            :'F';
}
char Science::Sub75(double x){
     return (x<=75 && x>=67)? 'A'
            :(x<67 && x>=60)? 'B'
            :(x<60 && x>=52)? 'C'
            :(x<52 && x>=45)? 'D'
            :(x<45 && x>=37)? 'E'
            :'F';
}
char Science::Sub50(double z){
    return  (z<=25 && z>=20)? 'A'
            :(z<20 && z>=15)? 'B'
            :(z<15 && z>=10)? 'C'
            :(z<10 && z>=05)? 'D'
            :(z<05 && z>=0)? 'E'
            :'F';
}
char Science::Grade(){
    return  (Total()<=475 && Total()>=427)? 'A'
            :(Total()<427 && Total()>=380)? 'B'
            :(Total()<380 && Total()>=332)? 'C'
            :(Total()<332 && Total()>=285)? 'D'
            :(Total()<285 && Total()>=237)? 'E'
            :'F';
}
void Science::Output(){
    cout << right;
    cout << setfill('0') << setw(9) << id;
    cout << left << "   ";
    green();
    cout << left;
    cout << setfill(' ')  << setw(21) << name;
    reset();
    cout << setw(10)  << gender
         << setw(15) << dfb
         << setw(7)  << table
         << setw(8)  << room
         << setw(14) << center;
    red();
    cout << setw(15) << Total();
    reset();
    cout << setw(14) << Total_Rank();
    color(Math());
    cout << setw(8)  << Math();
    reset();
    color(Sub75(biology));
    cout << setw(9) << Sub75(biology);
    reset();
    color(Sub75(khmer));
    cout << setw(9)  << Sub75(khmer);
    reset();
    color(Sub75(physics));
    cout << setw(11) << Sub75(physics);
    reset();
    color(Sub75(chemistry));
    cout<< setw(11) << Sub75(chemistry);
    reset();
    color(Sub50(history));
    cout << setw(10) << Sub50(history);
    reset();
    color(Sub50(english));
    cout << setw(9) << Sub50(english);
    reset();
    color(Grade());
    cout << Grade() << endl;
    reset();
}
void OpenFile_out(){
        twl.open("Science.bin",ios::out|ios::app|ios::binary);
        if(!twl){
            cout << "Error! in creating file ...!";
            exit(0);
        }
}
void OpenFile_in(){
        twl.open("Science.bin",ios::in|ios::binary);
        if(!twl){
            cout << "Error! in opening file ..!\n";
            exit(0);
        }
}
void OpenFile_two(){
        temp.open("Temp.bin",ios::out|ios::binary);
        if(!temp){
            cout << "Error In Creating File ..!\n";
            exit(0);
        }
        twl.open("Science.bin",ios::in|ios::binary);
        if(!twl){
            cout << "Error! In Opening File ..!\n";
            exit(0);
        }
}
void Close_Search(){
        if(f==false){
            cout << "\nSearch ID Not Found ..!" << endl;
        }
        twl.close();
}
void Close_two(){
        if(f==false){
            cout << "\nSearch ID Not Found ..!" << endl;
        }
        twl.close();
        temp.close();
        remove("Science.bin");
        rename("Temp.bin","Science.bin");
}
void Close_Sort(){
        cout << "\nSort Successful ..!" << endl ;
        temp.close();
        twl.close();
        remove("Science.bin");
        rename("Temp.bin","Science.bin");
}
void Science::color( char sub){             // function return error
  return (sub=='A')? (colorGradeA())
        :(sub=='B')? (colorGradeB())
        :(sub=='C')? (colorGradeC())
        :(sub=='D')? (colorGradeD())
        :(sub=='E')? (colorGradeE())
        :(colorGradeF());
}
void Science::falseGrade(){
    if(Grade()=='F'){
        False();
    }
}
int main(){
    system("clear");
    Science scn,scn1,scn2,arr[1000];
    int i,j,n,op1,index=0;
    char op;
    int sid;
    char sname[70];
    Again:
        cyan();
        cout << "\n==================================================================| M E N U |=================================================================" << endl;
        cout << "|                                                                                                                                            |" << endl;
        cout << "|                                                                   A. Write                                                                 |" << endl;
        cout << "|                                                                   B. Read                                                                  |" << endl;
        cout << "|                                                                   C. Search                                                                |" << endl;
        cout << "|                                                                   D. Update                                                                |" << endl;
        cout << "|                                                                   E. Delete                                                                |" << endl;
        cout << "|                                                                   F. Insert                                                                |" << endl;
        cout << "|                                                                   G. Sort                                                                  |" << endl;
        cout << "|                                                                   H. Append                                                                |" << endl;
        cout << "|                                                                   I. Exit                                                                  |" << endl;
        cout << "|                                                                                                                                            |" << endl;
        cout << "==============================================================================================================================================" << endl;
        reset();
        blue();
        cout << "Please Choose One Option :";
        cin >> op;
        reset();
        switch (op){
            case 'a':
            case 'A':{
                OpenFile_out();
                cout << "Input number of Student :";cin >>n;
                for(i=0;i<n;i++){
                    yellow();
                    cout << "\n________________________| Student # " << i+1 << "|_________________________" << endl;
                    reset();
                    scn.Input();
                    twl.write((char*)&scn,sizeof(scn));
                }
                twl.close();
            }break;
            case 'b':
            case 'B':{
                OpenFile_in();
                Header();
                while(twl.read((char*)&scn,sizeof(scn))){
                    scn.falseGrade();
                    scn.Output();
                    reset();
                }
                twl.close();
            }break;
            case 'c':
            case 'C':{
                do{
                    green();
                    cout << "========| Search |=========" << endl;
                    cout << " 1. Search By ID " << endl;
                    cout << " 2. Search By Name " << endl;
                    cout << " 3. Exit " << endl;
                    cout << "=========--------==========" <<endl;
                    reset();
                    cout << " Please Choose One Option :";cin >> op1;
                    switch(op1){
                        case 1:{
                            OpenFile_in();
                            cout << "Input Student's ID For Search :";cin >> sid;
                            while (twl.read((char*)&scn,sizeof(scn)))
                            {
                                if(sid==scn.getID()){
                                    Header();
                                    scn.Output();
                                    f=true;
                                }
                            }
                            Close_Search();
                        }break;
                        case 2:{
                            OpenFile_in();
                            cout << "Input Student's Name For Search :";cin >> sname;
                            while (twl.read((char*)&scn,sizeof(scn)))
                            {
                                if(strcmp(sname,scn.getName())==0){
                                    Header();
                                    scn.Output();
                                    f=true;
                                }
                            }
                            Close_Search();
                        }break;
                    }
                }while(op1!=3);
            }break;
            case 'd':
            case 'D':{
                OpenFile_two();
                cout << "Input Student's ID For Search To Update :";cin >> sid;
                while (twl.read((char*)&scn,sizeof(scn)))
                {
                    if(sid==scn.getID()){
                        scn.Input();
                        temp.write((char*)&scn,sizeof(scn));
                        f=true;
                        cout << "\n Upadte Successful ..!\n" << endl;
                    }else{
                        temp.write((char*)&scn,sizeof(scn));
                    }
                }
                Close_two();
            }break;
            case 'e':
            case 'E':{
                OpenFile_two();
                cout << "Input Student's ID For Search To Delete :";cin >> sid;
                while (twl.read((char*)&scn,sizeof(scn)))
                {
                    if(sid==scn.getID()){
                        f=true;
                        cout << "\n Delete Successful ..!\n" << endl;
                    }else{
                        temp.write((char*)&scn,sizeof(scn));
                    }
                }
                Close_two();
            }break;
            case 'f':
            case 'F':{
                OpenFile_two();
                cout << "Input Student's ID For Search To Insert :";cin >> sid;
                while (twl.read((char*)&scn,sizeof(scn)))
                {
                    if(sid==scn.getID()){
                        scn1.Input();
                        temp.write((char*)&scn1,sizeof(scn1));
                        temp.write((char*)&scn,sizeof(scn));
                        f = true;
                        cout << "\n Insert Successful ..!\n";
                    }else {
                        temp.write((char*)&scn,sizeof(scn));
                    }
                }
                Close_two();
            }break;
            case 'g':
            case 'G':{
                do{
                    green();
                    cout << "=========| Sort |==========" << endl;
                    cout << " 1. Sort By Grade " << endl;
                    cout << " 2. Sort By Total_Ranking " << endl;
                    cout << " 3. Exit " << endl;
                    cout << "=========--------==========" <<endl;
                    reset();
                    cout << " Please Choose One Option :";cin >> op1;
                    switch (op1){
                        case 1:{
                            OpenFile_two();
                            while (twl.read((char*)&scn,sizeof(scn))){
                                arr[index]=scn;
                                index++;
                            }
                            twl.clear();
                            remove("Science.bin");
                            for(i=0;i<index;i++){
                                for(j=i+1;j<index;j++){
                                    if(arr[i].Grade()>arr[j].Grade()){
                                        scn2=arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=scn2;
                                    }
                                }
                                temp.write((char*)&arr[i],sizeof(arr[i]));
                            }
                            Close_Sort();
                        }break;
                        case 2:{
                            OpenFile_two();
                            while (twl.read((char*)&scn,sizeof(scn))){
                                arr[index]=scn;
                                index++;
                            }
                            twl.clear();
                            remove("Science.bin");
                            for(i=0;i<index;i++){
                                for(j=i+1;j<index;j++){
                                    if(arr[i].Total_Rank()>arr[i].Total_Rank()){
                                        scn2=arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=scn2;
                                    }
                                }
                                temp.write((char*)&arr[i],sizeof(arr[i]));
                            }
                            Close_Sort();
                        }break;
                    }
                }while (op1!=3);
            }break;
            case 'h':
            case 'H':{
                twl.open("Science.bin",ios::app|ios::binary);
                if(!twl){
                    cout << "Error! in creating file ...!";
                    exit(0);
                }
                cout << "Input Number Of Student's To Append :";cin >> n;
                for(i=0;i<n;i++){
                    yellow();
                    cout << "\n________________________| Student # " << i+1 << "|_________________________" << endl;
                    reset();
                    scn.Input();
                    twl.write((char*)&scn,sizeof(scn));
                }
                twl.close();
                cout << "\nAppend Successful ..!" << endl;
            }break;
            case 'i':
            case 'I':{
                green();
                cout << "THE END" << endl;
                reset();
                exit(0);
            }break;
        }
    if(getchar()==10) goto Again;
    return 0;
}