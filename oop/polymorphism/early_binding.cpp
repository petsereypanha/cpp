#include"../index.h"
// Class
class Base{
    protected:
        int id;
        string name,gender;
    public:
        Base();
        Base(int id,string name,string gender);
        void Output();
};
class Worker: public Base {
    private:
        float salary,rate,hour;
    public:
        Worker();
        Worker(int id,string name,string gender
             ,float salary,float tax,float hour);
        double Income();
        void Output();
};
class Students: public Base{
    private:
        float sc1,sc2,sc3,sc4;
    public:
        Students();
        Students(int id,string name,string gender,
                float sc1,float sc2,float sc3,float sc4);
        double Total();
        double Average();
        char Grade();
        void Output();
};
// @ Class Base
Base::Base(){};
Base::Base(int id,string name,string gender){
    this->id = id;
    this->name = name;
    this->gender =gender;
};
void Base::Output(){
    cout << endl << " Menu Base Class " << endl ;
    cout << "Base ID     : " << id << endl;
    cout << "Base Name   : " << name << endl;
    cout << "Base Gender : " << gender << endl;
};
// @ Class Worker
Worker::Worker(){};
Worker::Worker(int id,string name,string gender,float salary,float rate,float hour){
    this->id = id;
    this->name = name;
    this->gender =gender;
    this->salary = salary;
    this->rate = rate;
    this->hour = hour;
}
double Worker::Income(){
    return (
        salary + (rate*hour)
    );
}
void Worker::Output(){
    cout << endl << " Persion Class " << endl ;
    cout << "Persion ID     : " << id << endl;
    cout << "Persion Name   : " << name << endl;
    cout << "Persion Gender : " << gender << endl;
    cout << "Persion Salary : " << salary << endl;
    cout << "Persion Rate   : " << rate << endl;
    cout << "Persion Hour   : " << hour << endl;
    cout << "Persion Income : " << Income() << endl;
}
//@ Class student
Students::Students(){}
Students::Students(int id,string name,string gender,float sc1,float sc2,float sc3,float sc4){
    this->id = id;
    this->name = name;
    this->gender =gender;
    this->sc1 = sc1;
    this->sc2 = sc2;
    this->sc3 = sc3;
    this->sc4 = sc4;
}
double Students::Total(){
    return (
        sc1 + sc2 + sc3 + sc4
    );
}
double Students::Average(){
    return (
        Total()/4
    );
}
char Students::Grade(){
    return (
        (Average() >= 90 && Average() <= 100)? 'A':
        (Average() >= 80 && Average() < 90)? 'B':
        (Average() >= 70 && Average() < 80)? 'C':
        (Average() >= 60 && Average() < 70)? 'D':
        (Average() >= 50 && Average() < 60)? 'E': 'F'
    );
}
void Students::Output(){
    cout << endl << " Student Class " << endl ;
    cout << "Student ID     : " << id << endl;
    cout << "Student Name   : " << name << endl;
    cout << "Student Gender : " << gender << endl;
    cout << "Student Sc1    : " << sc1 << endl;
    cout << "Student Sc2    : " << sc2 << endl;
    cout << "Student Sc3    : " << sc3 << endl;
    cout << "Student Sc4    : " << sc4 << endl;
    cout << "Student Total  : " << Total() << endl;
    cout << "Student Avg    : " << Average() << endl;
    cout << "Student Grade  : " << Grade() << endl;
}
int main(){
    system("clear");
    Base *base;
    Worker worker(1,"Lala","male",1000,20,5);
    Students stu(1,"Rithy","female",90,80,89,50);
    base = &worker;
    base->Output();
    worker.Output();
    base = &stu;
    base->Output();
    stu.Output();
    return 0;
}