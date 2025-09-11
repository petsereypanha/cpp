#include<iostream>
using namespace std;
int main(){
    int  x = 8;
    int  a= 16;
    int  b = 64;
    x /=b /= a;
    cout << x << "  " << a << "     " << b <<endl;
    return 0;
}