#include"header.h"
int main(){
    int a[5];
    for(int i = 0;i < 5; i++){
        cout << "Display Data  : " << &a[i] << endl;
    }
    cout << "Display Data  : " << a << endl;
    return 0;
}