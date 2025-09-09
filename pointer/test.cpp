#include"header.h"
int main(){
    int data = 733;
    int *p1,*p2;
    p1 = &data;
    p2 = p1;
    cout << "Data         : " << data << endl;
    cout << "Pointer One  : " << *p1 << endl;
    cout << "Pointer Two  : " << *p2 << endl;
    return 0;
}