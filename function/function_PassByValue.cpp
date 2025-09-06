#include"header.h"
void Data(int a,int b, int c){
    a = a + 3;
    b = b + 5;
    c = c + 2;
    cout << "\n Output A in Function : " << a << endl;
    cout << " Output B in Function : " << b << endl;
    cout << " Output C in Function : " << c << endl;
}
int main(){
    int a = 15,b = 24,c = 34;
    Data(a,b,c);
    cout << "\n Output A in Main : " << a << endl;
    cout << " Output B in Main : " << b << endl;
    cout << " Output C in Main : " << c << endl;
    return 0;
}