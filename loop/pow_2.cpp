#include"header.h"
int main(){
    system("clear");
    double a = 8;  // 2^3
    double b = 1.0/3;
    double x = 343;  // 7^3
    double y = 1.0/3;

    double data = pow(a,b);
    double data2 = pow(x,y);
    // (x^2)^1/3
    cout << endl << data << endl;
    cout << endl << data2 << endl;

    cout << "Cbrt   : " << cbrt(8) << endl;
    cout << "Cbrt   : " << cbrt(64) << endl;
    return 0;
}