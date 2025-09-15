#include<iostream>
#include<iomanip>
using namespace std;
class Lecturer{
    protected:
         int id;
         string name,gender;
    public:
        Lecturer();
        Lecturer(int id, string name, string gender);
        void Input();
        void Output();
};
Lecturer::Lecturer(){
    id=0;
    name="N/A";
    gender="N/A";
}
Lecturer::Lecturer(int id, string name, string gender){
    this->id=id;
    this->name=name;
    this->gender=gender;
}
void Lecturer::Input(){
    cout << "Input ID          :";cin >> id;
    cout << "Input Name        :";cin.ignore();getline(cin,name);
    cout << "Input Gender      :";cin >> gender;
}
void Header_Lecturer(){
    cout << setw(10) << "ID"
         << setw(12) << "Name"
         << setw(14)<< "Gender";
}
void Lecturer::Output(){
    cout << setw(10) << id
         << setw(12) << name
         << setw(14)<< gender;
}
class Department:protected Lecturer{
    protected:
        string department,university,classroom;
    public:
        Department();
        Department(int id, string name, string gender,string department, string university, string classroom);
        void Input();
        void Output();
};
Department::Department(){
    Lecturer:Lecturer();
    department="N/A";
    university="N/A";
    classroom="N/A";
}
Department::Department(int id, string name, string gender,string department, string university, string classroom){
    this->id=id;
    this->name=name;
    this->gender=gender;
    this->department=department;
    this->university=university;
    this->classroom=classroom;
}
void Department::Input(){
    Lecturer::Input();
    cout << "Input Departmentb :";cin >> department;
    cout << "Input University  :";cin >> university;
    cout << "Input ClassRoom   :";cin >> classroom;
}
void Header_Department(){
    Header_Lecturer();
    cout << setw(19) << "Department"
         << setw(18) << "University"
         << setw(17) << "ClassRoom";
}
void Department::Output(){
    Lecturer::Output();
    cout << setw(19) << department
         << setw(18) << university
         << setw(17) << classroom;
}
class Mark{
    protected:
       float c_program,khmer,math,eletronic,fundamantal;
       float avg,total,gpa;
    public:
       Mark();
       Mark(float c_program,float  khmer,float math,float eletronic,float fundamantal,float avg,float total,float gpa);
       void Input();
       void Output();
};
Mark::Mark(){
    c_program=0;
    khmer    =0;
    math     =0;
    eletronic=0;
    fundamantal=0;
    avg      =0;
    total    =0;
    gpa      =0;
    
}
Mark::Mark(float c_program,float  khmer,float math,float eletronic,float fundamantal,float avg,float total,float gpa){
    this->c_program=c_program;
    this->khmer=khmer;
    this->math=math;
    this->eletronic=eletronic;
    this->fundamantal=fundamantal;
    this->avg=avg;
    this->total=total;
    this->gpa=gpa;
}
void Mark::Input(){
    cout << "Input C_Program   :";cin >> c_program;
    cout << "Input Khmer       :";cin >> khmer;
    cout << "Input Math        :";cin >> math;
    cout << "Input Eletronic   :";cin >> eletronic;
    cout << "Input Fundamental :";cin >> fundamantal;
    total = c_program+khmer+math+eletronic+fundamantal;
    avg = total/5;
        if(avg<=100 && avg>=93){
            gpa = 4.0;
        }
        else if(avg<93 && avg>=90){
            gpa = 3.7;
        }
        else if(avg<90 && avg>=87){
            gpa = 3.3;
        }
        else if(avg<87 && avg>=83){
            gpa = 3.0;
        }
        else if(avg<83 && avg>=80){
            gpa = 2.7;
        }
        else if(avg<80 && avg>=77){
            gpa = 2.3;
        }
        else if(avg<77 && avg>=73){
            gpa = 2.0;
        }
        else if(avg<73 && avg>=70)
        {
            gpa = 1.7;
        }
        else if(avg<70 && avg>=67){
            gpa = 1.3;
        }
        else if(avg<67 && avg>=65){
            gpa = 1.0;
        }
        else{
            if(avg<65 && avg>=1){
                gpa = 0;
            }
        }
}
void Header_Mark(){
    cout << setw(17) << "C_Program"
         << setw(13) << "Khmer"
         << setw(12)  << "Math"
         << setw(17) << "Eletronic"
         << setw(19) << "Fundamental"
         << setw(15) << "Total"
         << setw(13) << "Average"
         << setw(11)  << "GPA";
}
void Mark::Output(){
    cout << setw(17) << c_program
         << setw(13) << khmer
         << setw(12)  << math
         << setw(17) << eletronic
         << setw(19) << fundamantal
         << setw(15) << total
         << setw(13) << avg
         << setw(11)  << gpa;
}
class Student:protected Department ,protected Mark {
    private:
       string dob,place_of_brith;
    public:
       Student();
       Student(int id, string name, string gender,string department, string university, string classroom,float c_program,float  khmer,float math,float eletronic,float fundamantal,float avg,float total,float gpa,string dob,string place_of_brith);
       int getID();
       void Input();
       void Output();
};
Student::Student(){
    Department:Department();
    Mark:Mark();
    dob="00/00/00";
    place_of_brith="N/A";
}
Student::Student(int id, string name, string gender,string department, string university, string classroom,float c_program,float  khmer,float math,float eletronic,float fundamantal,float avg,float total,float gpa,string dob,string place_of_brith){
    this->id=id;
    this->name=name;
    this->gender=gender;
    this->department=department;
    this->university=university;
    this->classroom=classroom;
    this->c_program=c_program;
    this->khmer=khmer;
    this->math=math;
    this->eletronic=eletronic;
    this->fundamantal=fundamantal;
    this->avg=avg;
    this->total=total;
    this->gpa=gpa;
    this->dob=dob;
    this->place_of_brith=place_of_brith;
}
int Student::getID(){
     return id;
}
void Student::Input(){
    Department::Input();
    Mark::Input();
    cout << "Input Date_Of_Birth :";cin >> dob;
    cout << "Input Place_Of_Birth:";getline(cin,place_of_brith);
}
void Header_Studet(){
    Header_Department();
    Header_Mark();
    cout << setw(21) << "Date_Of_Birth"
         << setw(22) << "Place_Of_Birth"
         << endl;
}
void Student::Output(){
    Department::Output();
    Mark::Output();
    cout << setw(21) << dob
         << setw(22) << place_of_brith
         << endl;
}
int main(){
  system("clear");
   int j,i,n,op1;
   string op;
   bool b=false;
    Again:
        cout << "______________________| M E N U |________________________" << endl;
        cout << "A. Class Lecturer  " << endl;
        cout << "B. Class Department" << endl;
        cout << "C. Class Mark      " << endl;
        cout << "D. Class Student   " << endl;
        cout << "E. Exit            " << endl;
        cout << "_________________________________________________________" << endl;
        cout << "Please Select One Option :";
        cin >> op;
        switch(op[0]){
            case 'a':
            case 'A':{
                 do{ 
                   Lecturer lec[50];
                    cout << "_______________________| Lecturer |______________________" << endl;
                    cout << "1. Input  "                    << endl;
                    cout << "2. Output "                    << endl;
                    cout << "3. Default Constructor"        << endl;
                    cout << "4. Constructor With Parameter" << endl;
                    cout << "5. Exit   "                    << endl;
                    cout << "_________________________________________________________" << endl;
                    cout << "Please Choose One Option  :" ;
                    cin >> op1;
                    switch(op1){
                        case 1:{
                            cout << "Input Element of Lecturer :";
                            cin >> n;
                            for(i = 0;i < n; i++){
                                cout << "___________________| Lecturer #" << i+1 << " |______________________" << endl;
                                lec[i].Input();
                            }
                        }break;
                        case 2:{
                            Header_Lecturer();
                            cout << endl;
                            for(i = 0; i < n; i++){
                                lec[i].Output();
                                cout << endl;
                            }
                        }break;
                        case 3:{
                            Lecturer lec1;
                            Header_Lecturer();
                            cout << endl;
                            lec1.Output();
                            cout << endl;
                        }break;
                        case 4:{
                            Lecturer lec2(1008,"SereyPanha","Male");
                            Header_Lecturer();
                            cout << endl;
                            lec2.Output();
                            cout << endl;
                        }break;
                    }
                }while (op1!=5);
            }break;
            case 'b':
            case 'B':{
                do{ 
                   Department dep[50];
                    cout << "______________________| Department |_____________________" << endl;
                    cout << "1. Input  "                    << endl;
                    cout << "2. Output "                    << endl;
                    cout << "3. Default Constructor"        << endl;
                    cout << "4. Constructor With Parameter" << endl;
                    cout << "5. Exit   "                    << endl;
                    cout << "_________________________________________________________" << endl;
                    cout << "Please Choose One Option  :" ;
                    cin >> op1;
                    switch(op1){
                        case 1:{
                            cout << "Input Element of  Deparrtment :";
                            cin >> n;
                            for(i = 0;i < n; i++){
                                cout << "_________________| Department #" << i+1 << " |______________________" << endl;
                                dep[i].Input();
                            }
                        }break;
                        case 2:{
                            Header_Department();
                            cout << endl;
                            for(i = 0; i < n; i++){
                                dep[i].Output();
                                cout << endl;
                            }
                        }break;
                        case 3:{
                            Department dep1;
                            Header_Department();
                            cout << endl;
                            dep1.Output();
                            cout << endl;
                        }break;
                        case 4:{
                            Department dep2(1008,"SereyPanha","Male","ICT","RUPP","304");
                            Header_Department();
                            cout << endl;
                            dep2.Output();
                            cout << endl;
                        }break;
                    }
                }while (op1!=5);
            }break;
            case 'c':
            case 'C':{
                 do{ 
                   Mark mark[50];
                    cout << "________________________| M a r k |______________________" << endl;
                    cout << "1. Input  "                    << endl;
                    cout << "2. Output "                    << endl;
                    cout << "3. Default Constructor"        << endl;
                    cout << "4. Constructor With Parameter" << endl;
                    cout << "5. Exit   "                    << endl;
                    cout << "_________________________________________________________" << endl;
                    cout << "Please Choose One Option  :" ;
                    cin >> op1;
                    switch(op1){
                        case 1:{
                            cout << "Input Element of  Deparrtment :";
                            cin >> n;
                            for(i = 0;i < n; i++){
                                cout << "______________________| Mark #" << i+1 << " |_______________________" << endl;
                                mark[i].Input();
                            }
                        }break;
                        case 2:{
                            Header_Mark();
                            cout << endl;
                            for(i = 0; i < n; i++){
                                mark[i].Output();
                                cout << endl;
                            }
                        }break;
                        case 3:{
                            Mark mark1;
                            Header_Mark();
                            cout << endl;
                            mark1.Output();
                            cout << endl;
                        }break;
                        case 4:{
                            Mark mark2(89,81,78,74,68,451,75.2,2.0);
                            Header_Mark();
                            cout << endl;
                            mark2.Output();
                            cout << endl;
                        }break;
                    }
                }while (op1!=5);
            }break;
            case 'd':
            case 'D':{
                do{ 
                   Student stu[50];
                    cout << "________________________| Student |______________________" << endl;
                    cout << "1. Input  "                    << endl;
                    cout << "2. Output "                    << endl;
                    cout << "3. Default Constructor"        << endl;
                    cout << "4. Constructor With Parameter" << endl;
                    cout << "5. Update "                    << endl;
                    cout << "6. Sort   "                    << endl;
                    cout << "7. Delete "                    << endl;
                    cout << "8. Exit   "                    << endl;
                    cout << "_________________________________________________________" << endl;
                    cout << "Please Choose One Option  :" ;
                    cin >> op1;
                    switch(op1){
                        case 1:{
                            cout << "Input Element of  Deparrtment :";
                            cin >> n;
                            for(i = 0;i < n; i++){
                                cout << "___________________| Student #" << i+1 << " |_______________________" << endl;
                                stu[i].Input();
                            }
                        }break;
                        case 2:{
                            Header_Studet();
                            cout << endl;
                            for(i = 0; i < n; i++){
                                stu[i].Output();
                                cout << endl;
                            }
                        }break;
                        case 3:{
                            Student stu1;
                            Header_Studet();
                            cout << endl;
                            stu1.Output();
                            cout << endl;
                        }break;
                        case 4:{
                            Student stu2(1008,"SereyPanha","Male","ICT","RUPP","304",89,81,78,74,68,451,75.2,2.0,"Nk_Tk_BTB","10/3/2002");
                            Header_Studet();
                            cout << endl;
                            stu2.Output();
                            cout << endl;
                        }break;
                        case 5:{
                            int sid;
                            cout << "Input ID To Search for Update :";
                            cin >> sid;
                            for(i = 0; i < n; i++){
                                if(sid==stu[i].getID()){
                                    stu[i].Input();
                                    b=true;
                                    cout << "Update Coompleted ..!" << endl;
                                }
                            }
                            if(b==false){
                                cout << "Search Is not Found ..!" << endl;
                            }
                        }break;
                        case 6:{
                            Student temp;
                            for(i = 0; i < n-1; i++){
                                for(j = i+i; j < n; j++){
                                    if(stu[i].getID()>stu[j].getID()){
                                        temp = stu[i];
                                        stu[i] = stu[j];
                                        stu[j] = temp;
                                    }
                                }
                            }
                            cout << "Sort Successful ..!" << endl;
                        }break;
                        case 7:{
                            int m;
                            cout << "Input Element of Student To Add :";
                            cin >> m;
                            for(i = n; i <  n+m; i++){
                                stu[i].Input();
                            }
                            cout << "Add Successful ..!" << endl;
                        }break;
                    }
                }while (op1!=8);
            }break;
            case 'e':
            case 'E':{
                exit(0);
            }break;
        }
    if (getchar()==10) goto Again;
    return 0;
}