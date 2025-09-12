#include"../index.h"
class Student{
    private:
        int id;
        string name;
        float score1,score2,score3,score4;
    public:
        ~Student();
        Student();
        Student(
            int _id,string _name,float _score1,
            float _score2,float _score3,float _score4
        );
        void Input();
        void Header();
        float Total();
        float Avg();
        char Grad();
        void Output();
        int getId();
};
int Search(Student *obj,int n);
int main(){
    system("clear");
    int op,n;
    Student obj[10],sub;
    do{
        cout << "\n=============| Menu |==============" << endl;
        cout << "   1.  Contructor " << endl;
        cout << "   2.  Input " << endl;
        cout << "   3.  Output" << endl;
        cout << "   4.  Search" << endl;
        cout << "   4.  Destructor " << endl;
        cout << "   6.  Exit " << endl;
        cout << "Please Slect One Option :";
        cin >> op;
        if(op == 1){
            Student obj1,obj2(1,"Meng",90,80,89,78);
            obj1.Header();
            obj1.Output();
            obj2.Output();
            obj1.~Student();
            obj2.~Student();
        }
        if(op == 2){
            cout << endl << "Input Number N : ";
            cin >> n;
            for(int i = 0; i < n; i++){
                obj[i].Input();
            }
        }
        if(op == 3){
            sub.Header();
            for(int i = 0; i < n; i++){
                obj[i].Output();
            }
        }
        if(op == 4){
            int index = Search(obj,n);
            if(index == -1){
                cout << endl << "Search Is Not Found ..!";
            }else{
                sub.Header();
                obj[index].Output();
            }
        }
        if(op == 5){
            for(int i = 0; i < n; i++){
                obj[i].~Student();
            }
        }
    }while(op != 6);
    return 0;
}
// @ Class Method
Student::~Student(){};
Student::Student(){
    id = 0;
    name = "NA";
    score1 = 0;
    score2 = 0;
    score3 = 0;
    score4 = 0;
}
Student::Student(
    int _id,string _name,float _score1,
    float _score2,float _score3,float _score4
){
    id = _id;
    name = _name;
    score1 = _score1;
    score2 = _score2;
    score3 = _score3;
    score4 = _score4;
}
void Student::Input(){
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Name     : "; cin.ignore();getline(cin,name);
    cout << "Input Score 1  : "; cin >> score1;
    cout << "Input Score 2  : "; cin >> score2;
    cout << "Input Score 3  : "; cin >> score3;
    cout << "Input Score 4  : "; cin >> score4;
}
float Student::Total(){
    return (score1+score2+score3+score4);
};
float Student::Avg(){
    return Total()/4;
};
char Student::Grad(){
    return(
        (Avg()>=90 && Avg() <= 100)? 'A':
        (Avg()>=80 && Avg() < 90)? 'B':
        (Avg()>=70 && Avg() < 80)? 'C':
        (Avg()>=60 && Avg() < 70)? 'D':
        (Avg()>=50 && Avg() < 60)? 'E': 'F'
    );
};
void Student::Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name"
         << setw(10) << "Score 1" << setw(10) << "Score 2"
         << setw(10) << "Score 3" << setw(10) << "Score 4"
         << setw(10) << "Total" << setw(10) << "Avg"
         << setw(10) << "Grad" << endl << endl;
};
void Student::Output(){
    cout << setw(10) << id << setw(10) << name
         << setw(10) << score1 << setw(10) << score2
         << setw(10) << score3 << setw(10) << score4
         << setw(10) << Total() << setw(10) << Avg()
         << setw(10) << Grad() << endl;
};
int Student::getId(){
    return id;
};

// @ Main Function
int Search(Student *obj,int n){
    int index = -1,sid;
    cout << endl << "Input ID To Search : ";
    cin >> sid;
    for(int i = 0; i < n; i++){
        if(sid == (obj+i)->getId()){
            index = i;
        }
    }
    return index;
};
