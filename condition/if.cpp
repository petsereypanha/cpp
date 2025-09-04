#include"header.h"
int main(){
    system("clear");
    int a;
    cout << "\nInput A    : "; cin >> a;
    if( a > 10){
        cout << a << " > 10" << endl;
    }
    if(a < 10)
        cout << a << " < 10" << endl;

    return 0;
}


//     Home Work

// Persion
//    int  id,hour
//    string name
//    char gender[]
//    float salary,tax,rate,total
//      total = salary + rate*hour;
//      if(total > 500){ tax = 0.5%}
//      else { tax = 1%}
//    double Income = total - (total*tax);
