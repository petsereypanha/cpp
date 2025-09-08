#include"header.h"
int code[10],qty[10];
string name[10];
float price[10],total[10],discount[10];
void Input(int n){
    cout << "\nInput Code     : "; cin >> code[n];
    cout << "Input Name     : "; cin.ignore();getline(cin,name[n]);
    cout << "Input Qty      : "; cin >> qty[n];
    cout << "Input Price    : "; cin >> price[n];
    total[n] = qty[n] * price[n];

    // if(total[n] > 0 && total[n] <= 100){
    //     discount[n] = 0.01;
    // }
    // else if (total[n] > 100 && total[n] <= 500){
    //     discount[n] = 0.02;
    // }
    // else if(total[n] > 500 && total[n] <= 1000){
    //     discount[n] = 0.03;
    // }
    // else if (total[n] > 1000)
    // {
    //     discount[n] = 0.05;
    // }

    discount[n] = (total[n] > 0 && total[n] <= 100)?  0.01
                : (total[n] > 100 && total[n] <= 500)? 0.02
                : (total[n] > 500 && total[n] <= 1000)? 0.03
                : 0.05;

}
float Payment(int n){
    return (total[n] - total[n]*discount[n]);
}
void Output(int n){
    cout << setw(10) << code[n] << setw(10) << name[n]
         << setw(10) << qty[n] << setw(10) << price[n]
         << setw(10) << total[n] << setw(10) << discount[n]
         << setw(9) << Payment(n) << "$" << endl;

}
void Header(){
    cout << endl << setw(10) << "Code" << setw(10) << "Name"
         << setw(10) << "Qty" << setw(10) << "Price"
         << setw(10) << "Total" << setw(10) << "Discount"
         << setw(11) << "Payment\n" << endl;
}
int main(){
    system("clear");
    int n;
    cout << "Please Input Element Of Product : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        Input(i);
    }
    Header();
    for(int i = 0; i < n; i++){
        Output(i);
    }
    return 0;
}

  // Home Work

    /*
        code
        name
        qty
        price
        total
        discount
            1->100(1%)
            100->500(2%)
            500->1000(3%)
            1000->...(5%)

        function
        Input
        output
        payment
    */