#include"../index.h"
// design class
class Base {
    private:
        int id;
        string brand;
    public:
        int getID();
        void Input();
        void Output();
        friend void Header_Base();
};
class Children: public Base{  // single inheritance
    private:
        int num_code;
        string name;
    public:
        void Input();
        void Output();
        friend void Header_Children();
};
class Childrens: public Children{  // single inheritance
    private:
        int qty;
        float price;
    public:
        static float tax;
    public:
        void Input();
        float Total();
        float Payment();
        void Output();
        friend void Header_Childrens();
};
// Base class
int Base::getID(){
    return id;
}
void Base::Input(){
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Brand    : "; cin.ignore();getline(cin,brand);
};
void Base::Output(){
    cout << setw(10) << id << setw(10) << brand;
}
void Header_Base(){
    cout << endl << setw(10) << "ID" << setw(10) << "Brand";
}
// Children
void Children::Input(){
    Base::Input();
    cout << "Input Num_Code : ";cin >> num_code;
    cout << "Input Name     : ";cin.ignore();getline(cin,name);
}
void Children::Output(){
    Base::Output();
    cout << setw(10) << num_code << setw(10) << name;
}
void Header_Children(){
    Header_Base();
    cout << setw(10) << "Num_Code" << setw(10) << "Name";
}
// Childrens
float Childrens::tax = 10.0F;
void Childrens::Input(){
    Children::Input();
    cout << "Input Qty      : "; cin >> qty;
    cout << "Input Price    : "; cin >> price;
};
float Childrens::Total(){
    return (
        qty * price
    );
};
float Childrens::Payment(){
    return (
        Total() + (Total() * tax)/100
    );
};
void Childrens::Output(){
    Children::Output();
    cout << setw(10) << qty << setw(9) << price << "$"
         << setw(9) << Total() << "$" << setw(9) << Payment() << "$" << endl;
};
void Header_Childrens(){
    Header_Children();
    cout << setw(10) << "Qty" << setw(10) << "Price"
         << setw(10) << "Total" << setw(10) << "Payment\n" << endl;
};
int main(){
    Childrens obj[10];
    int op,n,arr_num=4;
    string arr[] = {
        "1. Input",
        "2. Output",
        "3. Search",
        "4. Exist"
    };
    do{
        Menu_Arr(arr,arr_num);
        cin >> op;
        if(op == 1){
            cout << endl << "Input Number Of Product : ";
            cin >> n;
            for(int i = 0;i < n; i++){
                obj[i].Input();
            }
        }
        if(op == 2){
            Header_Childrens();
            for(int i = 0; i < n; i++){
                obj[i].Output();
            }
        }
        if(op == 3){
            int sid,b=1;
            cout << endl << "Input Product's ID To Search : ";
            cin >> sid;
            for(int i = 0; i < n;i++){
                if(sid == obj[i].getID()){
                    Header_Childrens();
                    obj[i].Output();
                    b=0;
                }
            }
            if(b==1){
                cout << endl << "Search Is Not Found ..!" << endl;
            }else{
                 cout << endl << "Search Is Successful" << endl;
            }
        }
    }while(op!=4);
    return 0;
}