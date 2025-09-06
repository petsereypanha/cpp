#include"header.h"
// return_type function_name(){ retrun value;}
// return_type = {int,long,short,char,float...}
int func_One(){
    int a,b;
    cout << "(Input A and B :) ";
    cin >> a >> b;
   return (a+b);
}
int func_Two(){
    int x,y,sum;
    cout << "(Input X and Y :) ";
    cin >> x; cin >> y;
    sum = x + y;
  return sum;
}
void Output(){
    int data;
    data = func_One() + func_Two();
    cout << endl << "Display Function : " << data << endl;
}
int main(){
    system("clear");
    Output();
    return 0;
}