#include"../index.h"
class Parent{
    private:
        int id;
        string name;
        float price;
    public:
        Parent();
        Parent(int id,string name,float price,int qty,float tax);
        string getName();
        void setPrice(float price);
        void Input();
        void Output();
        float Total();
        float Discount();
        float Payment();
        friend void Header_Parent();
    public:
        class Child{
            private:
                int qty;
                float tax;
            public:
                Child();
                Child(int qty,float tax);
                void setQty(int qty);
                void setTax(float tax);
                void Input();
                void Output();
                int getQty();
                float getTax();
                friend void Header_chirldren();
        }obj_child;
};
// @ Friend Method
void Header_chirldren(){
    cout << setw(10) << "Qty" << setw(10) << "Tax" ;
};
void Header_Parent(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Preice";
    Header_chirldren();
    cout << setw(10) << "Total" << setw(10) << "Discount"
         << setw(10) << "Payment\n" << endl;
}
// @ Parent Method
Parent::Parent(){}
Parent::Parent(int id,string name,float price,int qty,float tax){
    this->id = id;
    this->name = name;
    this->price = price;
    Child obj_ch_one(qty,tax);
    cout << setw(10) << id << setw(10) << name << setw(10)
         << price << setw(10) << obj_ch_one.getQty() << setw(9)
         << obj_ch_one.getTax() << setw(10)
         << (price * obj_ch_one.getQty()) << "$"
         << setw(10) << (
            ((price * obj_ch_one.getQty()) > 0 && (price * obj_ch_one.getQty()) < 200)? 5:
            ((price * obj_ch_one.getQty()) > 200 && (price * obj_ch_one.getQty()) < 500)? 10:
            ((price * obj_ch_one.getQty()) > 500 && (price * obj_ch_one.getQty()) < 1000)? 15:20
            )
         << setw(9) << (
            ((price * obj_ch_one.getQty())) +
            ((price * obj_ch_one.getQty()) * obj_ch_one.getTax())/100 -
            ((price * obj_ch_one.getQty()) * (
                (
            ((price * obj_ch_one.getQty()) > 0 && (price * obj_ch_one.getQty()) < 200)? 5:
            ((price * obj_ch_one.getQty()) > 200 && (price * obj_ch_one.getQty()) < 500)? 10:
            ((price * obj_ch_one.getQty()) > 500 && (price * obj_ch_one.getQty()) < 1000)? 15:20
            )
            ))/100
         ) << "$"<< endl;
}
string Parent::getName(){
    return(
        name
    );
};
void Parent::setPrice(float price){
    this->price = price;
};
void Parent::Input(){
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Name     : "; cin.ignore();getline(cin,name);
    cout << "Input Price    : "; cin >> price;
    obj_child.Input();
}
void Parent::Output(){
    cout << setw(10) << id << setw(10) << name << setw(9)<< price << "$";
         obj_child.Output();
    cout << setw(9) << Total() << "$" << setw(10) << Discount()
         << setw(8) << Payment() << "$" << endl;
}
float Parent::Total(){
    return(
        price * obj_child.getQty()
    );
}
float Parent::Discount(){
    return(
        (Total() > 0 && Total() < 200)? 5:
        (Total() > 200 && Total() < 500)? 10:
        (Total() > 500 && Total() < 1000)? 15:20
    );
}
float Parent::Payment(){
    return(
        Total() + (Total()*obj_child.getTax())/100 - (Total()*Discount())/100
    );
}
// @  Child Method
Parent::Child::Child(){}
Parent::Child::Child(int qty,float tax){
    this->qty = qty;
    this->tax = tax;
}
void Parent::Child::setQty(int qty){
    this->qty = qty;
};
void Parent::Child::setTax(float tax){
    this->tax = tax;
};
void Parent::Child::Input(){
    cout << "Input Qty      : "; cin >> qty;
    cout << "Input Tax      : "; cin >> tax;
}
void Parent::Child::Output(){
    cout << setw(10) << qty << setw(10) << tax ;
}
int Parent::Child::getQty(){
    return qty;
};
float Parent::Child::getTax(){
    return tax;
};
// @ Function Main
int Search(Parent obj_param[],string name_param,int n){
    int index = -1;
    for(int i = 0; i < n; i++){
        if(name_param == obj_param[i].getName()){
            index = i;
        }
    }
    return index;
}
// @Main
int main(){
    system("clear");
    int n,arg_num = 6,op_n,arg_u_num=4;
    char op;
    string sname;
    Parent obj[10];
    string arg[] = {
        "   A. Contructor ",
        "   B. Input ",
        "   C. Output ",
        "   D. Search",
        "   E. Update",
        "   G. Exist "
    };
    string arg_u[] = {
        "   1. Update Price",
        "   2. Update Qty",
        "   3. Update Tax",
        "   4. Exist "
    };
    do{
        Menu_Arr(arg,arg_num);
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                Header_Parent();
                Parent obj_one(1,"Coca",0.3F,14,2);
            }break;
            case 'B':
            case 'b':{
                cout << endl << "Input Number Of Data   : ";
                cin >> n;
                for(int i = 0; i < n; i++){
                    obj[i].Input();
                }
            }break;
            case 'C':
            case 'c':{
                Header_Parent();
                for(int i = 0; i < n; i++){
                    obj[i].Output();
                }
            }break;
            case 'D':
            case 'd':{
                cout << "\nInput Name To Search : ";
                cin >> sname;
                int index = Search(obj,sname,n);
                if(index == -1){
                    cout << endl << "Search Is Not Found ..!" << endl;
                }else{
                    Header_Parent();
                    obj[index].Output();
                }
            }break;
            case 'e':
            case 'E':{
                do{
                    Menu_Arr(arg_u,arg_u_num);
                    cin >> op_n;
                    if(op_n == 1){
                        float data_price;
                        cout << endl << "Input Name To Search For Update : ";
                        cin >> sname;
                        int index = Search(obj,sname,n);
                        if(index == -1){
                            cout << endl << "Search Is Not Found ..!" << endl;
                        }else{
                            cout << "Input Price For Update : "; cin >> data_price;
                            obj[index].setPrice(data_price);
                            cout << endl << "Update IS Success ..!" << endl;
                        }
                    }
                    if(op_n == 2){
                        int data_qty;
                        cout << endl << "Input Name To Search For Update : ";
                        cin >> sname;
                        int index = Search(obj,sname,n);
                        if(index == -1){
                            cout << endl << "Search Is Not Found ..!" << endl;
                        }else{
                            cout << "Input Qty For Update : "; cin >> data_qty;
                            obj[index].obj_child.setQty(data_qty);
                            cout << endl << "Update IS Success ..!" << endl;
                        }
                    }
                    if(op_n == 3){
                        int data_tax;
                        cout << endl << "Input Name To Search For Update : ";
                        cin >> sname;
                        int index = Search(obj,sname,n);
                        if(index == -1){
                            cout << endl << "Search Is Not Found ..!" << endl;
                        }else{
                            cout << "Input Tax For Update : "; cin >> data_tax;
                            obj[index].obj_child.setTax(data_tax);
                            cout << endl << "Update IS Success ..!" << endl;
                        }
                    }
                }while(op_n != 4);
            }break;
            case 'G':
            case 'g':{
                exit(0);
            }break;
        }
    }while(getchar() == 10);
    return 0;
}

/*
    Home Work

    Update
        option:{
            1, update price
            2, update qty
            3. update tax
        }
    insert
    sort
*/

/*
    obj = [
        {
            id: 1
            name: coca,
            obj_chil: {
                qty: 90,
                tax: 10
            }
        },
         {
            id: 2
            name: sting,
            obj_chil: {
                qty: 30,
                tax: 20
            }
        },

    ]

*/