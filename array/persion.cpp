#include"header.h"
int id[5];
string name[5];
string gender[5];
float salary[5];
void Input(int n){
    cout << "\nInput ID     : ";cin >>id[n];
    cout << "Input Name   : ";cin >> name[n];
    cout << "Input gender : ";cin >> gender[n];
    cout << "Input Salary : ";cin >> salary[n];
}
void Output(int n){
    cout << id[n] <<"\t"<< name[n] <<"\t"<< gender[n] <<"\t"
         << salary[n] << "$" <<endl;
}
int main(){
    system("clear");
    int n;

    cout << "Input Number : "; cin >> n;
    for(int i = 0; i < n; i++){
        Input(i);
    }
    cout << endl;
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