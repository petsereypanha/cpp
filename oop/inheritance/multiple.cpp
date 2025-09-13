#include"../index.h"
class Base_One{
    protected:
        int code;
        string name;
    public:
        Base_One();
        Base_One(int code,string name);
        void Input();
        void Output();
        friend void Header_one();
};
class Base_Two{
    protected:
        int qty;
        float price;
    public:
        Base_Two();
        Base_Two(int qty,float price);
        void Input();
        void Output();
        friend void Header_two();
};
class Derived: protected Base_One,private Base_Two{
    private:
        int dis;
        float tax;
    public:
        Derived();
        Derived(int code,string name,int qty,float price,int dis,float tax);
        void Input();
        float Total();
        float Payment();
        void Output();
        void Search(int scode,int *b);
        friend void Header_three();
};
// @ Base Class One
Base_One::Base_One(){};
Base_One::Base_One(int code,string name){
    this->code = code;
    this->name = name;
}
void Base_One::Input(){
    cout << endl << "Input Code     : "; cin >> code;
    cout << "Input Name     : "; cin.ignore();getline(cin,name);
}
void Base_One::Output(){
    cout << setw(10) << code << setw(10) << name;
}
void Header_one(){
      cout << endl << setw(10) << "Code" << setw(10) << "Name";
}
// @ Base Two
Base_Two::Base_Two(){};
Base_Two::Base_Two(int qty,float price){
    this->qty = qty;
    this->price = price;
}
void Base_Two::Input(){
    cout << "Input Qty      : "; cin >> qty;
    cout << "Input Price    : "; cin >> price;
}
void Base_Two::Output(){
    cout << setw(10) << qty << setw(9) << price << "$";
}
void Header_two(){
    cout << setw(10) << "Qty" << setw(10) << "Price";
}
// @ Derived Class
Derived::Derived(){};
Derived::Derived(int code,string name,int qty,float price,int dis,float tax){
    this->code = code;
    this->name = name;
    this->qty = qty;
    this->price = price;
    this->dis = dis;
    this->tax = tax;
}
void Derived::Input(){
    Base_One::Input();
    Base_Two::Input();
    cout << "Input Dis      : "; cin >> dis;
    cout << "Input Tax      : "; cin >> tax;
}
float Derived::Total(){
    return (
        price * qty
    );
}
float Derived::Payment(){
    return (
        Total() - (Total()*dis)/100 + (Total()*tax)/100
    );
}
void Derived::Output(){
    Base_One::Output();
    Base_Two::Output();
    cout << setw(10) << dis << setw(10) << tax
         << setw(9) << Total() << "$" << setw(9) << Payment() << "$" << endl;
}
void Derived::Search(int scode,int *b){
    if(scode == code){
        Output();
        *b = 0;
    }
};
void Header_three(){
    Header_one();
    Header_two();
    cout << setw(10) << "Dis" << setw(10) << "Tax"
         << setw(10) << "Total" << setw(10) << "Payment" << endl;
}
// @ Mian Function
int main(){
    system("clear");
    Derived obj[5],tem,obj_param(1,"Coca",90,0.6F,5,0.5F);
    int op,n,m,arg_n = 7;
    string arg[] = {
        "1. Contructor",
        "2. Input",
        "3. Output",
        "4. Search",
        "5. Sort",
        "6. Add",
        "7. Exist",
    };
    do{
        Menu_Arr(arg,arg_n);
        cin >> op;
        if(op == 1){
            Header_three();
            obj_param.Output();
        }
        if(op == 2){
            cout << endl << "Input Element Of Product : ";cin >> n;
            for(int i = 0; i < n; i++){
                obj[i].Input();
            }
        }
        if(op == 3){
            Header_three();
            for(int i = 0; i < n; i++){
                obj[i].Output();
            }
        }
        if(op == 4){
            int scode,b=1;
            cout << "Input Product's Id To Search : ";cin >> scode;
            Header_three();
            for(int i = 0; i < n; i++){
                obj[i].Search(scode,&b);
            }
            if(b==1){
                cout << endl << "Search Is Not Found ..!" << endl;
            }else{
                cout << endl << "Search Is Success ..!" << endl;
            }
        }
        if(op == 5){
            for(int i = 0;i < n; i++){
                for(int j = i+1; j < n; j++){
                    if(obj[i].Payment() < obj[j].Payment()){
                        tem = obj[i];
                        obj[i] = obj[j];
                        obj[j] = tem;
                    }
                }
            }
            cout << "Sort is Success ..!" << endl;
        }
        if(op == 6){
            cout << "Input Number To Add  : "; cin >> m;
            for(int i = n; i <n+m; i++){
                obj[i].Input();
            }
            n += m;
        }
    }while(op != 7);
    return 0;
}