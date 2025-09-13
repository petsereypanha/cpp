#include"../index.h"
// @Class
class Base {
    protected:
        int id,userId,rollNumber;
        string name;
    public:
        void Input();
        void Output();
        friend void Header_Base();
};
class Persion: private Base{
    private:
        string position;
        char gender[10];
        float salary,rate,hour;
    public:
        void Input();
        float Total_Income();
        void Output();
        friend void Header_Persion();
};
class Subject{
    protected:
        float C,Java,Flutter;
    public:
        void Input();
        float Total();
        float Average();
        char Grade();
        void Output();
        friend void Header_Subject();
};
class Student: private Base,private Subject{
    private:
        short age;
        char gender[10],dob[11],Class[10];
        string address,department;
    public:
        void Input();
        void Output();
        friend void Header_Student();
};
class Product: public Base{
    protected:
        int qty,dis;
        float price;
    public:
        static float tax;
    public:
        void Input();
        float Total();
        float Payment();
        float Cash_Money();
        void Output();
        friend void Header_Product();
};
class Market: private Product{
    private:
        string maket_name;
    public:
        void Input();
        void Output();
        friend void Header_Makert();
};
// @ Class Base
void Base::Input(){
    cout << endl << "Input ID           : "; cin >> id;
    cout << "Input UserID       : "; cin >> userId;
    cout << "Input RollNumber   : "; cin >> rollNumber;
    cout << "Input Name         : "; cin.ignore();getline(cin,name);
}
void Base::Output(){
    cout << setw(5) << id << setw(9) << userId << setw(13) << rollNumber
         << setw(15) << name;
}
void Header_Base(){
    cout << endl << setw(5) << "ID" << setw(9) << "UserID" << setw(13) << "RollNumber"
         << setw(15) << "Name";
}
// @ Class Persion
void Persion::Input(){
    Base::Input();
    cout << "Input Gender       : "; cin.ignore();cin.getline(gender,10);
    cout << "Input Position     : "; cin >> position;
    cout << "Input Salary       : "; cin >> salary;
    cout << "Input Rate         : "; cin >> rate;
    cout << "Input Hour         : "; cin >> hour;
}
float Persion::Total_Income(){
    return (
        salary + (rate*hour)
    );
}
void Persion::Output(){
    Base::Output();
    cout << setw(9) << gender << setw(11) << position << setw(9) << salary
         << setw(9) << rate << setw(5) << hour << endl;
}
void Header_Persion(){
    Header_Base();
    cout << setw(9) << "Gender" << setw(11) << "Position" << setw(9) << "Salary"
         << setw(9) << "Rate" << setw(5) << "Hour\n" << endl;
}
// @ Class Subject
void Subject::Input(){
    cout << "Input C Program    : "; cin >> C;
    cout << "Input Java Program : "; cin >> Java;
    cout << "Input Flutter      : "; cin >> Flutter;
}
float Subject::Total(){
    return (
        C + Java + Flutter
    );
};
float Subject::Average(){
    return (
        Total()/3
    );
};
char Subject::Grade(){
    return (
        (Average() >= 90 && Average() <= 100)? 'A':
        (Average() >= 80 && Average() < 90)? 'B':
        (Average() >= 70 && Average() < 80)? 'C':
        (Average() >= 60 && Average() < 70)? 'D':
        (Average() >= 50 && Average() < 60)? 'E': 'F'
    );
};
void Subject::Output(){
    cout << setw(5) << C << setw(7) << Java << setw(9) << Flutter
         << setw(6)  << Total() << setw(5) << Average() << setw(4)
         << Grade() << endl;
};
void Header_Subject(){
    cout << setw(5) << "C" << setw(7) << "Java" << setw(9) << "Flutter"
         << setw(6)  << "Total" << setw(5) << "Average" << setw(4)
         << "Grade\n" << endl;
}
// @ Class Student
void Student::Input(){
    Base::Input();
    cout << "Input Age          : ";cin >> age;
    cout << "Input Gender       : ";cin.ignore();cin.getline(gender,10);
    cout << "Input DOB          : ";cin.ignore();cin.getline(dob,11);
    cout << "Input Class        : ";cin.ignore();cin.getline(Class,10);
    cout << "Input Address      : ";cin.ignore();getline(cin,address);
    cout << "Input Department   : ";cin.ignore();getline(cin,department);
    Subject::Input();
}
void Student::Output(){
    Base::Output();
    cout << setw(5) << age << setw(9) << gender << setw(12) << dob
         << setw(7) << Class << setw(12) << address << setw(10) << department;
    Subject::Output();
}
void Header_Student(){
    Header_Base();
    cout << setw(5) << "Age" << setw(9) << "Gender" << setw(12) << "DOB"
         << setw(7) << "Class" << setw(12) << "Address" << setw(10) << "Department";
    Header_Subject();
}
// @Class Product
float Product::tax = 3.5F;
void Product::Input(){
    Base::Input();
    cout << "Input Qty          : "; cin >> qty;
    cout << "Input Discout      : "; cin >> dis;
    cout << "Input Price        : "; cin >> price;
}
float Product::Total(){
    return (
        qty * price
    );
}
float Product::Payment(){
    return (
        Total() + (Total() * tax)/100 - (Total() * dis)/100
    );
}
float Product::Cash_Money(){
    int op;
    float Chash_back,CS_money;
    cout << endl << " ------------|  Cash_Money |-----------" << endl;
    cout << "1. Payment USD  << $ >>" << endl;
    cout << "2. Payment Reil << ៛ >>" << endl;
    cout << "Choose One Option : ";
    cin >> op;
    if(op == 1){
        cout << endl << "Your Payment  : " << Payment() << " $" << endl;
        cout << "Castomer Money     : "; cin >> CS_money;
        Chash_back = CS_money - Payment();
        cout << "Check_Out Money    : " << Chash_back << " $" << endl;
    }
    if(op == 2){
        cout << endl << "Your Payment  : " << Payment() * 4000 << " ៛" << endl;
        cout << "Castomer Money     : "; cin >> CS_money;
        Chash_back = CS_money - (Payment() * 4000);
        cout << "Check_Out Money    : " << Chash_back << " ៛" << endl;
    }
    return Chash_back;
}
void Product::Output(){
    Base::Output();
    cout << setw(5) << qty << setw(5) << dis << setw(7) << price
         << setw(5) << tax << setw(7) << Total() << setw(7) << Payment()
         << setw(7) << Cash_Money() ;
}
void Header_Product(){
    Header_Base();
    cout << setw(5) << "Qty" << setw(5) << "Dis" << setw(7) << "Price"
         << setw(5) << "Tax" << setw(7) << "Total" << setw(7) << "Payment"
         << setw(7) << "Cash_Money" ;
}
// @ Class Market
void Market::Input(){
    Product::Input();
    cout << "Input      : "; cin >> maket_name;
}
void Market::Output(){
    Product::Output();
    cout << setw(13) << maket_name << endl;
}
void Header_Makert(){
    Header_Product();
    cout << setw(10) << "Maket Name\n" << endl;
}
int main(){
    Persion obj_one;
    obj_one.Input();
    obj_one.Output();
    Student obj_two;
    obj_two.Input();
    obj_two.Output();
    Market obj_three;
    obj_three.Input();
    obj_three.Output();
    return 0;
}
