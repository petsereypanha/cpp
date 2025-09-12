#include"../index.h"
class Product {
    private:
        int code,qty;
        char name[20];
        float price;
    public:
        void Input();
        void Output();
        void Header();
        float Total();
        float Discount();
        float Payment();
        int getCode();
        void setQty(int _qty);
        void setPrice(float _price);
};
// @Main Data Function
void Menu();
int Search(Product object[],int scode,int n);
int main(){
    system("clear");
    Product pro[10];
    Product obj;
    int n,op,scode;
    Again:{
        Menu();
        cin >> op;
        if(op == 1){
            cout << endl << "Input Element Of Product : ";
            cin >> n;
            for(int i = 0; i < n; i++){
                pro[i].Input();
            }
        }
        if(op == 2){
            obj.Header();
            for(int i = 0; i < n; i++){
                pro[i].Output();
            }
        }
        if(op == 3){
            cout << "\nInput Product's Code To Search : ";
            cin >> scode;
            int index = Search(pro,scode,n);
            if(index == -1){
                cout << endl << "Search Is Not Found ..!" << endl;
            }else{
                obj.Header();
                pro[index].Output();
                cout << endl << "Search Is Successful ..." << endl;
            }
        }
        if(op == 4){
            float sprice,sqty;
            cout << "\nInput Product's Code To Search For Update Price and Qty : ";
            cin >> scode;
            int index = Search(pro,scode,n);
            if(index == -1){
                cout << endl << "Search Is Not Found ..!" << endl;
            }else {
                cout << endl << "Input Qty To Update   : "; cin >> sqty;
                pro[index].setQty(sqty);
                cout << "Input Price To Update : "; cin >> sprice;
                pro[index].setPrice(sprice);
                cout << endl << "Update Is Successful ..." << endl;
            }
        }
    }if(op != 5) goto Again;
    return 0;
}
/// @Class Product Function Member
void Product::Input(){
    cout << endl << "Input Product ID    : "; cin >> code;
    cout << "Input Product Name  : "; cin.ignore(),cin.getline(name,20);
    cout << "Input Product Qty   : "; cin >> qty;
    cout << "Input Product Price : "; cin >> price;
}
void Product::Header(){
    cout << endl << setw(5) << "ID" << setw(10) << "Name" << setw(12)
         << "Qty" << setw(11) << "Price" << setw(13) << "Total"
         << setw(11) << "Dis" << setw(15) << "Payment\n"<< endl;
}
void Product::Output(){
    cout << setw(5) << code << setw(10) << name << setw(12)
         << qty << setw(10) << price << "$" << setw(12) << Total() << "$"
         << setw(11) << Discount() << setw(14) << Payment() << "$" << endl;
}
float Product::Total(){
    return (price * qty);
};
float Product::Discount(){
    return(
        (Total() > 0 && Total() <= 100)? 0.5 :
        (Total() > 100 && Total() <= 500)? 1 :
        (Total() > 500 && Total() <= 1000)? 3 : 5
    );
};
float Product::Payment(){
    return (
        Total() - (Total() * Discount())/100
    );
};
int Product::getCode(){
    return code;
};
void Product::setQty(int _qty){
    qty = _qty;
}
void Product::setPrice(float _price){
    price = _price;
}
// @Main Data Function
void Menu(){
    cout << endl << "=================| MENU |================" << endl;
    cout << "1. Input " << endl;
    cout << "2. Output " << endl;
    cout << "3. Search " << endl;
    cout << "4. Update " << endl;
    cout << "5. Exit " << endl;
    cout << "Please Select One Option : ";
}
int Search(Product object[],int scode,int n){
    int index = -1;
    for(int i = 0; i < n; i++){
        if(scode == object[i].getCode()){
            index = i;
        }
    }
    return index;
}