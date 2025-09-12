#include"../index.h"
class Product{
    private:
        int code,qty;
        string name;
        float price;
    public:
        static float tax;
    public:
        Product();
        Product(int code,int qty,string name,float price);
        void Input();
        void Output();
        float Payment();
        friend void Header();
};
float Product::tax = 0.05;
Product::Product(){};
Product::Product(int code,int qty,string name,float price){
    this->code = code;
    this->qty = qty;
    this->name = name;
    this->price = price;
}
void Product::Input(){
    cout << endl << "Input Code    : "; cin >> code;
    cout << "Input Name    : "; cin.ignore();getline(cin,name);
    cout << "Input Qty     : "; cin >> qty;
    cout << "Input Price   : "; cin >> price;
}
float Product::Payment(){
    return(
        (price*qty) + (price*qty*tax)
    );
};
void Header(){
    cout << endl << setw(10) << "Code" << setw(10) << "Name"
         << setw(9) << "Qty" << setw(11) << "Price" << setw(10)
         << setw(9) << "tax" << setw(12) << "Payment\n" << endl;
};
void Product::Output(){
    cout << setw(10) << code << setw(10) << name
         << setw(9) << qty << setw(10) << price << "$" << setw(10)
         << setw(9) << tax << setw(11) << Payment() << "$" << endl;
}
int main(){
    system("clear");
    int n;
    Product obj,obj_two(23,34,"coca",0.5F);
    cout << endl << "Contructor" << endl;
    Header();
    obj_two.Output();
    cout << endl << "Input" << endl;
    cout << endl << "Input Element Of Product : ";
    cin >> n;
    obj = (Product*)calloc(n,sizeof(Product));
    for(int i = 0; i < n; i++){
        obj[i].Input();
    }
    Header();
    for(int i = 0; i < n; i++){
        obj[i].Output();
    }
    free(obj);
    return 0;
}

/*
    Home Work

    class Persion{
        private:
            int id,age,hour;
            string name;
            float salary;
        public:
            float tax,rate;
    };

*/