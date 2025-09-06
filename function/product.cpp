#include"header.h"
// * declear global
int id,qty;
string name;
float price,payment;
void Input(int n){
    // * block function Input()
    // int id,qty;
    // string name;
    // float price,payment;
    cout << "\nInput ID   " << n +1 <<"  : "; cin >> id;
    cout << "Input Name   " << n +1 <<"  : "; cin.ignore();getline(cin, name);
    cout << "Input Qty    " << n +1 <<"  : "; cin >> qty;
    cout << "Input Price  " << n +1 <<"  : "; cin >> price;
    payment = price * qty;
}
void Output(){
    // * block function Output()
    // int id,qty;
    // string name;
    // float price,payment;
    cout << setw(10) << id << setw(10) << name
         << setw(10) << qty << setw(10) << price << "$"
         << setw(10) << payment << "$" << endl;
}
void Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "NAME"
         << setw(10) << "QTY" << setw(11) << "Price"
         << setw(12) << "Payment\n" << endl;
}
int main(){
    // * block main function
    // int id,qty;
    // string name;
    // float price,payment;
    int n;
    cout << endl << "Input Number  : "; cin >> n;
    for(int i = 0; i < n; i++){
        Input(i);
        Header();
        Output();
    }
    return 0;
}

    
