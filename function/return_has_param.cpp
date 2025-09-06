#include"header.h"
/*
    return_type  function_name(type parameters ){ return value;}
    return_type and type = {int long char ...}
*/
float Func_One(float x,float y){
    float sum;
    sum = pow(x,y);
    return sum;
}
int main(){
    system("clear");
    float a,b;
    cout << endl << "Input A. : "; cin >> a;
    cout << "Input B. : "; cin >> b;
    double value = Func_One(a,b);
    cout << "Function One.  : " << value << endl;
    return 0;
}