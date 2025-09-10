#include"head.h"
struct Student{
    int id;
    string name;
    struct Object{
        float CPP,Java,TypeScript,Kotlin,Go,Rust;
    }obj;
};
void Header();
void Input(Student object[],int index);
void Output(Student object[],int index);
float Total(Student object[],int index);
double Avg(Student object[],int index);
char Grad(Student object[],int index);
int main(){
    system("clear");
    Student stu[10];
    int n,op;
    do{
        cout << endl << "============| MENU |============" << endl;
        cout << " 1. Input" << endl;
        cout << " 2. Output" << endl;
        cout << " 3. Exit " <<endl;
        cout << "Please Select One Option :";
        cin >> op;
        if(op == 1){
            cout << endl << "Input Element Of Student :";
            cin >> n;
            for(int i = 0; i < n; i++){
                Input(stu,i);
            }
        }
        if(op == 2){
            Header();
            for(int i = 0; i < n; i++){
                Output(stu,i);
            }
        }
    }while(op != 3);
    return 0;
}
void Header(){
    cout << endl << "ID" << setw(10) << "Name" << setw(10) << "Total"
         << setw(10) << "Avg" << setw(10) << "Grad"<< endl;
}
void Input(Student object[],int index){
    cout << endl << "Input ID       : "; cin >> object[index].id;
    cout << "Input Name     : "; cin >> object[index].name;
    cout << "Input CPP      : "; cin >> object[index].obj.CPP;
    cout << "Input Java     : "; cin >> object[index].obj.Java;
    cout << "Input TS       : "; cin >> object[index].obj.TypeScript;
    cout << "Input KL       : "; cin >> object[index].obj.Kotlin;
    cout << "Input Rust     : "; cin >> object[index].obj.Rust;
    cout << "Input Go       : "; cin >> object[index].obj.Go;
}
void Output(Student object[],int index){
    cout << endl << object[index].id << setw(10) << object[index].name << setw(10) << Total(object,index)
         << setw(10) << Avg(object,index) << setw(10) << Grad(object,index)<< endl;
}
float Total(Student object[],int index){
    return(
        object[index].obj.CPP + object[index].obj.Java + object[index].obj.Go
        + object[index].obj.Kotlin + object[index].obj.Rust+object[index].obj.TypeScript
    );
}
double Avg(Student object[],int index){
    return(
        Total(object,index)/6
    );
}
char Grad(Student object[],int index){
    // // char grad;
    // if(Avg(object,index) > 90 && Avg(object,index) <= 100){
    //     //  grade = 'A';
    //     return 'A';
    // }
    // if(Avg(object,index) > 80 && Avg(object,index) <= 90){
    //     //  grade = 'B';
    //     return 'B';
    // }
    // if(Avg(object,index) > 70 && Avg(object,index) <= 80){
    //     //  grade = 'C';
    //     return 'C';
    // }
    // if(Avg(object,index) > 60 && Avg(object,index) <= 70){
    //     //  grade = 'D';
    //     return 'D';
    // }
    // if(Avg(object,index) >= 50 && Avg(object,index) <= 60){
    //     //  grade = 'E';
    //     return 'E';
    // }
    // if(Avg(object,index) > 0 && Avg(object,index) < 50){
    //     //  grade = 'F';
    //     return 'F';
    // }
    // // return grad;

    return ( (Avg(object,index) > 90 && Avg(object,index) <= 100)? 'A':
            (Avg(object,index) > 80 && Avg(object,index) <= 90)? 'B':
            (Avg(object,index) > 70 && Avg(object,index) <= 80)? 'C':
            (Avg(object,index) > 60 && Avg(object,index) <= 70)? 'D':
            (Avg(object,index) >= 50 && Avg(object,index) <= 60)? 'E': 'F');
}




// Home Work
// struct Persion{
//     id,name,gender;
//     struct Time{
//         hour,rate,dob;
//     };
// }

// Input()
// Output()
// Total()
// Income();